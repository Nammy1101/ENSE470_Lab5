ENSE470_Lab5
============

Milestone 1

Warmup:
1 Warmup : 0% 
==============
   DEADLINE: <2014-02-27 Thu>
   Do the following before the lecture on Thu 27 Feb 2014.  Be
   prepared to discuss these issues in class and work through a class
   exercise.

   1. Familiarize yourself with the provided codebase.  Use the code
      under HelicopterGame.  (It's the same as that under Milestone 3
      anyway).  Place the code under revision control.
   2. Rewrite problem code so it compiles under linux/windows/mac.
      Some examples follow:
      Done - 1. backslashes in include statements
      Done - 2. superfluous class qualifiers in some member function definitions
      Done - 3. references to windows.h
      Done - 4. in Logger.cpp, rewrite so it doesn't use any
         windows-specific timing stuff
      Done - 5. Render::detectCollision() should have const& arguments.
      Done - 6. Non-standard range-for loop in ScriptRunner.cpp
      Done - 7. Replace windows Sleep() in SleepThread.cpp
      Done - 8. Remove code under "Trevor" directory
   Done - 3. Remove cow from the scene.
   Done - 4. For now, disable the Logging and ScriptRunner features.
   Done - 5. Draw a class diagram for the system which succinctly describes
      the large-scale relationships between the classes.
   6. How would you allow the user to easily change the keys which
      control the system, and add new command keys?
      
      Answer for 6 - To allow users to easily cahnge the keys which control the system
                    All that needs to be done is for the user to go into ModelController.cpp
                    and under the corresponding switch statements and cases, change the characters
                    to the users desired value
