//============================================================================
// Name        : static.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
//
#include <iostream>
using namespace std;
#include"Stack.h"

template <class T>
Stack<T>::Stack(int size)
{
stackarray=new T[size];
stacksize=size;
top=-1;
}

template <class T>
Stack<T>::Stack(const Stack &obj)
{
if(obj.stacksize>0)
stackarray=new T[obj.stacksize];

else
stackarray=NULL;

stacksize=obj.stacksize;
for(int i=0;i<stacksize;i++)
{
stackarray[i]=obj.stackarray[i];
}
top=obj.top;
}

template <class T>
Stack<T>::~Stack()
{
delete [] stackarray;
}

template <class T>
void Stack<T>::push(T num)
{
if(isfull())
{
cout<<"Stack is full"<<endl;
}
else
{
top++;
stackarray[top]=num;
}
}

template <class T>
void Stack<T>::pop(T &num)
{
if(isempty())
{
cout<<"Stack is empty"<<endl;
}
else
{
num=stackarray[top];
top--;
}
}

template <class T>
bool Stack<T>::isfull()
{
	bool status;
	if(top==stacksize-1)
	{
		status=true;
	}
	else
	{
		status=false;
	}
	return status;
}

template <class T>
bool Stack<T>::isempty()
{
	bool status;
	if(top==-1)
	{
		status=true;
	}
	else
	{
		status=false;
	}
	return status;
}

template <class T>
void Stack<T>::add()
{
int sum=0,num2;

pop(sum);
pop(num2);

 sum=sum+num2;

push(sum);
}

template <class T>
void Stack<T>::sub()
{
int diff=0,num2;

pop(diff);
pop(num2);

 diff=diff-num2;

push(diff);
}
