//============================================================================
// Name        : vectors.cpp
// Author      : akki
// Version     :
// Copyright   : Your copyright notice
// Description : vectors, Ansi-style
//============================================================================

#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int calsum(vector<int> &s)
{
	int sum=0;
	for(unsigned int i=0;i<s.size();i++)
	{
		sum=sum+s[i];

	}
	return sum;
}

void reverse(vector<int> &m)
{
	for(unsigned int i=m.size()-1;i>0;i--)
	{
		cout<<m[i]<<" ";
	}
}

void printeven(vector<int> &e)
{
	for(unsigned int i=0;i<e.size();i++)
	{
		if(e[i]%2==0)
		{
			cout<<e[i]<<" ";
		}
	}
}



int main()
{

	vector<int> myvect;

	vector<int>::iterator iter,iter1,iter2;

	myvect.push_back(1);
	myvect.push_back(2);
	myvect.push_back(3);
	myvect.push_back(4);
	myvect.push_back(5);
	myvect.push_back(6);
	myvect.push_back(0);

	myvect.push_back(1);
	myvect.push_back(2);
	myvect.push_back(3);
	myvect.push_back(4);
	myvect.push_back(4);
	myvect.push_back(7);
	myvect.push_back(0);





	myvect.insert(myvect.begin()+3,5);

	for(unsigned int i=0;i<myvect.size();i++)
	{
		cout<<myvect[i]<<" ";
	}

	myvect.erase(myvect.begin()+3);

	cout<<endl;
	for(unsigned int i=0;i<myvect.size();i++)
	{
		cout<<myvect[i]<<" ";
	}
	cout<<endl;

	//myvect.clear();
	if(myvect.empty())
		cout<<"EMpty ";
	else
	{
		cout<<"not empty ";
	}
	cout<<endl;

	//myvect.clear();

	for(unsigned int i=0;i<myvect.size();i++)
	{
		cout<<myvect[i]<<" ";
	}

	cout<<endl;
	int total=calsum(myvect);
	cout<<total<<endl;
	reverse(myvect);
	cout<<endl;
	printeven(myvect);
	cout<<endl;
	cout<<endl;


	cout<<"Vector manipulation using STL library functions "<<endl;
	cout<<myvect.size();
	cout<<endl;
	cout<<myvect.at(1);
	cout<<endl;
	cout<<myvect.capacity();
	cout<<endl;
	cout<<myvect.front();
	cout<<endl;
	cout<<myvect.back();
	cout<<endl;

	myvect.erase(myvect.begin()+1);

	//sort(myvect.begin(),myvect.end());
	random_shuffle(myvect.begin(),myvect.end());
	cout<<endl;
	sort(myvect.begin(),myvect.end());
	cout<<endl;
	cout<<count(myvect.begin(),myvect.end(),1);
	cout<<endl;
	for(iter=myvect.begin();iter!=myvect.end();iter++)
	{
		cout<<*iter<<" ";

	}
	cout<<endl;
	cout<<binary_search(myvect.begin(),myvect.end(),2);
	cout<<endl;
	iter2=max_element(myvect.begin(),myvect.end());
	cout<<*iter2;
	cout<<endl;
	iter1=find(myvect.begin(),myvect.end(),5);
	cout<<*iter1<<endl;
	myvect.pop_back();
	cout<<endl;
	for(iter=myvect.begin();iter!=myvect.end();iter++)
	{
		cout<<*iter<<" ";

	}
	cout<<endl;
	reverse(myvect.begin(),myvect.end());
	cout<<endl;
	myvect.insert(iter,3);
	cout<<endl;
	myvect.erase(iter);
	cout<<endl;
	for(iter=myvect.begin();iter!=myvect.end();iter++)
	{
		cout<<*iter<<" ";

	}

	cout<<endl;
	return 0;
}
