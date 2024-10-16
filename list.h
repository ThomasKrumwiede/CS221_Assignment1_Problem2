// list.h
//
// A class implementing a linked list of integers.
//
#include <iostream>
using namespace std;

#ifndef LIST_H
#define LIST_H

class List{
public:
    List ();  // constructor
    ~List (); // destructor

    void frontInsert (int value);  // insert at front of list
    void rearInsert (int value);   // insert at rear of list
	int frontDelete();
	int rearDelete();
	int length() const;

    friend ostream& operator<< (ostream& out, List& l);  // print the list
    
protected:
    struct Node
    {
        int  data;
        Node *next;
    };

	Node *first;
};

#endif
