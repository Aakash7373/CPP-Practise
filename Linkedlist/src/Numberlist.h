/*
 * Numberlist.h
 *
 *  Created on: Mar 3, 2017
 *      Author: pawar
 */

#ifndef NUMBERLIST_H_
#define NUMBERLIST_H_

class NumberList
{
private:
		struct Listnode
		{
			double value;
			Listnode *next;
		};
		Listnode *head;

public:
		NumberList();
		NumberList(const NumberList &);
		~NumberList();
		bool isempty();
		void appendnode(double);
		void insertnode(double);
		void deletenode(double);
		NumberList copy();
		void push_front(double);
		void push_back(double);
		void pop_front();
		void pop_back();
		int size();
		//void reverse();
		int search(double);
		double getelement(int);
		void display();

};




#endif /* NUMBERLIST_H_ */
