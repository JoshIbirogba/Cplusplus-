
#include "queue.h"

// default constructor 
queue::queue()
{
	n = 0;
	p.resize(n);   // size is set to zero
}

// check if queue is empty
bool queue::empty()
{
	if (p.empty()) return true;
	else return false;
}

// check if queue is full 
bool queue::full()
{
	if (n == 100) return true;
	else return false;
}

// pushes onto the back a value
void queue::store(int val)
{
	p.push_back(val);
	n++;
}

// gets a value from the front - then moves all element one forward to fill "empty" space at the front
int queue::retrieve()
{
	int tmp = p.front();
	for (int i = 0; i < p.size() - 1; i++) p[i] = p[i+1];
	return tmp;
}
