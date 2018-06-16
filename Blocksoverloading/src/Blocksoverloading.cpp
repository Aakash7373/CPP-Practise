

#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<string>
using namespace std;

class Block
{
private:
    string color;
    int x, y;
    int width, height;
public:

    Block() {color="Black"; x = 0; y = 0; width = 0; height = 0;}

    Block(string c, int newX, int newY, int newWidth, int newHeight )
         {color=c; x = newX; y = newY; width = newWidth; height = newHeight;}

    void setColor(string newColor) {color = newColor;}
    void setX(int newX) {x = newX;}
    void setY(int newY) {y = newY;}
    void setWidth(int newWidth) {width = newWidth;}
    void setHeight(int newHeight) {height = newHeight;}
    string getColor()   {return color;}
    int getX() {return x;}
    int getY() {return y;}
    int getWidth() {return width;}
    int getHeight() {return height;}

    void display() {
        cout << color << " (" << x << "," << y << ") " << width << "x" << height
             << endl;
    }

    int operator!()
    {
        return width * height;
    }

    bool operator==(const Block &right)
    {
    	bool status;
    	if(color==right.color && width==right.width && height==right.height)
    	{
    		status=true;
    	}
    	else
    	{
    		status=false;
    	}
        return status;
    }

    bool operator<(const Block &right)
    {
    	bool status;
        if (width*height < right.width*right.height)
        {
        	status=true;
        }
        else
        {
        	status=false;
        }
        return status;
    }

    Block operator+(const Block &right)
    {
    	Block temp;
    	temp.x=x+right.x;
    	temp.y=y+right.y;
    	temp.width=width+right.width;
    	temp.height=height+right.height;
    	temp.color=color+right.color;
    	return temp;
    }

};
    	/*
        int newX = x+right.x;
        int newY = y+right.y;
        int newWidth = right.width;
        if (width > right.width)
            newWidth = width;
        int newHeight = right.height;
        if (height > right.height)
            newHeight = height;
        Block result(color,newX,newY,newWidth,newHeight);
        return result;
        */


int main()
{
    Block b1;
    Block b2 ("Yellow",5,8,2,2);
    Block b3 ("Blue",7,2,5,1);

    b1.display();
    b2.display();
    b3.display();

    cout << "!b2 = " << !b2 << endl;
    if (b2==b3)
        cout << "b2==b3" << endl;
    else
        cout << "b2==b3 is false" << endl;
    if (b2<b3)
        cout << "b2<b3" << endl;
    else
        cout << "b2<b3 is false" << endl;
    Block b4 = b1 + b2;
    b4.display();
    Block b5 = b2 + b3;
    b5.display();

return 0;
}
