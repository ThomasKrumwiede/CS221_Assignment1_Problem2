// list.cpp
//
// This file implements the integer linked list class.
//
#include <cassert>
#include <iostream>
#include "list.h"
using namespace std;

// Constructor
List::List ()
{
   first = NULL;
   last = NULL;
}

// Destructor
List::~List (){
    Node *next_node;

    while (first != NULL){
        next_node = first->next;
        delete first;
        first = next_node;
    }
}

// Insert at front of list
void List::frontInsert (int value){
    Node *new_node;

    new_node = new Node;
	//Make sure that the new node is not NULL 
    if (new_node == NULL){
        cout << "Unable to allocate memory. Insertion cancelled." << endl;
        return;
    }

	//Check to see if the node being inserted will be the only node in the list 
	//if new_node is the only node in the list set last to point to new_node
	if (first == NULL) {
		last = new_node;
	}

	//Insert new_node at the front of the list if the list is not empty
    new_node->data = value;
    new_node->next = first;
    first = new_node;
}

// Insert at rear of list
void List::rearInsert (int value)
{
    Node *new_node, *current;

    new_node = new Node;
    if (new_node == NULL)
    {
        cout << "Unable to allocate memory. Insertion cancelled." << endl;
        return;
    }
    new_node->data = value;
    new_node->next = NULL;
	if (first == NULL) {
		first = new_node;
		last = new_node;
	}
    else
    {
        current = last;
        //while (current->next != NULL) 
			//current = current->next;
        current->next = new_node;
		last = new_node;
    }
	///does not maintain last
}

int List::frontDelete(){
	assert(first != NULL);
	Node * temp = first;
	int value = first->data;
	first = first->next;
	delete temp;
	return value;
}

int List::rearDelete(){	
	assert(first != NULL);
	int value;
	if (first->next == NULL) {// there is a single node in thelist
		value = first->data;
		delete first;
		first = NULL;
	}
	else{     // need to traverse the list
		Node * current = first->next;
		Node * previous = first;
		while (current->next != NULL){
			previous = current;
			current = current->next;
		}
		value = current->data;
		delete current;
		previous->next = NULL;
	}
	return value;		
}

int List::length() const{
	int len = 0;
	Node* current = first;
	while (current != NULL){
		len++;
		current = current->next;
	}
	return len;		
}

// Print the list
ostream& operator<< (ostream& out, List& l)
{
	List::Node *current = l.first;

	while (current != NULL)
	{
		out << current->data << ' ';
		current = current->next;
	}
	return out;
}

