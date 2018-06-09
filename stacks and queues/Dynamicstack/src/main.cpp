/*
 * main.cpp
 *
 *  Created on: Mar 11, 2017
 *      Author: pawar
 */
#include <iostream>
#include"Dynamic.h"

using namespace std;



int main()
{
	int catchvar;
	Dynamicstack <int>stack;
	cout<<"Pushing values\n";
	cout<<"Pushing 5\n";
	stack.push(5);
	cout<<"Pushing 10\n";
	stack.push(10);
	cout<<"Pushing 15\n";
	stack.push(15);
	cout<<endl<<endl;

	cout<<"Popping values\n";
	stack.pop(catchvar);
	cout<<catchvar<<endl;
	stack.pop(catchvar);
	cout<<catchvar<<endl;
	stack.pop(catchvar);
	cout<<catchvar<<endl;


	return 0;
}




