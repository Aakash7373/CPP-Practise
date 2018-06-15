/*
 * Dynamicqueue.h
 *
 *  Created on: Mar 13, 2017
 *      Author: pawar
 */

#ifndef DYNAMICQUEUE_H_
#define DYNAMICQUEUE_H_
#include <iostream>
using namespace std;

class Dynamicqueue
{
private:
		struct Queuenode
		{
			int value;
			Queuenode *next;
		};

		Queuenode *front;
		Queuenode  *rear;
		int numitems;

public:
		Dynamicqueue();
		~Dynamicqueue();
		void enqueue(int );
		void dequeue(int &);
		void clear();
		bool isempty();


};





#endif /* DYNAMICQUEUE_H_ */
