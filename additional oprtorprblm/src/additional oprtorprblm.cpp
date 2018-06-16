//============================================================================
// Name        : additional.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include"List.h"
#include<iomanip>
using namespace std;

int main()
{
	int num,num1,num2,num3,num4,num5;
	List l1,l2;
	cout<<"Enter a number: ";
	cin>>num;

	cout<<"Enter a number: ";
	cin>>num1;

	cout<<"Enter a number: ";
	cin>>num2;
	cout<<"Enter a number: ";
	cin>>num3;
	cout<<"Enter a number: ";
	cin>>num4;
	cout<<"Enter a number: ";
	cin>>num5;

	l1.add(num);
	l1.add(num1);
	l1.add(num2);
	l2.add(num3);
	l2.add(num4);
	l2.add(num5);

	l1.display();
	//cout<<endl;
	l2.display();

	if (l1==l2)
	{
		cout << "l1==l2" << endl;
	}
	else
	{
		cout << "l1==l2 is false" << endl;
	}
	if (l1<l2)
	{
		cout << "l1<l2" << endl;
	}
	else
	{
		cout << "l1 is not less than l2" << endl;
	}

	cout << "!l1 = " << !l1 << endl;
	cout << "!l2 = " << !l2 << endl;

	List l3 = l1+l2;
	l3.display();

	return 0;
}
