/*
 * Dynamic.h
 *
 *  Created on: Mar 11, 2017
 *      Author: pawar
 */

#ifndef DYNAMIC_H_
#define DYNAMIC_H_
#include<iostream>
using namespace std;
template<class T>
class Dynamicstack
{
private:
		struct Stacknode
		{
			T value;
			Stacknode *next;
		};
		Stacknode *top;

public:
		Dynamicstack();
		~Dynamicstack();
		void push(T);
		void pop(T &);
		bool isempty();
};



#endif /* DYNAMIC_H_ */
