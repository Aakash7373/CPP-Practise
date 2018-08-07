#include "quiz.h"

 void quiz:: setqqm(int q,int qm)
 {
     double total;
     ques=q;
     quesmissed=qm;

     points=100.0/ques;
     total=100.0-(points*quesmissed);
     setscore(total);
     adjustscore();
 }
 void quiz::adjustscore()
 {
     double frac=score-static_cast<int>(score);
    if(frac>=0.5)
    {
        score+=(1.0-frac);
    }
 }
