#include "FinalExam.h"

void FinalExam::set(int ques,int nm)
{
    double numeric_score;

    numques=ques;
    nummissed=nm;
    pointseach=100.0/numques;
    numeric_score=100.0-(nummissed *pointseach);
    setscore(numeric_score);
}
