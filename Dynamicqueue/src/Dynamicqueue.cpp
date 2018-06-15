//============================================================================
// Name        : Dynamicqueue.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include"Dynamicqueue.h"
using namespace std;

Dynamicqueue::Dynamicqueue()
{
front=NULL;
rear=NULL;
numitems=0;
}

Dynamicqueue::~Dynamicqueue()
{
	clear();
}

void Dynamicqueue::enqueue(int num)
{
	Queuenode *newnode=new Queuenode;
	newnode->value=num;
	newnode->next=NULL;

	if(isempty())
	{
	front=newnode;
	rear=newnode;
	}
	else
	{
		rear->next=newnode;
		rear=newnode;
	}
	numitems++;

}



void Dynamicqueue::dequeue(int &num)
{
	Queuenode *n=NULL;
	if(isempty())
	{
	cout<<"Queue is empty"<<endl;
	}
	else
	{

		num=front->value;
		n=front;
		front=front->next;
		delete n;
		numitems--;
	}
}

bool Dynamicqueue::isempty()
{
	bool status;
	if(numitems==0)
	{
		status=true;
	}
	else
	{
		status=false;
	}
	return status;
}

void Dynamicqueue::clear()
{
int value;
while(!isempty())
{
	dequeue(value);
}
}


