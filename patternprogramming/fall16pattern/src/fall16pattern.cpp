//============================================================================
// Name        : fall16pattern.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//a_p481

#include <iostream>
using namespace std;

int main()
{
	int number;

	cout<<"Please enter a number between 2 and 15 :";
	cin>>number;

	if(number<2 || number>15)
	{
		cout<<"This is an invalid number. "<<endl;
	}
	else
	{
		for(int i=1;i<=number;i++)
		{
			for(int j=1;j<=number;j++)
			{
				if(i>j)
					cout<<"+";
				else if(i==j)
					cout<<"&";
				else
					cout<<"-";
			}
			cout<<endl;
		}
	}

	return 0;
}
