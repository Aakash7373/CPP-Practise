/*
 * Stack.h
 *
 *  Created on: Mar 11, 2017
 *      Author: pawar
 */

#ifndef STACK_H_
#define STACK_H_
#include <iostream>
using namespace std;

template <class T>
class Stack
{
private:

		T *stackarray;
		int stacksize;
		int top;

public:
		Stack(int);
		Stack(const Stack &);
		~Stack();
		void push(T);
		void pop(T &);
		bool isfull();
		bool isempty();
		void add();
		void sub();

};



#endif /* STACK_H_ */
