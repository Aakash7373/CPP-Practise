#include <iostream>
#include "Queue.h"

using namespace std;

template <class T>
bool equals(T arr1[],int size1,T arr2[],int size2)
{

bool status;
Queue<T> q1;
Queue<T> q2;
for(int i=0;i<size1;i++)
{
q1.enqueue(arr1[i]);
}
for(int i=0;i<size2;i++)
{
q2.enqueue(arr2[i]);
}
while(!q1.isempty() && !q2.isempty())
{
if(q1.peek()==q2.peek())
{
	status=true;
}
else
{
status=false;
}
q1.dequeue();
q2.dequeue();
}

return status;
}
/*
template <class T>
bool equals (T arr1[], int size1, T arr2[], int size2) {
    Queue<T> q1;
    Queue<T> q2;
    for (int i=0; i<size1; i++) {
        q1.enqueue(arr1[i]);
    }
    for (int i=0; i<size2; i++) {
        q2.enqueue(arr2[i]);
    }

    while (!q1.isempty() && !q2.isempty()) {
        if (q1.peek() !=q2.peek())
            return false;
        q1.dequeue();
        q2.dequeue();
    }
    return q1.isempty() && q2.isempty();
}

*/

int main () {

    Queue <int> myQueue;   //queue of ints

    cout << "The int queue: -------------------------------" << endl;

    if (myQueue.isempty())
        cout << "int queue is empty" << endl;
    else
        cout << "int queue is not empty" << endl;

    myQueue.enqueue(42);

    if (myQueue.isempty())
        cout << "int queue is empty" << endl;
    else
        cout << "int queue is not empty" << endl;

    cout << "Peek: " << myQueue.peek() << endl;

    myQueue.enqueue(52);

    myQueue.enqueue(12);

    cout << "test enqueuees to int queue" << endl;
    myQueue.display();


    cout << "The string queue: -------------------------------" << endl;

    Queue <string> s;        //queue of chars
    s.enqueue("YYYY");
    s.display();

    if (s.isempty())
        cout << "string queue is empty" << endl;
    else
        cout << "string queue is not empty" << endl;

    s.enqueue ("XXXX");
    s.enqueue ("ABC123");
    s.display();

    s.dequeue();
    cout << "Peek after dequeue: " << s.peek() << endl;

    cout << "original queue again" << endl;
    s.display();
    s.dequeue(); cout << "dequeue" << endl;
    s.dequeue(); cout << "dequeue" << endl;
    if (s.isempty())
        cout << "string queue is empty" << endl;
    else
        cout << "string queue is not empty" << endl;


    int arr1[] = {1,2,3,4};
    int arr2[] = {1,2,3,5};
    cout << boolalpha << equals(arr1,4,arr2,4) << endl;
    int arr11[] = {1,2,3,4};
    int arr22[] = {1,2,3,4,5};
    cout << boolalpha << equals(arr11,4,arr22,5) << endl;
    cout << boolalpha << equals(arr1,4,arr11,4) << endl;

}




