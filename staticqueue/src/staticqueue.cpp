//============================================================================
// Name        : staticqueue.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include"Queue.h"

template <class T>
Queue<T>::Queue(int size)
{
queuearray=new T[size];
queuesize=size;
numelements=0;
front=-1;
rear=-1;
}

template <class T>
Queue<T>::Queue(const Queue &obj)
{
queuearray=new T[obj.queuesize];
queuesize=obj.queuesize;
numelements=obj.numelements;
front=obj.front;
rear=obj.rear;

for(int i=0;i<obj.queuesize;i++)
	queuearray[i]=obj.queuearray[i];
}

template <class T>
Queue<T>::~Queue()
{
delete [] queuearray;
}

template <class T>
void Queue<T>::enqueue(T num)
{
	if(isfull())
	{
		cout<<"It is full"<<endl;
	}
	else
	{
	rear=(rear+1)%queuesize;
	queuearray[rear]=num;
	numelements++;
	}
}

template <class T>
void Queue<T>::dequeue(T &num)
{
	if(isempty())
	{
		cout<<"It is empty"<<endl;
	}
	else
	{
	front=(front+1)%queuesize;
	num=queuearray[front];
	numelements--;
	}
}

template <class T>
bool Queue<T>::isfull()
{
bool status;
if(numelements==queuesize)
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
bool Queue<T>::isempty()
{
bool status;
if(numelements==0)
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
void Queue<T>::clear()
{
front=rear=queuesize-1;
numelements=0;
}


