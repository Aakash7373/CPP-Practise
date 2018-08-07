#ifndef GRADEDACTIVITY_H_INCLUDED
#define GRADEDACTIVITY_H_INCLUDED
class gradedactivity
{


protected :
    double score;
public:
    gradedactivity()
    {
        score=0.0;

    }
    gradedactivity(double s)
    {
        score=s;
    }
    void setscore(double s)
    {
        score=s;
    }
    double getscore()const
    {
        return score;
    }
    char getLettergrade()const;



};

#endif // GRADEDACTIVITY_H_INCLUDED
