//============================================================================
// Name        : Dynamicstack.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include"Dynamic.h"
using namespace std;


template<class T>
Dynamicstack<T>::Dynamicstack()
{
top=NULL;
}

template<class T>
Dynamicstack<T>::~Dynamicstack()
{
Stacknode *p=top;
Stacknode *n=NULL;

while(p!=NULL)
{
n=p->next;
delete p;
p=n;
}
}

template<class T>
void Dynamicstack<T>::push(T num)
{
Stacknode *newnode;
newnode=new Stacknode;
newnode->value=num;

if(isempty())
{
top=newnode;
newnode->next=NULL;
}
else
{
newnode->next=top;
top=newnode;
}
}

template<class T>
void Dynamicstack<T>::pop(T &num)
{

if(isempty())
{
cout<<"Stack is empty"<<endl;
}
else
{
num=top->value;
Stacknode *n=top->next;
delete top;
top=n;
}
}

template<class T>
bool Dynamicstack<T>::isempty()
{
bool status;

if(top==NULL)
{
	status=true;
}
else
{
	status=false;
}

return status;
}
