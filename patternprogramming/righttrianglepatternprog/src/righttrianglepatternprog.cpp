//============================================================================
// Name        : righttrianglepatternprog.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


//============================================================================
// Name        : pattern.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
	int num;

	cout << "Please enter a positive integer greater than 1: ";
	cin>>num;
	cout<<endl;

	if(num<1)
	{
		cout<<"Cannot be less than 1";
		cout<<"\nPlease enter again ";
		cin>>num ;
	}
	else
	{
		for(int i=1;i<=num;i++)
		{
		for(int j=1;j<=i;j++)

			{
				cout<<i*j;
			}
			cout<<endl;
		}


	}
	return 0;
}
