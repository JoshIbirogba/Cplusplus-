#ifndef COLLECTION_H
#define COLLECTION_H

#include <vector>
#include <stdio.h>
#include <iostream>

using namespace std;

class collection {
	protected:      
     	vector <int> p; 
		int n;  
	public :
     	collection() 
     	{ 
			n = 100;
       		p.resize(n);   
     	}
     	virtual bool empty() = 0;
     	virtual bool full() = 0;
     	virtual void store(int val) = 0;
     	virtual  int retrieve() = 0;
};


#endif
