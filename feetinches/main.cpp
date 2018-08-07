#include <iostream>
#include "feetinches.h";
using namespace std;

int main()
{
    int feet,inches;
    feetinches f1,f2,f3,f4,f5;
    cout<<"Enter the distance in feet and inches: ";
    cin>>feet>>inches;
    f1.setfeet(feet);
    f1.setinches(inches);
    f1=!f1;
    cout<<"!f1"<<f1.getfeet()<<" feet and "<<f1.getinches()<<" inches"<<endl;

    cout<<"Enter another distance in feet and inches: ";
    cin>>feet>>inches;
    f2.setfeet(feet);
    f2.setinches(inches);

    f3=f1+f2;
    cout<<"f1 + f2 = "<<f3.getfeet()<<" feet and "<<f3.getinches()<<" inches"<<endl;

    f3=f1-f2;
    cout<<"f1 - f2 = "<<f3.getfeet()<<" feet and "<<f3.getinches()<<" inches"<<endl;


    for(int i=0;i<12;i++)
    {
        f4=++f1;
        cout<<"Feet: "<<f4.getfeet()<<" feet "<<"Inches: "<<f4.getinches()<<" inches."<<endl;
    }
    cout<<endl;
    for(int i=0;i<12;i++)
    {
        f5=f1++;
        cout<<"Feet: "<<f5.getfeet()<<" feet "<<"Inches: "<<f5.getinches()<<" inches."<<endl;
    }

    return 0;
}
