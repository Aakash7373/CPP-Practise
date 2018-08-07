#ifndef FINALEXAM_H_INCLUDED
#define FINALEXAM_H_INCLUDED
#include"gradedactivity.h"

using namespace std;
class FinalExam:public gradedactivity

{
private:
    int numques;
    double pointseach;
    int nummissed;
public:
    FinalExam()
    {
        numques=0;
        pointseach=0.0;
        nummissed=0;
    }
    FinalExam(int q,double pe,int nm)
    {
        numques=q;
        pointseach=pe;
        nummissed=nm;
    }

    void set(int,int);
    int getnumques()const
    {
        return numques;

    }
    double getpointseach()const
    {
        return pointseach;
    }
    int getnummissed()const
    {
        return nummissed;
    }
};

#endif // FINALEXAM_H_INCLUDED
