/*
 * Simplevector.h
 *
 *  Created on: Mar 13, 2017
 *      Author: pawar
 */

#ifndef SIMPLEVECTOR_H_
#define SIMPLEVECTOR_H_

// Lab 6 Exercise 2, modified for lab 9
// Fall 2016
// js236

// SimpleVector class template
#include <iostream>
#include <cassert>
using namespace std;

template <class T>
class SimpleVector
{
private:
    T *aptr;          // To point to the allocated array
    int arraySize;    // Number of elements in the array

public:
    // Default constructor
    SimpleVector()      { aptr = NULL; arraySize = 0;}
    SimpleVector(const SimpleVector &);
    ~SimpleVector();
    int size() const      { return arraySize; }
    T getElement(int position);
    void setElement(int position, T item);
    void display();
    void pop_back();
    void pop_front();
    void push_back(T e);
};


//*******************************************
// Copy Constructor for SimpleVector class. *
//*******************************************

template <class T>
SimpleVector<T>::SimpleVector(const SimpleVector &obj) {
   arraySize = obj.arraySize;
   if (arraySize > 0)
      aptr = new T [arraySize];
   for(int count = 0; count < arraySize; count++)
      *(aptr + count) = *(obj.aptr + count);
}

//**************************************
// Destructor for SimpleVector class.  *
//**************************************

template <class T>
SimpleVector<T>::~SimpleVector()
{
   if (arraySize > 0)
      delete [] aptr;
}


//*******************************************************
// getElement function. The argument is a subscript.    *
// This function returns the value stored at the sub-   *
// cript in the array.                                  *
//*******************************************************

template <class T>
T SimpleVector<T>::getElement(int position)
{
    assert (0 <= position && position < arraySize);
    return aptr[position];
}

//*********************************************************
// setElement function. The arguments are a subscript and *
// a new element.  The new element is stored at position  *
// i in the array (overwriting the original value).       *
//*********************************************************

template <class T>
void SimpleVector<T>::setElement(int position, T item)
{
    assert (0 <= position && position < arraySize);
    aptr[position] = item;
}

//*********************************************************
// display function. Outputs the elements of the vector   *
// to the screen, all on one line.                        *
//*********************************************************
template <class T>
void SimpleVector<T>::display() {
    for (int i=0; i<arraySize; i++) {
        cout << aptr[i] << " ";
    }
    cout << endl;
}

//Below is the function for Lab 6 exercise 2:

template <class T>
void SimpleVector<T>::pop_back() {
    arraySize--;
    T *newAptr = new T[arraySize];
    for (int i=0; i<arraySize; i++) {
        newAptr[i] = aptr[i];
    }
    delete [] aptr;
    aptr = newAptr;
}

template <class T>
void SimpleVector<T>::push_back(T e) {
    arraySize++;
    T *newAptr = new T[arraySize];
    for (int i=0; i<arraySize-1; i++) {
        newAptr[i] = aptr[i];
    }
    newAptr[arraySize-1]=e;
    delete [] aptr;
    aptr = newAptr;
}

template <class T>
void SimpleVector<T>::pop_front() {
	arraySize--;
    T *newAptr = new T[arraySize];
    for (int i=0; i<arraySize; i++) {
        newAptr[i] = aptr[i+1];
    }

    delete [] aptr;
    aptr = newAptr;
}

//Below is the function for Lab 9 exercise 1:
/*
template <class T>
void SimpleVector<T>::push_back(T e) {
    arraySize++;
    T *newAptr = new T[arraySize];
    for (int i=0; i<arraySize-1; i++) {
        newAptr[i] = aptr[i];
    }
    newAptr[arraySize-1] = e;
    delete [] aptr;
    aptr = newAptr;
}

*/



#endif /* SIMPLEVECTOR_H_ */
