/*
 * Stack.h
 *
 *  Created on: Mar 13, 2017
 *      Author: pawar
 */

#ifndef STACK_H_
#define STACK_H_


// Lab 9
// Fall 2016
// js236

#include <cassert>
using namespace std;
#include "SimpleVector.h"

template <class T>
class Stack
{
private:
    SimpleVector<T> vector;

public:
    Stack();

   // Stack operations
    bool isempty();
    void push(T);
    void pop();
    T peek();
    void display();

};


template <class T>
Stack<T>::Stack()
{

}

template <class T>
void Stack<T>::display()
{
	vector.display();
}

template <class T>
bool Stack<T>::isempty()
{
return (vector.size()==0);
}

template <class T>
void Stack<T>::push(T e)
{
vector.push_back(e);
}

template <class T>
void Stack<T>::pop()
{
assert(!isempty());
vector.pop_back();
}

template <class T>
T Stack<T>::peek()
{
	assert(!isempty());
return vector.getElement(vector.size()-1);
}

/*
template <class T>
Stack<T>::Stack() {
    //nothing to do
}


template <class T>
void Stack<T>::display() {
    vector.display();
}


template <class T>
bool Stack<T>::isempty() {
    return (vector.size()==0);
}

template <class T>
void Stack<T>::push (T e) {
    vector.push_back(e);
}

template <class T>
void Stack<T>::pop() {
    assert (!isempty());

    vector.pop_back();
}

template <class T>
T Stack<T>::peek() {
    assert (!isempty());

    return vector.getElement(vector.size()-1);
}
*/

#endif /* STACK_H_ */
