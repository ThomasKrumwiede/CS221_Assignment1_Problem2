// list.h
//
// A class implementing a linked list of integers.
//
#include <iostream>
using namespace std;

class List;
class Iterator;

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

    //Part D member function using the iterator class 
    Iterator begin();
    Iterator end();
    void insert(Iterator iter, int insert_dateValue);
    void delete_node(Iterator iter);

    friend ostream& operator<< (ostream& out, List& l);  // print the list

    
protected:
    struct Node
    {
        int  data;
        Node *next;
    };

	Node* first;
    Node* last;

    friend class Iterator;
};

#endif
