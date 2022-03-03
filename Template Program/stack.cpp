#include "stack.h" 

// default constructor - set size to 0
stack::stack()
{
	n = 0;
	p.resize(n);
}

// check and see if empty - return true if empty, false otherwise
bool stack::empty(){
	if (p.empty()) return true;
	else return false;
}

// check and see if stack is full - return true if full, false otherwise
bool stack::full()
{
	if (n == 100) return true;
	else return false;
}

// store the variable
void stack::store(int val)
{
	p.push_back(val);
	n++;
}

// get the variable from the bottom
int stack::retrieve()
{
	int tmp = p.back();
	p.pop_back();
	return tmp;
}
