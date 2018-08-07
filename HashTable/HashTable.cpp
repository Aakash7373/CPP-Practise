#include <string>

#include <iostream>


using namespace std;


#include "HashTable.h"


HashTable:: HashTable()
{
    size=0;

}


HashTable::HashTable (int s) {
    
size = s;
    
array = new Entry[size];
    
for (int i=0; i<size; i++) 
{
        
array[i].status = OPEN;
    
}

}


int HashTable::hash(int x)
{
return (x%size);
}


void HashTable::insert ( int element) 
{
    
int index = hash(element);   // hash function
    
if (!member(element)) 
{
        while (array[index].status == OCCUPIED) 
{  //skip OCCUPIEDs only
            index = index+1%size;
        
}
        
array[index].value = element;
        
array[index].status = OCCUPIED;
    
}

}



bool HashTable::member( int element ) 
{
    
int index = element%size;   // hash function
    
while (array[index].status != OPEN) 
{ //skip OCCUPIEDs and DELETEDs
        
if (array[index].status == OCCUPIED && array[index].value == element)
            
return true;
        
index = index+1%size;
    
}
    
return false;

}



//alternate definition for member
//
bool HashTable::member( int element ) 
{
//    int index = element%size;   // hash function
//    
while (array[index].status == DELETED ||
//           (array[index].status == OCCUPIED && array[index].value != element))
//        
index = index+1%size;
//    
return (array[index].status == OCCUPIED && array[index].value == element);

//}




void HashTable::display() 
{
   
 for (int i=0; i<size; i++) {
        
if (array[i].status == OCCUPIED)
          
  cout << array[i].value << " ";
   
 }
   
 cout << endl;

}



void HashTable::remove ( int element) 
{
    
int index = element%size;   // hash function
   
 while  (array[index].status == DELETED ||
            (array[index].status == OCCUPIED && array[index].value!=element))
          
 index = index+1%size;
   
 if (array[index].value==element)
      
  array[index].status = DELETED;

}




HashTable HashTable::operator^( HashTable that) 
{
    
HashTable result(size);
    
for (int i=0; i<size; i++) 
{
        
if (array[i].status == OCCUPIED && that.member(array[i].value))
           
 result.insert(array[i].value);
    
}
    
return result;

}

HashTable HashTable:: operator+(HashTable const &that)
{
    HashTable result(5);
    for(int i=0;i<size;i++)
    {

     result.insert(array[i].value);

    }
    for(int i=0;i<that.size;i++)
    {
        //cout<<that.size<<" fgh"<<endl;
    //    if(!result.member(array[i].value))
        result.insert(that.array[i].value);
    }
    return result;
}

bool HashTable::operator==(HashTable  obj)
{
    int count=0;
    for(int j=0;j<size;j++)
    {
        for(int i=0;i<obj.size;i++)
        {
            if(array[j].value==obj.array[i].value)

            {
                 count++;
            }
        }
    }
cout<<count<<endl;
    if(count==size)
        return true;
   else
        return false;
}
