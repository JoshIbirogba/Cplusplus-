#ifndef QUEUE_H
#define QUEUE_H

#include "collection.h"

class queue : public collection{
	public:
     	queue();

		bool empty();
    	bool full();
    	void store(int);
    	int retrieve();
};

#endif
