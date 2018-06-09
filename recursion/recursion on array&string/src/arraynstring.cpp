//============================================================================
// Name        : factorial.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int factorial(int n)
{
	if(n==0)
		return 1;
	else
		return n* factorial(n-1);
}

int sumnumbers(int n)
{
	if(n==0)
		return 0;
	else
		return sumnumbers(n-1)+n;
}

double reciprocal(int n)
{
if(n==0)
	return 0;
else
	return reciprocal(n-1)+1.0/n;
}

int sum(int arr[],int size)
{
	if(size==0)
		return 0;
	else
		return sum(arr,size-1)+arr[size-1];
}

int gcd(int x,int y)
{
	if(x%y==0)
		return y;
	else
		return gcd(y,x%y);
}

int numchars(char x,string str)
{
	if(str.empty())
		return 0;
	else
	{
		int result=numchars(x,str.substr(1,str.size()-1));
		if(str[0]==x)
			return 1+result;
		else
			return result;
	}
}

int fibonacci(int x)
{
	if(x==0||x==1)
		return x;
	else
	{
		return fibonacci(x-1)+fibonacci(x-2);
	}
}

bool ismember(int arr[],int size,int x)
{
	if(size==0)
		return false;

	else
		return ismember(arr,size-1,x)||arr[size-1]==x;
}

int pow(int num,int expo)
{
	if(expo==0)
		return 1;
	else
		return 2*pow(num,expo-1);

}

int maximum(int arr[],int size)
{
	if(size==1)
		return arr[0];
	else
	{
		int result=maximum(arr,size-1);
		if(result>arr[size-1])
			return result;
		else
			return arr[size-1];
	}
}

int sumofsquares(int arr[],int size)
{
	if(size==0)
		return 0;
	else
		return sumofsquares(arr,size-1)+arr[size-1]*arr[size-1];
}

bool containsodd(int arr[],int size)
{
	if(size==0)
		return true;
	else
		return containsodd(arr,size-1) && arr[size-1]%2==1;
}

bool subset(int arr1[],int size1,int arr2[],int size2)
{
	if(size1==0)
		return true;
	else
		return subset(arr1,size1-1,arr2,size2) && ismember(arr2,size2,arr1[size1-1]);

}

string concatenate(string s1,string s2)
{
	if(s2.empty())
		return s1;
	else
	{
		s1+=s2[0];
		string result=concatenate(s1,s2.substr(1,s2.size()-1));

		return result;
	}
}

bool allelemgreaterthan90(int arr[],int size)
{
	if(size==0)
		return false;
	else
	{
		return allelemgreaterthan90(arr,size-1)&& arr[size-1]>90;

	}
}

int elemgreaterthan90(int arr[],int size)
{
	if(size==0)
		return 0;
	else
	{
		int result=elemgreaterthan90(arr,size-1);
		if(arr[size-1]>90)
			return 1+result;
		else
			return result;

	}
}


int multiplication(int x,int y)
{
	if(x==0)
		return 0;
	if(x>0)
		return y+multiplication(x-1,y);
	else
		return -multiplication(-x,y);


}

string encrypt(string s)
{
	if(s.empty())
		return " ";

	else
	{
		string result=encrypt(s.substr(1,s.size()-1));
		char x;
		if(s[0]!=' ')
			x=s[0]^5;
		else
			x=' ';

		return x+result;
	}
}

string substitute(string s,string v,char x)
{
	if(s.empty())
		return " ";
	else
	{
		string result=substitute(s.substr(1,s.size()-1),v,x);
		if(s[0]==x)
			return v+result;
		else
			return s[0]+result;
	}
}

void stringReverse(string str)
{
	//int size = str.size();
	if(str.size()==1)
	{
		cout << str<<endl;
	}
	else
	{
		cout<<str[str.size()-1];
		stringReverse(str.substr(0,str.size()-1));
	}
}



void printbinary(int num)
{
	if(num>1)
		printbinary(num/2);
	cout<<num%2;
}

void swapmiddleandlast(int arr[],int size)
{
	if(size==0)
		return ;
	else
		swapmiddleandlast(arr,size-1);
	swap(arr[size-2],arr[size-1]);
}

int mult3(int n)
{
	if(n==0)
		return 0;
	else
		return mult3(n-1)+3;
}


bool isPalindrome(string str)
{
	if (str.length() == 0 || str.length() == 1)
	{
		return true;
	}
	if (str[0] != str[str.length() - 1])
	{
		return false;
	}
	if (isPalindrome(str.substr(1, str.length()-2)))
	{
		return true;
	}
	else
		return false;

}

int Ackerman(int m,int n)
{
	if(m==0)
	{
		return n+1;
	}
	if(n==0)
	{
		return Ackerman(m-1,1);
	}
	else
	{
		return Ackerman(m-1,Ackerman(m,n-1));
	}
}


bool isSorted(int a[],int size)
{
	if(size==0||size==1)
	{
		return true;
	}
	if(a[size-2]<a[size-1])
	{
		 isSorted(a,size-1);
		return true;
	}
	else
		return false;
}

void insertLast(int arr[],int size)
{
if(size>1)
{
if(arr[size-1]<arr[size-2])
{
swap(arr[size-1],arr[size-2]);
insertLast(arr,size-1);
}
}
}
/*
bool palindrome (string str)
{
    for (unsigned int i=0; i<str.length(); i++)
    {
        if (str[i]!=str[str.length()-(i+1)])
        	return false;
    }
    return true;
}
 */

int main()
{
	int arr[6]={1,2,3,4,5,2};
	int a[3]={1,2,4};
	int oddarray[3]={1,3,5};
	int array[6]={90,85,95,100,80,200};
	int x=factorial(5);
	int y=sum(arr,6);
	int z=gcd(12,6);
	int m=fibonacci(5);
	string s="akash";
	string str="pawar";
	int result=numchars('a',s);
	int power=pow(2,4);
	int max=maximum(arr,6);
	int squares=sumofsquares(arr,6);


	string k="ala";


	cout<<"The factorial is:"<<x<<endl;
	cout<<"The sum is:"<<y<<endl;
	cout<<"The gcd of x and y is:"<<z<<endl;
	cout<<"The no of times a appears is:"<<result<<endl;
	cout<<"The fibonacci series of first five nos is:"<<m<<endl;
	if(ismember(arr,6,2))
	{
		cout<<"2 is a member"<<endl;
	}
	else
	{
		cout<<"2 is not a member"<<endl;
	}

	if(containsodd(oddarray,3))
		cout<<"The array contains odd elements"<<endl;
	else
	{
		cout<<"The array does not contain odd elements"<<endl;
	}
	cout<<"The power of (2,4) is:"<<power<<endl;
	cout<<"The maximum is:"<<max<<endl;
	cout<<"The sum of squares in an array is:"<<squares<<endl;

	if(subset(a,3,arr,6))
	{
		cout<<"Second array is a subset of first"<<endl;
	}
	else
	{
		cout<<"Not a subset"<<endl;
	}

	string c=concatenate(s,str);
	cout<<c<<endl;

	if(allelemgreaterthan90(array,5))
	{
		cout<<"Array contains  elements greater than 90"<<endl;
	}
	else
		cout<<"Array does not contains elements more than 90"<<endl;


	//int count=allelemgreaterthan90(array,5);
	//cout<<count<<endl;

	string eny=encrypt(s);
	cout<<eny<<endl;

	string sub=substitute(s,str,'a');
	cout<<sub<<endl;
	printbinary(5);
	cout<<endl;
	swapmiddleandlast(a,3);
	for(int i=0;i<3;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;

	int num=mult3(3);
	cout<<num<<endl;

	int multiply=multiplication(3,4);
	cout<<multiply<<endl;

	int summ=sumnumbers(3);
	cout<<summ<<endl;

	if(isPalindrome(k))
	{
		cout<<"The string is palindrome."<<endl;
	}
	else
	{
		cout<<"No it is not a palindrome"<<endl;
	}
	stringReverse(s);

	//Testing ackerman function...
	for(int m=0;m<1;m++)
	{
		for(int n=0;n<6;n++)
		{
			cout<<"A("<<m<<","<<n<<")"<<" ";
		}
		cout<<endl;
	}

	double rec=reciprocal(2);
	cout<<rec<<endl;

	if(isSorted(a,3))
	{
		cout<<"List is sorted"<<endl;
	}

	else
	{
		cout<<"List not sorted"<<endl;
	}

	insertLast(a,3);
	for(int n=0;n<3;n++)
			{
				cout<<a[n]<<" ";
			}
cout<<endl;

int great=elemgreaterthan90(array,6);
cout<<great<<endl;
	return 0;
}
