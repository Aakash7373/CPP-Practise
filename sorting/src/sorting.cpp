// Lab 11 exercise 1
// Fall 2016
// List of Students driver

#include <iostream>
#include <iomanip>
#include "StudentArray.h"
using namespace std;

int main() {
    Student s1 = {"A00829047", "Taylor, Anne",  87.9};
    Student s2 = {"A00205432", "Hall, Brad", 78.5};
    Student s3 = {"A00462917", "Starnes, Randy",93.6};
    Student s4 = {"A00879765", "Mitchell, Barbara", 97.8};
    Student s5 = {"A00478369", "Ward, Keith", 70.5};
    Student s6=  {"A00456987", "Akash, Pawar", 91.5};

    StudentArray studList;
    studList.add(s1);
    studList.add(s2);
    studList.add(s3);
    studList.add(s4);
    studList.add(s5);

    cout << "display-------------------------------------------------"<<endl;
    studList.display();

    cout << endl;
    cout << "display sorted by Name ---------------------------------"<<endl;
    studList.sortByName();
    studList.display();

    cout << endl;
    cout << "display sorted by Avg  ---------------------------------"<<endl;
    studList.sortByAvg();
    studList.display();

    string name1 = "Mitchell, Barbara";
    string name2 = "Hensen, Edward";

    cout << endl;
    cout << "search for " << name1 << " ---------------------------------"<<endl;

    Student t1 = studList.searchByName(name1);

    if (t1.ID.empty())
        cout << name1 << " not found" << endl;
    else
        cout << setw(12) << left << t1.ID
        << setw(20) << t1.name
        << setw(8) << right << t1.average << endl;

    cout << endl;
    cout << "search for " << name2 << " ---------------------------------"<<endl;
    Student t2 = studList.searchByName(name2);
    if (t2.ID.empty())
        cout << name2 << " not found" << endl;
    else
        cout << setw(12) << left << t2.ID
        << setw(20) << t2.name
        << setw(8) << right << t2.average << endl;


    string id1 = "A00478369";
    string id2 = "A00474747";
    cout << endl;
    cout << "search for " << id1 << " ---------------------------------"<<endl;
    t1 = studList.searchByID(id1);
    if (t1.ID.empty())
        cout << id1 << " not found" << endl;
    else
        cout << setw(12) << left << t1.ID
        << setw(20) << t1.name
        << setw(8) << right << t1.average << endl;

    cout << endl;
    cout << "search for " << id2 << " ---------------------------------"<<endl;
    t2 = studList.searchByID(id2);
    if (t2.ID.empty())
        cout << id2 << " not found" << endl;
    else
        cout << setw(12) << left << t2.ID
        << setw(20) << t2.name
        << setw(8) << right << t2.average << endl;

}
