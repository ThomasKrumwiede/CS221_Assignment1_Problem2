#pragma once
#include <string>
#include <iostream>
#include <cassert>
#include "list.h"
using namespace std;


class Iterator
{
public:
	/** Gets the data field of the given node 
	@Return the int value of the current node data field
	*/
	Iterator(); 

	int get() const;

	void next();

	void previous();

	bool equals(Iterator b) const;

private:
	List::Node* previous_node;
	List::Node* current_node;

	List* container;

	friend class List;
};