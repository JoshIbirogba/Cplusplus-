#include <iostream>
using namespace std;

int main(void){
float value, remainder;
int a;

cout << " Enter a real number: ";
cin >> value;

a = (int) value ;
remainder = value - a;

cout << " Integer extract is " << a << " while the remainder is " << remainder << "\n"  ;
return 0;
}