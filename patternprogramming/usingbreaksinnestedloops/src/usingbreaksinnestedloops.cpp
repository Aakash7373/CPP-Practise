//============================================================================
// Name        : usingbreaksinnestedloops.cpp
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
	for(int rows=1;rows<=5;rows++)
	{

		for(int columns=1;columns<=20;columns++)
		{
			cout<<"*";
			if(columns==10)
				break;
		}
		cout<<endl;
	}
	return 0;
}
