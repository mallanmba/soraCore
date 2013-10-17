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

#include <iostream>

using namespace kn;
using namespace std;

char const * const  states[] = { 
  "Idle", 
  "Active",
  "ActiveSuspended", 
  "IdleSuspended",  
  "Failure",        
  "TaskActive",    
  "TaskSuspended"
};
int const NUM_STATES = sizeof(states)/sizeof(char const *);

char const * const events[] = {
  "Noop", 
  "Activate",
  "Suspend", 
  "Resume",  
  "Abort",   
  "Timeout", 
  "Error",   
  "Done",    
  "Recover", 
  "Fail",    
  "ActivateTask"
};
int const NUM_EVENTS = sizeof(events)/sizeof(char const *);


StateMachine::TT const transitions[] = {
      //N A   S   R   A   T   E   D   R   F   N
  {"Idle", "Noop", "Idle" },
  {"Idle", "Activate", "Active" },
  {"Idle", "Suspend", "IdleSuspended" },
  {"Idle", "Fail", "Failure" },
  {"Idle", "ActivateTask", "TaskActive" },

  {"Active", "Noop", "Active" },
  {"Active", "Suspend", "ActiveSuspended" },
  {"Active", "Abort", "Idle" },
  {"Active", "Timeout", "Idle" },
  {"Active", "Error", "Idle" },
  {"Active", "Done", "Idle" },
  {"Active", "Fail", "Failure" },

  {"ActiveSuspended", "Noop", "ActiveSuspended" },
  {"ActiveSuspended", "Resume", "Active" },
  {"ActiveSuspended", "Abort", "IdleSuspended" },
  {"ActiveSuspended", "Timeout", "IdleSuspended" },
  {"ActiveSuspended", "Error", "IdleSuspended" },
  {"ActiveSuspended", "Fail", "Failure" },

  {"IdleSuspended", "Noop", "IdleSuspended" },
  {"IdleSuspended", "Resume", "Idle" },
  {"IdleSuspended", "Fail", "Failure" },

  {"Failure", "Noop", "Failure" },
  {"Failure", "Error", "Failure" },
  {"Failure", "Done", "Idle" },
  {"Failure", "Recover", "Idle" },
  {"Failure", "Fail", "Failure" },

  {"TaskActive", "Noop", "TaskActive" },
  {"TaskActive", "Suspend", "TaskSuspended" },
  {"TaskActive", "Abort", "Idle" },
  {"TaskActive", "Timeout", "Idle" },
  {"TaskActive", "Error", "Idle" },
  {"TaskActive", "Done", "Idle" },
  {"TaskActive", "Fail", "Failure" },


  {"TaskSuspended", "Noop", "TaskSuspended" },
  {"TaskSuspended", "Resume", "Active" },
  {"TaskSuspended", "Abort", "IdleSuspended" },
  {"TaskSuspended", "Timeout", "IdleSuspended" },
  {"TaskSuspended", "Error", "IdleSuspended" },
  {"TaskSuspended", "Fail", "Failure" }
};
int const NUM_TRANSITIONS = sizeof(transitions) / sizeof(StateMachine::TT const);


int main(int, char **)
{
  StateMachine::Description description("Idle", states, NUM_STATES, events, NUM_EVENTS, transitions, NUM_TRANSITIONS);

  cout << "StateMachine description: " << description << endl;

  return 0;
}
