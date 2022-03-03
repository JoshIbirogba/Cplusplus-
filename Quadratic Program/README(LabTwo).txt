//
Author: Joshua Ibirogba
Lab Number: One
Student ID: 5073203
Course code: CS 2010

//Program 1

***Variables***
-Variable a is declared as a double and stored in a memory location.
-Variable b is declared as a double and stored in a memory location.
-Variable c is declared as a double and stored in a memory location.
-Variable d is declared as a double and stored in a memory location.
-Variable x is declared as a double and stored in a memory location.


//Input/Output ---- How Program Works

The program is designed to ask the user for three inputs, in tandem with the quadratic equation that requires three inputs to make a computation/calculation.
Note: quadratic formula is (x = (-b +- b^2 - 4ac) / 2a).  
In this program variable d is then assigned the operation (b^2 - 4ac)
Variables x0 and x1 are then declared and storedin memory locations.
Variables x0 and x1 are set with a number of instructions to execute the square root function.

This program prompts a user for three values.
When the values are received and stored in their respective memory locations, the operation d = b^2 - 4ac is performed.
The square root operation is then perfomed next, after the square root is calculated the values needed to perform the quadratic operation is ready to be put into use.
The quadratic operation is then performed(positive and negative operation).
The positive and negative values are then printed.

//Run the code
To run this code, you can use any C++ compiler of your choice but i would walk you through the steps of using the Linux environment, powered by the ubuntu shell.
Fire/Power up Ubuntu, when the shell is active, press the command key ls to open a file path to the next directory, another prompt then comes up, press cd LabAssign2.
Press ls to open the next file directory path. Three file directories become visible 
, namely (Prog1, Prog2, Prog3). Input the command cd Prog1 at the next prompt, when this is all done input the command make at the next prompt. This is where it gets 
cool, make eliminates the need for you  to compile the code "manually", this was achieved thanks to a team of highly skilled software engineers, i'm not yet highly 
skilled myself but i made some changes to make sure makefile works for this particular project, i deserve some credit right? haha.
Engineers make the world a better and less stressful place *smiles*.
The make command creates an executable, press ./test to run the code. 
YOU'RE ALL SET. Now input and output(IO) are ready to perform their tasks.


//Program 2
***Variables***
Variable total is declared as a constant integer, assigned the value of 100 and stored in a memory location.
Variable quarters is declared as an integer and stored in a memory location.
Variable dimes is declared as an integer and stored in a memory location.
Variable nickels is declared as an integer and stored in a memory location.
Variable pennies is declared as an integer and stored in a memory location.
Variable change is declared as an integer and stored in a memory location.
Variable amount is declared as an integer and stored in a memory location.

//Input/Output ----- How program works
This program prompts a user for a value/amount in cents stored in the memory location of variable amount, in this program the maximum amount the user can 
enter is 100 cents, this would determine how much change the user would collect or if the user would not be getting any change.
After the input is received and stored in a memory location, the change is then calculated using the subtraction operation.
When the change is calculated, the division and modulo operations take place to determine the number of quarters, dimes, nickels or pennies the user gets.

//RUN THE CODE
Repeat steps in RUN THE CODE for Program 1, change Prog1 to Prog2 anywhere Prog1 comes up.


//Program 3
***Variables***
Variable value is declared as a float and stored in a memory location.
Variable remainder is declared as a float and stored in a memory location.
Variable a is declared as an integer and stored in a memory location.

//Input/Output ----- How program works
This program prompts a user for a real number, stored in the memory location of variable value as a float.
The value entered is then casted as an integer into the memory location of variable a as seen in line 11 of the code. This action is done to seperate an integer value
from an original float value.
The renainder of the float value when the accessible integer has been "stolen" is calculated in line 12 of the program.
The values of both the integer "stolen" from the float and the remainder of the float are printed.

//RUN THE CODE
Repeat steps in RUN THE CODE for Program 1, change Prog1 to Prog3 anywhere Prog1 comes up. 