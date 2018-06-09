/*
 * Queue.h
 *
 *  Created on: Mar 13, 2017
 *      Author: pawar
 */

#ifndef QUEUE_H_
#define QUEUE_H_

#include "SimpleVector.h"
using namespace std;

template <class T>
class Queue {
private:
    SimpleVector<T> vector;
public:
    Queue();

    // Queue operations
    bool isempty();
    void enqueue(T);
    void dequeue();
    T peek();
    void display();  //preferbly front to back

};

template <class T>
Queue<T>::Queue() {
    //nothing to do
}

template <class T>
bool Queue<T>::isempty()
{
return (vector.size()==0);
}

template <class T>
void Queue<T>::enqueue(T e)
{
vector.push_back(e);
}

template <class T>
void Queue<T>::dequeue()
{
	assert(!isempty());
vector.pop_front();
}

template <class T>
T Queue<T>::peek()
{
	assert(!isempty());
return vector.getElement(0);
}

template <class T>
void Queue<T>::display()
{
vector.display();
}



#endif /* QUEUE_H_ */
