#include<iostream>
#include "gradedactivity.h"

using namespace std;

char gradedactivity:: getLettergrade()const
{
    char lettergrade;
    if(score>89)
        lettergrade='A';
    else if(score>79)
        lettergrade='B';
    else if(score>69)
        lettergrade='C';
    else if(score>59)
        lettergrade='D';
    else
        lettergrade='F';

        return lettergrade;
}

