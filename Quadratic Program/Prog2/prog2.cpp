#include <iostream>
using namespace std;

int main(void){

    const int total = 100;
    int quarters, dimes, nickels, pennies;
    int change, amount;

    cout << "Enter the amount paid : ";
    cin >> amount;
	
	change = total - amount;

    quarters = change/25;
    dimes = change % 25 / 10;
    nickels = change % 25 % 10 / 5;
    pennies = change % 25 % 10 % 5; 

    cout <<"Your change is " << quarters << " quarter(s) " << " " << dimes << " dime(s) " << " " << nickels << " nickel(s) " << " " << pennies << " pennie(s) \n" ;
	
	return 0;
}