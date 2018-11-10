A Coding CTF Challenge By Tristan Hilbert
11/10/18

## Challenge
Defeat my villian by programming your Hero Object and interacting with the Game Object.
The villain will be considered defeated if you remove his health!

## How to Fork
The Fork button on github will create a copy of this repository on your own Github account.
this will provide all the code for the project. Read through the different header files
and source files to complete the challenge. Once completed, compile and link all source files
and run the game. These should be errorless processes.

## Files and Explanation
I created Files Game.cpp/Game.hpp, Villain.cpp/Villain.hpp, and Character.cpp/Character.hpp.
These files explain the requirements of the game. The Hero class is empty, however Game
expects a class "Hero" which is a subclass of Character. The challenge is to read through
the files to figure out what Hero needs to beat villain. Anything goes except the files
I created must not be changed. It should also be stated, the game should work without memory
errors or crash.
  
*HINT* Hero gets a passed pointer to the Villain in the Constructor. Make sure to include
this into your program ;)

## How do you win?
*Ties Don't Count*
If you can run the program with the message "THE HERO IS VICTORIOUS" and all the previous
rules have been followed, then you have completed the exercise.
  
*GOOD LUCK!*
