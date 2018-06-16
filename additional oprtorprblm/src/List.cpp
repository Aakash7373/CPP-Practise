/*
 * List.cpp
 *
 *  Created on: Feb 17, 2017
 *      Author: pawar
 */

#include<iostream>
#include<string>
#include"List.h"
using namespace std;

List::List()
{
	count=0;
}

void List::add(int l)
{
	if(count<100)
	{
		num[count]=l;
	}
	count++;
}

int List::operator!()
{
	return count;
}

bool List::operator==(List &right)
				{
	bool status=false;
	for(int i=0;i<count;i++)
	{
		if(num[i]==right.num[i])
		{
			status=true;
		}
		else
		{
			status=false;
		}
	}
	return status;
				}

bool List::operator<(List &right)
{
	bool status=false;
	for(int i=0;i<count;i++)
	{
		if(num[i]<right.num[i])
		{
			status=true;
		}
		else
		{
			status=false;
		}
	}
	return status;
}


List List::operator +(List &right)
{
	List newlist;
	for(int i=0;i<count;i++)
	{
		newlist.add(num[i]);
	}
	for(int i=0;i<right.count;i++)
	{
		newlist.add(right.num[i]);
	}
	return newlist;
}

void List:: display()
{
	for(int i=0;i<count;i++)
	{
		cout<<num[i]<<" ";
	}
	cout<<endl;
}
