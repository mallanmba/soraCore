/* -*- C++ -*- *****************************************************************
 * Copyright (c) 2013 United States Government as represented by the
 * Administrator of the National Aeronautics and Space Administration.
 * All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.

******************************************************************************/
#ifndef kn_StateMachine_h
#define kn_StateMachine_h

#include "knShare_Export.h"
#include "Repository.h"

#include <ace/Time_Value.h>

#include <boost/signals2.hpp>

#include <iosfwd>
#include <string>
#include <vector>

namespace kn
{

  /** @ingroup knShare */
  class knShare_Export StateMachine
  {
  public:
    // POD transition tample entry for static memory table
    // only to be used internally
    struct TT
    {
      char const * sourceState;
      char const * event;
      char const * targetState;
    };

    // state machine description
    // all stringified
    /** @ingroup knShare */
    struct knShare_Export Description
    {
      // transition description
      // all stringified
      /** @ingroup knShare */
      struct knShare_Export TransitionTriple
      {
        std::string sourceState;
        std::string event;
        std::string targetState;

        TransitionTriple() {}
        TransitionTriple(std::string const& s, std::string const& e, std::string const& t);
        TransitionTriple(TT const& transition);

        bool operator< (StateMachine::Description::TransitionTriple const& rhs) const {
          return ( (sourceState < rhs.sourceState) ||
                   (sourceState == rhs.sourceState && event < rhs.event) ||
                   (sourceState == rhs.sourceState && event == rhs.event && targetState < rhs.targetState) );
        }
        bool operator== (StateMachine::Description::TransitionTriple const& rhs) const {
          return (sourceState == rhs.sourceState && event == rhs.event && targetState == rhs.targetState);
        }
     };

      typedef std::vector<std::string> StringVector;
      typedef std::vector<TransitionTriple> TransitionVector;

      std::string startState;
      StringVector states;
      StringVector events;
      TransitionVector transitions;

      Description() {}
      Description(char const * startState,
                  char const * const states[], int numStates,
                  char const * const events[], int numEvents,
                  TT const transitions[], int numTransitions);
      void merge(Description const& rhs);
      void trimTransitionTable();
      void assertConsistency() const;

      int stateIdx(std::string const& state) const;
      int eventIdx(std::string const& event) const;
    };

    typedef boost::signals2::signal<void (ACE_Time_Value const&, int, int, int, int)> TransitionSignal;

    StateMachine(std::string const& name = "Subsystem");
    virtual ~StateMachine() throw();

    std::string const& name() const { return m_name; }

    Description const& description() const { return m_description; }
    Description& description() { return m_description; }

    TransitionSignal& transitionSignal() throw() { return m_transitionSignal; }

    void signalTransition(ACE_Time_Value const& timestamp, std::string const& sourceState, std::string const& event, std::string const& targetState, int status);
    void resignal();

  protected:
    std::string m_name;
    Description m_description;
    TransitionSignal m_transitionSignal;

    ACE_Time_Value m_timestamp;
    int m_sourceStateIdx;
    int m_eventIdx;
    int m_targetStateIdx;
    int m_status;
  };

  /** @ingroup knShare */
  knShare_Export extern std::ostream& operator<< (std::ostream& ostr, StateMachine::Description::TransitionTriple const& rhs);
  /** @ingroup knShare */
  knShare_Export extern std::ostream& operator<< (std::ostream& ostr, StateMachine::Description const& rhs);
}
#endif // kn_StateMachineConnector_h
