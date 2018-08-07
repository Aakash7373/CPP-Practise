#ifndef FEETINCHES_H_INCLUDED
#define FEETINCHES_H_INCLUDED

class feetinches
{
private:
    int feet,inches;
    void simplify();

public:
    feetinches(int f=0,int i=0)
    {
        feet=f;
        inches=i;
        simplify();


    }
    void setfeet(int );
    void setinches(int );
    int getfeet()const;
    int getinches()const;
    feetinches operator +(const feetinches &);
    feetinches operator-(const feetinches &);
    feetinches operator ++();
    feetinches operator ++(int);
    feetinches operator! ();
   // bool operator==(const);
    };

#endif // FEETINCHES_H_INCLUDED
