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
#include "StateMachine.h"

#include <algorithm>
#include <iostream>

#include <cassert>

namespace kn
{
  using namespace std;

  std::ostream& operator << (std::ostream& ostr, StateMachine::Description::TransitionTriple const& rhs) 
  {
    ostr << "(" << rhs.sourceState << ", " << rhs.event << ", " << rhs.targetState << ")";
    return ostr;
  }

  StateMachine::Description::TransitionTriple::TransitionTriple(std::string const& s, std::string const& e, std::string const& t) :
    sourceState(s),
    event(e),
    targetState(t)
  {}

  StateMachine::Description::TransitionTriple::TransitionTriple(TT const& transition) :
    sourceState(transition.sourceState),
    event(transition.event),
    targetState(transition.targetState)
  {}

  std::ostream& operator << (std::ostream& ostr, StateMachine::Description const& rhs) 
  {
    ostr << "{" << rhs.startState << ", " << endl
         << "  {";

    {
      StateMachine::Description::StringVector::const_iterator first, last = rhs.states.end();
      for (first = rhs.states.begin(); first != last; ++first) {
        if (first != rhs.states.begin()) {
          ostr << ", ";
      }
        ostr << *first;
      }
      
      ostr << "}," << endl
           << "  {";
      
      last = rhs.events.end();
      for (first = rhs.events.begin(); first != last; ++first) {
        if (first != rhs.events.begin()) {
          ostr << ", ";
      }
        ostr << *first;
      }

      ostr << "}," << endl
           << "  {" << endl;
    }

    StateMachine::Description::TransitionVector::const_iterator first, last = rhs.transitions.end();
    for (first = rhs.transitions.begin(); first != last; ++first) {
      if (first != rhs.transitions.begin()) {
        ostr << ", " << endl;
      }
      ostr << "    " << *first;
    }
    ostr << endl
         << "  }" << endl
         << "}";
         
    return ostr;
  }

  StateMachine::StateMachine(std::string const& name) :
    m_name(name),
    m_timestamp(ACE_Time_Value::zero),
    m_sourceStateIdx(-1),
    m_eventIdx(-1),
    m_targetStateIdx(-1),
    m_status(-1)
  {
  }

  StateMachine::~StateMachine() throw()
  {}
 
  StateMachine::Description::Description(char const * start,
                                         char const * const s[], int numS,
                                         char const * const e[], int numE,
                                         TT const t[], int numT)
  {
    startState = start;

    states.reserve(numS);
    for (int i = 0; i < numS; ++i) {
      states.push_back(s[i]);
    }

    events.reserve(numE);
    for (int i = 0; i < numE; ++i) {
      events.push_back(e[i]);
    }

    transitions.reserve(numT);
    for (int i = 0; i < numT; ++i) {
      transitions.push_back(StateMachine::Description::TransitionTriple(t[i]));
    }

    // sort for optimizing access

    sort(states.begin(), states.end());
    sort(events.begin(), events.end());
    sort(transitions.begin(), transitions.end());

    // sanity checking

    // all states & events are unique
    assert(unique(states.begin(), states.end()) == states.end());
    assert(unique(events.begin(), events.end()) == events.end());

    // start state exists
    assert(binary_search(states.begin(), states.end(), startState) == true);

    assertConsistency();
  }

  void
  StateMachine::Description::merge(StateMachine::Description const& rhs)
  {
    assert (startState == rhs.startState);
    
    //
    // combine states
    //
    {
      states.reserve(states.size() + rhs.states.size());
      
      // merge states
      StringVector::iterator mid = states.end();
      states.insert(mid, rhs.states.begin(), rhs.states.end());
      inplace_merge(states.begin(), mid, states.end());
      
      // remove duplicates
      StringVector::iterator newEnd = unique(states.begin(), states.end());
      states.erase(newEnd, states.end());
    }
    
    //
    // combine events
    //
    {
      events.reserve(events.size() + rhs.events.size());
      
      // merge events
      StringVector::iterator mid = events.end();
      events.insert(mid, rhs.events.begin(), rhs.events.end());
      inplace_merge(events.begin(), mid, events.end());
      
      // remove duplicates
      StringVector::iterator newEnd = unique(events.begin(), events.end());
      events.erase(newEnd, events.end());
    }

    //
    // combine transitions
    //
    {
      transitions.reserve(transitions.size() + rhs.transitions.size());
      
      // merge transitions
      TransitionVector::iterator mid = transitions.end();
      transitions.insert(mid, rhs.transitions.begin(), rhs.transitions.end());
      inplace_merge(transitions.begin(), mid, transitions.end());
      
      // remove duplicates
      TransitionVector::iterator newEnd = unique(transitions.begin(), transitions.end());
      transitions.erase(newEnd, transitions.end());
    }
  }

  namespace 
  {
    struct ValidTransition
    {
      ValidTransition(vector<string> const& s, vector<string> const& e) :
        states(s),
        events(e)
      {}
      
      bool operator() (StateMachine::Description::TransitionTriple const& triple) const {
        return ( binary_search(states.begin(), states.end(), triple.sourceState) &&
                 binary_search(events.begin(), events.end(), triple.event) &&
                 binary_search(states.begin(), states.end(), triple.targetState) );      
      }

    private:
      vector<string> const states;
      vector<string> const events;
    };
  }

  void
  StateMachine::Description::trimTransitionTable()
  {
    ValidTransition valid(states, events);

    StateMachine::Description::TransitionVector::iterator newEnd =
      partition(transitions.begin(), transitions.end(), valid);
    transitions.erase(newEnd, transitions.end());
  }


  void
  StateMachine::Description::assertConsistency() const
  {
    // all transition triples exist
    StateMachine::Description::TransitionVector::const_iterator first, last = transitions.end();
    for (first = transitions.begin(); first != last; ++first) {
      assert(binary_search(states.begin(), states.end(), first->sourceState) == true);
      assert(binary_search(events.begin(), events.end(), first->event) == true);
      assert(binary_search(states.begin(), states.end(), first->targetState) == true);
    }
  }

  int
  StateMachine::Description::stateIdx(string const& state) const
  {
    int s = distance(states.begin(), lower_bound(states.begin(), states.end(), state));
    if (s == (int)states.size())
      s = -1;
 
    return s;
  }

  int
  StateMachine::Description::eventIdx(string const& event) const
  {
    int s = distance(events.begin(), lower_bound(events.begin(), events.end(), event));
    if (s == (int)events.size())
      s = -1;
 
    return s;
  }

  void
  StateMachine::signalTransition(ACE_Time_Value const& timestamp, std::string const& sourceState, std::string const& event, std::string const& targetState, int status)
  {
    if (m_timestamp == timestamp &&
        m_sourceStateIdx == m_description.stateIdx(sourceState) &&
        m_eventIdx == m_description.eventIdx(event) &&
        m_targetStateIdx == m_description.stateIdx(targetState) &&
        m_status == status)
      return;

    m_timestamp = timestamp;
    m_sourceStateIdx = m_description.stateIdx(sourceState);
    m_eventIdx = m_description.eventIdx(event);
    m_targetStateIdx = m_description.stateIdx(targetState);
    m_status = status;

    m_transitionSignal(m_timestamp,
                        m_sourceStateIdx, 
                        m_eventIdx, 
                        m_targetStateIdx, 
                        m_status);
  }

  void
  StateMachine::resignal()
  {
     m_transitionSignal(m_timestamp,
                        m_sourceStateIdx, 
                        m_eventIdx, 
                        m_targetStateIdx, 
                        m_status);    
  }
}
