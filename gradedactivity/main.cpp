#include <iostream>
#include "gradedactivity.h"
#include"FinalExam.h"
#include "quiz.h"
using namespace std;
void displaygrade(const gradedactivity &);
int main()
{
   int q;
   int m;
   cout<<"How many ques are on the final exam: ";
   cin>>q;
   cout<<"Enter how many ques the student missed: ";
   cin>>m;
   quiz test;
   test.setqqm(q,m);

displaygrade(test);
   // cout<<"The score you have got is: "<<test.getscore()<<endl;
    //cout<<"You have got "<<test.getLettergrade()<<" grade"<<endl;
    return 0;
}
void displaygrade(const gradedactivity &c)
{
cout<<"The score you have got is: "<<c.getscore()<<endl;
 cout<<"You have got "<<c.getLettergrade()<<" grade"<<endl;

}
