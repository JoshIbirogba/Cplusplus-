//
Author: Joshua Ibirogba
Lab Number: One
Student ID: 5073203
Course code: CS 2010




//Input/Output --- How Program works
This code/program simulates a casino game of craps, a user is prompted to enter a wager not more than 100 credits or less than 0. The next step is the 
die roll, which would determine if a user wins or loses his/her credits. The game also prompts the user asking if the user would like to play again. When the
user exhausts all of their credits, the game terminates.

A function called roll is created to roll and the return the value of the die total.
A function srand from the library is also created to make sure the same values are not thrown for the random dice.
A function called win is created to calculate and return the amount total of credits the user has in the event of a successful die roll.
A function called losePrice is created to calculate the credit balance after a loss.
A function youWin is created to display the win message and balance.
A function youLose is created to display the loss message and balance.
A function playGame is created to determine whether or not a game of craps is won or lost, if the user throws a 7 or 11, the user wins. If the user throws a 2,3 or
12 the user loses. If the user throws any other value, the user has to keep throwing, the user loses if the value 7 is thrown. 

In the main method,  the user is prompted to enter the amount of credits they wish to wager, if the credit is below or equal to zero or the credit entered is above the 
maxWager the program terminates and asks the user to wager something lower. When a game round is completed, the user prompted, asking if they want to play the game again.


//RUN THE CODE
To run this code, you can use any C++ compiler of your choice but i would walk you through the steps of using the Linux environment, powered by the ubuntu shell.
Fire/Power up Ubuntu, when the shell is active, press the command key ls to open a file path to the next directory, another prompt then comes up, press cd LabAssign3.
Press ls to open the next file directory path. One file directory become visible named Prog1.
Input the command cd Prog1 at the next prompt, when this is all done input the command make at the next prompt.
The make command creates an executable, press ./test to run the code. 
YOU'RE ALL SET. Now input and output(IO) are ready to perform their tasks.



