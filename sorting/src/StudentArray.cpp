/*
 * StudentArray.cpp
 *
 *  Created on: Apr 1, 2017
 *      Author: pawar
 */


// Lab 11 exercise 1
// Fall 2016
// js236
// Array of Students with searching/sorting

#include <iostream>
#include <iomanip>
using namespace std;

#include "StudentArray.h"

StudentArray::StudentArray()
{
	count = 0;
}


void StudentArray::add(Student s)
{
	if(count<100)
	list[count]=s;
	count++;
}


void StudentArray::sortByName()
{
	bool swapped;
	do
	{
		swapped = false;
		for (int i = 0; i < (count-1); i++)
		{
			if (list[i].name > list[i+1].name)
			{
				swap(list[i],list[i+1]);
				swapped = true;
			}
		}
	} while (swapped);
}


int StudentArray::findIndexOfMin (Student array[], int size, int start)
{
	int minIndex = start;
	for (int i = start+1; i < size; i++)
	{
		if (array[i].average < array[minIndex].average)
		{
			minIndex = i;
		}
	}
	return minIndex;
}


void StudentArray::sortByAvg()
{
	int minIndex;
	for (int index = 0; index < (count -1); index++)
	{
		minIndex = findIndexOfMin(list, count, index);
		swap(list[minIndex],list[index]);
	}
}

void StudentArray::display()
{
	for (int i=0; i<count; i++)
	{
		   cout << setw(12) << left << list[i].ID
				<< setw(20) << list[i].name
				<< setw(8) << right << list[i].average << endl;
	}
}


Student StudentArray::searchByName(string name)
{

	sortByName();

	int first = 0,      //index to (current) first elem
	last = count-1,    //index to (current) last elem
	middle,             //index of (current) middle elem
	position = -1;      //index of target value
	bool found = false;     //flag

	while (first <= last && !found)
	{

		middle = (first + last) /2;    //calculate midpoint

		if (list[middle].name == name)
		{
			found = true;
			position = middle;
		}
		else if (name < list[middle].name)
		{
			last = middle-1;           //search lower half
		}
		else
		{
			first = middle + 1;          //search upper half
		}
	}
	if (position==-1)
	{
		Student s;
		return s;
	}
	else
		return list[position];
}

Student StudentArray::searchByID(string id)
{
	for (int i=0; i<count; i++)
	{
		if (list[i].ID == id)
			return list[i];
	}
	Student s;  //ID will be empty string by default
	return s;
}

