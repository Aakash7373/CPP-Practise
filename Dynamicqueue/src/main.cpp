/*
 * main.cpp
 *
 *  Created on: Mar 13, 2017
 *      Author: pawar
 */
//
#include <iostream>
#include"Dynamicqueue.h"
using namespace std;

int main()
{

	Dynamicqueue q;
	cout<<"Queuing values\n";
	cout<<"Queuing 1\n";
	q.enqueue(1);
	cout<<"Queuing 11\n";
	q.enqueue(11);
	cout<<"Queuing 111\n";
	q.enqueue(111);
	cout<<"Queuing 1111\n";
	q.enqueue(1111);
	cout<<endl;

	cout<<"Now dequeuing\n";
	while(!q.isempty())
	{
		int x;
		q.dequeue(x);
		cout<<x<<endl;
	}


	return 0;
}



