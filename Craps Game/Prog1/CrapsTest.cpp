#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int currentCredits = 100;
int currentWager = 0;
int point = 0;

int die(void){
    int die1 = rand()%6+1;
    int die2 = rand()%6+1;
    int sum = die1+die2;
    cout << "Player rolled " << die1 << " + " << die2 << " = " << sum << "\n";
    return sum;
}

void playerWins(void){
    cout << "Player wins\n\nYou won "<< currentWager << 
            " credits. Your new balance is " << (currentCredits+currentWager*2) << " credits\n\n";
        
        currentCredits = currentCredits + (currentWager*2);
        currentWager = 0;
        point = 0;
}

void playerLoses(void){
    cout << "Player loses\n\nYou lost "<< currentWager << 
            " credits. Your new balance is " << (currentCredits) << " credits\n\n";
        
        currentCredits = currentCredits;
        currentWager = 0;
        point = 0;
}

int playGame(void){
    cout << "You wagered " << currentWager << " credits.\n";
    int currentThrow = die();
    
    if (currentThrow == 7 || currentThrow == 11){
        playerWins();
        return 0;
    } else if (currentThrow == 2 || currentThrow == 3 || currentThrow == 12){
        playerLoses();
        return 0;
    } else {
        point = currentThrow;
        cout << "Your point is " << point << "\n";
    }
    
    bool finished = false;
    
    do {
            currentThrow = die();
            if (currentThrow == point){
                playerWins();
                return 0;
            } else if (currentThrow == 7){
                playerLoses();
                return 0;
            }
        
    } while (!finished);
    
    return 0;
}

int main(void){
    srand(time(NULL));
    char ans;
    bool done = false;
    
    while (!done){
        do {
            cout << "You have " << currentCredits << " credits. How much credits will you wager? ";
            cin >> currentWager;
            if (currentWager <= 0 || currentWager > currentCredits) {
                cout << "You cannot wager that.\n\n";
            }
        } while (currentWager <= 0 || currentWager > currentCredits);
        currentCredits = currentCredits - currentWager;
        playGame();
        if (currentCredits == 0){
            cout << "You are out of credits - game over!\n";
            break;
        }
        cout << "Play again (y/n)? ";
        cin >> ans;
        if ( ans == 'y' || ans == 'Y'){
            done = false;
        } else {
            done = true;
        }
    }
    
    return 0;
}