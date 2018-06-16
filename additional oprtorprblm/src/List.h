/*
 * List.h
 *
 *  Created on: Feb 17, 2017
 *      Author: pawar
 */

#ifndef LIST_H_
#define LIST_H_
#include<iostream>
#include<string>

using namespace std;

class List
{
private:
	int count;
	int num[100];

public:
	List();
	void add(int);
	void display();
	int operator!();
	bool operator==(List &);
	bool operator<(List &);
	List operator+(List &);
};



#endif /* LIST_H_ */
