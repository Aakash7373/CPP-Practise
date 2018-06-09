/*
 * main.cpp
 *
 *  Created on: Mar 11, 2017
 *      Author: pawar
 */



#include <iostream>
using namespace std;
#include"Stack.h"

int main()
{
	//int catchvar;
	Stack <int> s(5);

	cout<<"Pushing values\n";
	cout<<"Pushing 5\n";
	s.push(5);
	cout<<"Pushing 10\n";
	s.push(10);

	s.add();
	cout<<"The sum is:";
	//s.pop(catchvar);
	//cout<<catchvar<<endl;

		cout<<"Pushing 15\n";
		s.push(15);
		cout<<"Pushing 20\n";
		s.push(20);
		cout<<endl;

		s.sub();
		cout<<"Difference is \n";

	//s.pop(catchvar);
	//cout<<catchvar<<endl;

	//s.pop(catchvar);
	//cout<<catchvar<<endl;
	//s.pop(catchvar);
	//cout<<catchvar<<endl;
	//s.pop(catchvar);
	//cout<<catchvar<<endl;



return 0;
}



