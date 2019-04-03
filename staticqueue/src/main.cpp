/*
 * main.cpp
 *
 *  Created on: Mar 13, 2017
 *      Author: pawar
 */
//

#include <iostream>
using namespace std;
#include"Queue.h"

int main()
{
int num;
Queue<int> q(5);

cout<<"Enqueuing 5\n";
q.enqueue(5);
cout<<"Enqueuing 4\n";
q.enqueue(4);
cout<<"Enqueuing 6\n";
q.enqueue(6);
cout<<"Enqueuing 15\n";
q.enqueue(15);
cout<<"Enqueuing 18\n";
q.enqueue(18);
cout<<endl;
cout<<"now dequeuing\n";

while(!q.isempty())
{
q.dequeue(num);
cout<<num<<endl;

}

return 0;

}
