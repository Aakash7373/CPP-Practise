//============================================================================
// Name        : triangle.cpp
// Author      : Akash
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;



void spaces(int n)
{
if (n > 0)
{
cout << " ";
spaces(n-1);
}
}



void stars(int n)
{
if (n > 0)
{
cout << '*';
stars(n-1);
}
}

void triangle (int x, int sp)
{
    if (x%2==0)
    	return;

    if (x==1)
    {
        spaces(sp);
        cout << "*";
    }
    else
    {
        triangle(x-2,sp+1);        //just increase spaces to change shape of triangles..
        spaces(sp);
        stars(x);
    }
    cout << endl;
}

void rightTriangle (int n)
{
    if (n>0)
    {
        rightTriangle (n-1);
        cout << endl;
        stars(n);
    }
}

void squareRec (int n1, int n2)
{
    if (n1>0)
    {
        squareRec (n1-1,n2);
        cout << endl;
        stars(n2);
    }
}

void square (int n)
{
    squareRec(n,n);
	//Triangle(n,n);
}


/*
void Triangle (int n, int m)
{
    if (n>0)
    {
        triangle (n-2,m);
        spaces((m-n)/2);
        stars(n);
        cout << endl;
    }
}



int * pRow(int n) {
    int *r = new int[n];   //pRow(n) has n elements
    if (n==1)
        r[0] = 1;
    else {
        r[0] = 1;           //first elem is 1
        r[n-1]=1;           //last elem is 1
        int *p = pRow(n-1); //it's an array of n-1 elems
        for (int i=0; i<n-2; i++) {  //all but last elem of p
            r[i+1] = p[i] + p[i+1];  //r[1] = p[0]+p[1], r[2]=p[1]+p[2], etc.
        }
        delete [] p;
    }
    return r;
}

*/


int main()
{

triangle(9,0);
cout<<endl;
cout<<endl;
rightTriangle(4);
cout<<endl;
cout<<endl;
squareRec(3,4);
cout<<endl;
cout<<endl;
square(4);
cout<<endl;
cout<<endl;

//square(11);
//cout<<endl;
	return 0;
}
