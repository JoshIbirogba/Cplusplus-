#ifndef STACK_H
#define STACK_H

#include "collection.h"

class stack : public collection{
	public:
     	stack();

		bool empty();
   	 	bool full();
    	void store(int);
    	int retrieve();
};

#endif
