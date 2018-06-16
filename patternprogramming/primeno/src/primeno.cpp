//============================================================================
// Name        : primeno.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	int number;
	bool isprime=true;

	cout<<"Please enter a positive integer greater than 1 ";
	cin>>number;

	if(number<1)
	{
		cout<<"Invalid and enter again ";
		cin>>number;

	}

	else
	{
		for(int i=2;i<=number;i++)
		{
			if(number%i==0)
			{
				isprime=false;
			}
		}
	}

		if(isprime)
		{
			cout<<number<<" is prime "<<endl;
		}
		else
		{
			cout<<number<<" Not prime "<<endl;
		}

	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
