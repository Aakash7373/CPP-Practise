/*
 * StudentArray.h
 *
 *  Created on: Apr 1, 2017
 *      Author: pawar
 */

#ifndef STUDENTARRAY_H_
#define STUDENTARRAY_H_


// Lab 11 exercise 1
// Fall 2016
// js236
// Array of Students with searching/sorting

#include <string>
using namespace std;

struct Student {
    string ID;
    string name;
    double average;
};

class StudentArray {
private:
    Student list[100];
    int count;
    int findIndexOfMin (Student[], int, int);
public:
    StudentArray();
    void add(Student);
    void sortByName();
    void sortByAvg();
    void display();
    Student searchByName(string);
    Student searchByID(string);
};



#endif /* STUDENTARRAY_H_ */
