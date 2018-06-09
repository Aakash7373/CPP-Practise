/*
 * Queue.h
 *
 *  Created on: Mar 13, 2017
 *      Author: pawar
 */

#ifndef QUEUE_H_
#define QUEUE_H_
#include <iostream>
using namespace std;

template <class T>
class Queue
{
private:
		T *queuearray;
		int numelements;
		int queuesize;
		int front;
		int rear;

public:
		Queue(int);
		Queue(const Queue &);
		~Queue();
		void enqueue(T);
		void dequeue(T &);
		void clear();
		bool isfull();
		bool isempty();

};




#endif /* QUEUE_H_ */
