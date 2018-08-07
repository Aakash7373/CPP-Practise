// Lab 13, driver file// Fall 2014#include<iostream>#include "HashTable.h"using namespace std;int main (){    HashTable s(10);    s.insert(3);    s.insert(10);    s.insert(3);   // should only insert one    cout << "Set s: ";    s.display();    if (s.member(3))        cout << "s contains 3" << endl;    else        cout << "s does not contain 3" << endl;    s.insert(7);    s.remove(3);    s.insert(8);    cout << "Set s, modified: ";    s.display();    HashTable b(10);    b.insert(3);    b.insert(7);    b.insert(10);    b.insert(12);    cout << "Set b: ";    b.display();    HashTable c = s^b;    cout << "Set s^b: ";    c.display();    cout << "Set d: ";    HashTable d(10);    d.insert(15);    d.insert(25);    d.display();    if (d.member(25))        cout << "s contains 25" << endl;    else        cout << "s does not contain 25" << endl;// uncomment this after you implement remove    d.remove(15);    d.display();    if (d.member(25))        cout << "s contains 25" << endl;    else        cout << "s does not contain 25" << endl;
HashTable z1(2);
z1.insert(2);
z1.insert(4);
z1.display();
HashTable z2(2);
z2.insert(4);
z2.insert(7);
z2.display();
HashTable z(5);
z=z1+z2;
z.display();

HashTable a1(3);
a1.insert(4);
a1.insert(5);
a1.insert(2);
a1.display();
HashTable a2(3);
a2.insert(2);
a2.insert(4);
a2.insert(5);
a2.display();
if(a1==a2)
    cout<<"Both are equal"<<endl;
else
    cout<<"Both are not equal"<<endl;



};