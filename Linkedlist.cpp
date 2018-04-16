//============================================================================
// Name        : Linkedlist.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include"Numberlist.h"

NumberList::NumberList()
{
head=NULL;
}

NumberList::NumberList(const NumberList &right)
{
head=NULL;
for(Listnode *p=right.head;p;p=p->next)
{
	push_back(p->value);
	break;
}
cout<<endl;
}

NumberList::~NumberList()
{
Listnode *p=head;
Listnode *n;

while(p!=NULL)
{
n=p->next;
delete p;
p=n;
}

}
NumberList NumberList::copy()
{
	NumberList newlist;
	for(Listnode *p=head;p;p=p->next)
	{
		newlist.insertnode(p->value);
	}
	return newlist;
}

bool NumberList::isempty()
{
return (head==NULL);
}
void NumberList::appendnode(double num)
{
Listnode *newnode;
Listnode *n;

newnode=new Listnode;
newnode->value=num;
newnode->next=NULL;

if(head==NULL)
{
head=newnode;
}

else
{
 n=head;

 while(n->next!=NULL)
 {
	 n=n->next;
 }
	 n->next=newnode;

}
}

void NumberList::insertnode(double num)
{
Listnode *newnode;
Listnode *n;
Listnode *previousnode=NULL;

newnode=new Listnode;
newnode->value=num;
newnode->next=NULL;

if(head==NULL)
{
head=newnode;
}

else
{
n=head;
while(n!=NULL && n->value<num)
{
previousnode=n;
n=n->next;
}

if(previousnode==NULL)
{
head=newnode;
newnode->next=n;
}
else
{
previousnode->next=newnode;
newnode->next=n;
}
}
}

void NumberList::deletenode(double num)
{
Listnode *n;
Listnode *previousnode=NULL;


if(head==NULL)
return;


if(head->value==num)
{
n=head->next;    //why not n->next
delete n;
head=n;
}
else
{
n=head;
while(n!=NULL && n->value!=num)
{
previousnode=n;
n=n->next;
}

if(n!=NULL)
{
previousnode->next=n->next;
delete n;
}
}
}
/*
void NumberList::reverse()
{
	NumberList newlist;
		for(Listnode *p=head;p;p=p->next)
		{
			newlist.insertnode(p->value);
		}


}
*/

int NumberList::search(double num)
{
Listnode *p=head;
int count=0;

while(p!=NULL && p->value!=num)
{
p=p->next;
count++;
}

if(p)
{
return count;
}
else
{
return -1;
}
}

double NumberList::getelement(int index)
{
	if(index<0)
	return 0;

Listnode *p=head;

for(int i=0;i<index && p!=NULL;i++)
{
p=p->next;
}

if(p)
{
return p->value;
}
else
{
return 0;
}
}


void NumberList::display()
{
Listnode *p=head;
while(p!=NULL)
{

cout<<p->value<<" ";
p=p->next;
}
}


void NumberList::push_front(double num)
{
Listnode *newnode;
newnode=new Listnode;
newnode->value=num;
newnode->next=head; //why head..
head=newnode;
}

void NumberList::push_back(double num)
{
Listnode *newnode;
newnode=new Listnode;
newnode->value=num;
newnode->next=NULL; //why head..

if(head==NULL)
	head=newnode;

else
{
Listnode *p=head;
while(p->next!=NULL)
{
p=p->next;
p->next=newnode;
}
}
}

void NumberList::pop_front()
{
if(head==NULL)
	cout<<"Empty list"<<endl;

else
{
	Listnode *p=head;
	head=head->next;
	delete p;
}
}

void NumberList::pop_back()
{
if(head!=NULL)
{
	Listnode *p=head;
	Listnode *n=NULL;
	while(p->next!=NULL)
	{
	n=p;
	p=p->next;
	}

	if(p==head)
	{
		delete head;
		head=NULL;
	}
	else
	{
		delete n->next;
		n->next=NULL;
	}
}
}

int NumberList::size()
{
Listnode *p=head;
int count=0;

while(p!=NULL)
{
p=p->next;
count++;
}
return count;
}
