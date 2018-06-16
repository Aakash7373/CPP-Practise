//============================================================================
// Name        : pointers.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void getinput(int *value)
{
cout<<"Enter the number ";
cin>>*value;
}

 int doublevalue (int *num)
{
	 *num*=2;
	 return *num;
}

int main()
{
int num;
getinput(&num);
int x=doublevalue(&num);
//cout<<x<<endl;
cout<<"Double value is "<<x;

	return 0;
}
