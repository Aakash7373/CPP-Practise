#include<iostream>
#include "feetinches.h";
using namespace std;



    void feetinches::simplify()
    {
        if(inches>=12)
        {
            feet+=(inches/12);
            inches=inches%12;
        }
        else if(inches<0)
        {
          feet=(feet-1);
          inches=inches+12;
        }
    }

void feetinches:: setfeet(int f)
    {
        feet=f;
    }
void feetinches::setinches(int i)
    {
        inches=i;
    }
int feetinches::getfeet()const
{
    return feet;
}
int feetinches::getinches()const
{
    return inches;
}
feetinches feetinches:: operator +(const feetinches &right)
    {
        feetinches temp;
        temp.feet=feet+right.feet;
        temp.inches=inches+right.inches;
        if(temp.inches>12)
        {
            temp.feet++;
            temp.inches=temp.inches-12;
        }
        return temp;
    }
feetinches feetinches:: operator-(const feetinches &right)
{
       feetinches temp;
        temp.feet=feet-right.feet;
        temp.inches=inches-right.inches;
        temp.simplify();
        return temp;
}
feetinches feetinches:: operator++()
{
    ++inches;
    simplify();
    return *this;
}
feetinches feetinches:: operator++(int num)
{
 //   feetinches temp(feet,inches);
    inches++;
    simplify();
    return *this;
}
feetinches feetinches::operator! ()
{
    int temp;
    temp=feet;
    feet=inches;
    inches=temp;
    return *this;
}
