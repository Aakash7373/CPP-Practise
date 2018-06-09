#include <iostream>
using namespace std;

class IntList
{
private:
    struct ListNode
	{
        int value;
        ListNode *next;
    };
    ListNode *head;

    void displayList(ListNode*);
    void append (int x, ListNode *& p);
    void deletenode (int x, ListNode *& p);
    ListNode *reverse(ListNode *p);
    void destroy(ListNode *& p);

    int maxNode(ListNode *p);
    int countnodes(ListNode *p);
    int sumnodes(ListNode *p);
    bool isSorted(ListNode *p);
    double lastElem(ListNode *p);

public:
    IntList();
    ~IntList();

    void appendNode(int);
    void deletenode(int);
    void displayList();
    void reverse();
    void destroy();
    int maxNode();
    int countnodes();
    int sumnodes();
    int average();
    bool isSorted();
    double lastElem();
};

IntList::IntList()
{

    head =  NULL;
}

void IntList::destroy(ListNode *& p)
{
if(p!=NULL)
{
	destroy(p->next);
	delete p;
}
}

void IntList::destroy()
{
	destroy(head);
}

IntList::~IntList()
{

    ListNode *p;
    ListNode *n;
    p = head;
    while (p!=NULL)
    {
        n = p->next;  //save address of next node
        delete p;
        p = n;        //make p point to the next node
    }
}

void IntList::append (int x, ListNode *& p)
{

    if (p == NULL)
    {
        p = new ListNode;
        p->value = x;
        p->next = NULL;
    }
    else
        append (x, p->next);
}

void IntList::appendNode (int x)
{
    append(x, head);
}

void IntList::deletenode (int x, ListNode *& p)
{

    if (p!=NULL)
    {
    	if(p->value==x)
    	{
    		ListNode *temp=p;      //for deleting first occurence of the string
    		p=p->next;			// just comment ListNode *temp=p and delete temp;
    		delete temp;
    	}
    else
        deletenode (x, p->next);
    }
}

void IntList::deletenode (int x)
{
    deletenode(x, head);
}



void IntList::displayList()
{
    displayList(head);
    cout << endl;
}

void IntList::displayList(ListNode *p)
{
    if (p!=NULL)
    {
        cout << p->value  << "  ";
        displayList( p->next );
    }
}

void IntList::reverse()
{
    head = reverse(head);
}

IntList::ListNode *IntList::reverse(ListNode *p)
{
    if (p==NULL)
        return NULL;
    else
    {
        int num = p->value;
        ListNode *result = reverse (p->next);
        append(num,result);
        delete p;           //append made a new node, deallocate the old one
        return result;
    }
}

int IntList::maxNode(ListNode *p)
{
if(p->next==NULL)
	return p->value;

else
{
int max=maxNode(p->next);
if(max>p->value)
	return max;
else
	return p->value;
}
}

int IntList::maxNode()
{
return maxNode(head);
}

int IntList::countnodes(ListNode *p)
{
if(p==NULL)
	return 0;

else
{
	return 1+countnodes(p->next);
}
}

int IntList::countnodes()
{
return countnodes(head);
}

int IntList::sumnodes(ListNode *p)
{
if(p==NULL)
	return 0;

else
{
	return p->value+sumnodes(p->next);
}
}

int IntList::sumnodes()
{
return sumnodes(head);
}

int IntList::average()
{
if(head==NULL)
	return 0;
else
	return (sumnodes(head)/countnodes(head));
}

bool IntList::isSorted(ListNode *p)
{
    if (p==NULL||p->next==NULL)
        return true;

    else
        return (p->value < p->next->value) && isSorted(p->next);
}

bool IntList::isSorted()
{
    return isSorted(head);
}

double IntList::lastElem(ListNode *p)
{
    if (p->next==NULL)
        return p->value;
    else
        return lastElem(p->next);
}

double IntList::lastElem()
{
    //assert(head!=NULL);
    return lastElem(head);
}


int main()
{

    // set up the list
    IntList list;

    //Append Some values to the list
    list.appendNode(2);
    list.appendNode(7);
    list.appendNode(12);


    // Display the values in the list
    list.displayList();

    // Demo reverse:
    list.reverse();

    list.displayList();


    list.displayList();
  cout<<"Maximum node is:"<<list.maxNode()<<endl;

  cout<<"No of nodes are:"<<list.countnodes()<<endl;

  cout<<"Sum of nodes are:"<<list.sumnodes()<<endl;
  list.displayList();

  cout<<"The average is:"<<list.average()<<endl;

    list.displayList();
    if(list.isSorted())
    {
    	cout<<"It is sorted"<<endl;
    }
    else
    {
    	cout<<"Not sorted"<<endl;
    }

    list.deletenode(2);
    list.displayList();
    //list.destroy();
    list.displayList();
    cout<<list.lastElem()<<endl;


}

