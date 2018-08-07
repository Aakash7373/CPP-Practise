#ifndef HASHTABLE_H_INCLUDED
#define HASHTABLE_H_INCLUDED

// Lab 13, header file// Fall 2014
class HashTable  {private:    enum EntryType { OPEN, OCCUPIED, DELETED };    // 0 = open 1 = occupied 2 = deleted    struct Entry {        int value;        EntryType status;  // OPEN, OCCUPIED, or DELETED    };    Entry *array;    //array of elements    int size;
    int hash(int );        //size of arraypublic:     HashTable();    HashTable (int);    HashTable (const HashTable &src) {        size = src.size;        array = new Entry[size];        for (int i=0; i<src.size; i++)            array[i] = src.array[i];    }    ~HashTable () {        delete [] array;    }    void insert(int);    bool member(int);    void display();    void remove(int);    HashTable operator^( HashTable );
    HashTable operator+(HashTable const &);
    bool operator==(HashTable );};
#endif // HASHTABLE_H_INCLUDED
