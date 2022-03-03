/* Author: Joshua Ibirogba 
Course code: CS2010
Student ID: 5073203
what Program does: This program is designed to add and store elements and also tell if a list is empty or full  
*/


#include "stack.h"
#include "queue.h"

int main(){
	cout << "--------Stack-------\n";

	stack s;
	
/*
*   Check if stack is empty
*/
	if (s.empty()) cout << "Stack is empty\n";
	else cout << "Fail\n";


//   Add to the stack
	for (int i = 0; i < 100; i++)
    { 
         s.store(i);
    }

   //Remove from the stack
	for (int i = 0; i < 20; i++)
    { 
         cout << s.retrieve() << " ";
    }

//  Check if stack is full
	if (s.full()) 
        cout << "\n Stack is full.\n";
	else cout << "Fails \n";

// queue
	cout << "\n\n---------Queue---------\n";

	queue q;

//   Check if queue is full

	if (q.empty())
        cout << "Queue is empty \n";
	else cout << "Fails \n";


//   Add values to the queue
	for (int i = 0; i < 100; i++)
    { 
         q.store(i);
    }

//   Remove from the queue
	for (int i = 0; i < 20; i++)
    {
         cout << q.retrieve() << " ";
    }

//   Check if queue is full
	if (q.full()) 
        cout << "\n Queue is full.\n";
	else cout << "\nFails \n";

	return 0;
}
