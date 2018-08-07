#ifndef QUIZ_H_INCLUDED
#define QUIZ_H_INCLUDED
#include "gradedactivity.h"
class quiz:public gradedactivity
{
    private:
    int ques;
    int quesmissed;
    double points;
public:
    quiz()
    {
        ques=0;
        quesmissed=0;
        points=0.0;
    }
    quiz(int q,int qm, double p)
    {
        ques=q;
        quesmissed=qm;
        points=p;
    }
    void setqqm(int,int);
    void adjustscore();
    int getques()
    {
        return ques;
    }
    int getquesmissed()
    {
        return quesmissed;
    }
    double getpoints()
    {
        return points;
    }

};

#endif // QUIZ_H_INCLUDED
