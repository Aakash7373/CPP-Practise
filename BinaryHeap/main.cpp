#include <iostream>

using namespace std;
#include<cassert>
class Heap
{
private:
    int arr[100];
    int size=100;
    void percolateup(int);
    void percolatedown(int);
    void postordertraversal(int);

public:
    Heap();
    void insert(int);
    int deleteitem();
    void display();
    bool isempty();
    int left(int);
    int right(int);
    int parent(int);
};

    Heap::Heap()
    {
        size=0;
    }
    void Heap::insert(int num)
    {
        size++;
        arr[size]=num;
        percolateup(size);
    }
    void Heap::percolateup(int loc)
    {
        int parent;
        parent=loc/2;
        if(parent>0)
        {
            if(arr[loc]<arr[parent])
            {
                swap(arr[loc],arr[parent]);
                percolateup(parent);
            }
        }
    }

    int Heap::deleteitem()
    {
        assert(size>0);
        int result=arr[1];
        arr[1]=arr[size];
        size--;
        percolatedown(1);
        return result;
    }
    void Heap::percolatedown(int loc)
    {
        int left=loc*2;
        int right=loc*2+1;
        if(left>size)
        {
            return;
        }
        if(left==size)
        {
            if(arr[loc]>arr[left])
            {
                swap(arr[loc],arr[left]);
            }
            return;
        }
        if(arr[loc]<arr[left]&&arr[loc]<arr[right])
		return;
	if(arr[left]<arr[right])
	{
		swap(arr[loc],arr[left]);
		percolatedown(left);
	}
	else
	{
		swap(arr[loc],arr[right]);
				percolatedown(right);
	}


    }
    void Heap::display()
    {
        for(int i=1;i<=size;i++)
	{
		//if((i&&(i-1))==0)
			cout<<"\n";
			cout<<arr[i]<<" ";
	}
    cout<<"\n";

    }
    bool Heap::isempty()
    {
        return size==0;
    }

    int Heap::left(int b)

    {
       int a;
	for(int i=1;i<=size;i++)
	{
	if(arr[i]==b)
	{
	  if(2*i<=size)
	{
		a= arr[2*i];
	}
	  else
	  {
		  a=-1;
	  }
	}
	}
	return a;
    }


    int Heap::right(int b)
    {
        int a;
		for(int i=1;i<=size;i++)
		{
		if(arr[i]==b)
		{
		  if(2*i+1<=size)
		{
			a= arr[2*i+1];
		}
		  else
		  {
			  a=-1;
		  }
		}}
		return a;
    }
    int Heap::parent(int b)
    {
        int a,c;
		for(int i=1;i<=size;i++)
		{
		if(arr[i]==b)
		{
			c=i/2;
			a=arr[c];
		}
		}
		return a;
    }

int main()
{
    Heap h1;
	h1.insert(0);
	h1.insert(7);
	h1.insert(4);
	h1.insert(6);
	h1.insert(1);
	h1.insert(3);
	h1.insert(2);
	h1.insert(5);
	//h1.insert(9);
	//h1.insert(6);
	h1.display();
	cout<<endl;
	cout<<"Left"<<endl;
	cout<<h1.left(5)<<"\n";
	cout<<"Right"<<endl;
	cout<<h1.right(3)<<"\n";
	cout<<"Parent"<<endl;
	cout<<h1.parent(7)<<"\n";
	cout<<"Deleting"<<endl;
	while(h1.isempty()==0)
		cout<<h1.deleteitem()<<"\n";

}
