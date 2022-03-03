#include <iostream>
using namespace std;

int main(void){
    double a, b, c, d, x;

    cout << "Enter a number : ";
    cin >> a;

    cout << "Enter a number : ";
    cin >> b;

    cout << "Enter a number : ";
    cin >> c;

d = (b * b) - (4 * a * c );

     double x0,x1;
     //cin >> a;
     x0 = d/2;


    x1 = x0 - (x0 * x0 - d)/(2 * x0);
    x0 = x1 - (x1 * x1 - d)/(2 * x1);
    x1 = x0 - (x0 * x0 - d)/(2 * x0);
    x0 = x1 - (x1 * x1 - d)/(2 * x1);
    x1 = x0 - (x0 * x0 - d)/(2 * x0);
    x0 = x1 - (x1 * x1 - d)/(2 * x1);

    

x = (-b + x0)/(2*a);
cout << " Value of x is = " << x << " and ";

x = (-b - x0)/(2*a);
cout << "Value of x is = " << x << "\n";
return 0;
}