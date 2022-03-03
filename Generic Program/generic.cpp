/* Author: Joshua Ibirogba
Course Code: CS 2010
What Program does: This program generates random values between the range of 1 - 20, caluclates the sum,
product, maximum element, checks the elements greater or less than the constant value 
*/



#include <iostream>
#include <vector>
#include <ctime>
#include <cmath>
#include <cstdlib>

using namespace std;

const int compare = 10; //constant integer value used for comparison

    //Types declaration
typedef vector <int> int_vec;
typedef int (*bin_op)(int,int);
typedef int (*un_op)(int);
typedef bool (*bool_op)(int);


int reduce(int_vec &v, bin_op op)
{
    int answer = 0;

    for (int i = 0; i < v.size(); i++) 
    {
        answer = op(answer,v[i]);
    }
    return answer;
}

//declared as a void fuction because it returns nothing
void transform(int_vec &v, un_op op)
{
    for (int i = 0; i < v.size(); i++)
     {
        v[i] = op(v[i]);
    }
}

int_vec test_all(int_vec &v, bool_op op)
{
    int_vec newVec(v.size(),0);
    
    for (int i = 0; i < newVec.size(); i++) 
    {
        if (op(v[i])) 
        {
            newVec[i] = 1;
        }
    }
    return newVec;
}

int_vec generate(int n, un_op op)
{
    int_vec newVec(n,0);
    for (int i = 0; i < newVec.size(); i++) 
    {
        newVec[i] = op(newVec[i]);
    }
    return newVec;
}

void print(int_vec &v)
{
    cout << "Vector Size : " << v.size() << "\n";
    for (int i = 0; i < v.size(); i++)
     {
        cout << v[i] << " " << "\n";
    }
}


   //Function declarations
   //
   //Addition of two integer values
int add(int x, int y)
{
    return x + y;
}

//Multiplication of two integer values
int multiply(int x, int y)
{ 
    return x * y;
}

// Create Random values from 1-10 using the random method
int random(int x)
{ 
    return rand() % 20 + 1;
}

//Function for Maximum numbers in two integer values 
int maximum(int x, int y)
{ 
    if (isgreater(x,y))
    {
return x;
    }
    else return y;
    
}

//Checks if value is greater than compare 
bool greaterthan(int x)
{ 
    if (isgreater(x,compare))
    {
return x;
    }
}

//using transform to change elements of according to the assignment rule
int equals(int x)
{ 
    if (x == compare)
    {
        return 0;
    } 
    else if (x > compare) 
    {
        return 1;
    } 
    else 
    {
        return -1;
    }
}

int main()
{
    srand(time(NULL)); // generate a different/new random number 

    //function generates, generates a vector V 
    int_vec newVec = generate(10,random);
    
    //reduce function used to add and print elements in the vector
    cout << "Sum of vector is : " << reduce(newVec, add) << "\n";
    
    //reduce function used to multiply and print all the elements in the vector
    cout << "Product of vector is : " << reduce(newVec, multiply) << "\n";
    
    //maximum function to find the maximum element
    cout << "Maximum element is : " << reduce(newVec, maximum) << "\n";

    //test all and reduce functions to count the vector elements greater than the constant value
    int_vec greater = test_all(newVec, greaterthan);
    cout << "Amount of elements greater than "<< compare << " is " << reduce(greater,add) << "\n";

    //Print the Vector
    print(newVec);
    return 0;
}

 