/*
 * main.cpp
 *
 *  Created on: Mar 3, 2017
 *      Author: pawar
 */

#include"Numberlist.h"
#include <iostream>
using namespace std;

int main()
{

NumberList list,list1;
list.appendnode(5);
list.appendnode(6);
list.appendnode(7);
list.appendnode(9);
list.display();
cout<<endl;

cout<<"New list \n";
list1=list.copy();
list1.display();
cout<<endl;
list.insertnode(8);
list.display();
cout<<endl;
list.deletenode(8);
list.display();
cout<<endl;
cout<<list.search(7)<<endl;
list.display();
cout<<endl;
cout<<list.getelement(3)<<endl;
//list.reverse();

//list.display();

return 0;
}
