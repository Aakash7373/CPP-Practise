// Lab 9
// Fall 2016
// js236

#include <iostream>
#include "Stack.h"

using namespace std;

template <class T>
void reverse(T arr[],int size)
{
Stack<T> stk;
for(int i=0;i<size;i++)
{
stk.push(arr[i]);
}
while(!stk.isempty())
{
	cout<<stk.peek()<<" ";
	stk.pop();
}
cout<<endl;
}
/*
template <class T>
void reverse (T arr[], int size) {
    Stack<T> stk;
    for (int i=0; i<size; i++) {
        stk.push(arr[i]);
    }
    while (!stk.isempty()) {
        cout << stk.peek() << " ";
        stk.pop();
    }
    cout << endl;
}
*/
int main () {

    Stack <int> myStack;   //stack of ints

    cout << "The int stack: -------------------------------" << endl;

    if (myStack.isempty())
        cout << "int stack is empty" << endl;
    else
        cout << "int stack is not empty" << endl;

    myStack.push(42);

    if (myStack.isempty())
        cout << "int stack is empty" << endl;
    else
        cout << "int stack is not empty" << endl;

    cout << "Peek: " << myStack.peek() << endl;

    myStack.push(52);

    myStack.push(12);

    cout << "test pushes to int stack" << endl;
    myStack.display();


    cout << "The string stack: -------------------------------" << endl;

    Stack <string> s;        //stack of chars
    s.push("YYYY");
    s.display();

    if (s.isempty())
        cout << "string stack is empty" << endl;
    else
        cout << "string stack is not empty" << endl;

    s.push ("XXXX");
    s.push ("ABC123");
    s.display();

    s.pop();
    cout << "Peek after pop: " << s.peek() << endl;

    cout << "original stack again" << endl;
    s.display();
    s.pop(); cout << "pop" << endl;
    s.pop(); cout << "pop" << endl;
    if (s.isempty())
        cout << "string stack is empty" << endl;
    else
        cout << "string stack is not empty" << endl;


    string array[]={"AAA","BBB","CCC"};
    reverse<string> (array,3);
    cout<<endl;


}




