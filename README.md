# CS221_Assignment1_Problem2
2)	Change the linked list implementation available in folder N:\CLASS\GanchevG\CS221\Assignment1\List\ in the following  way:

a)	In the List class, add a pointer to the last node. For an empty list, this pointer must be NULL.
b)	Modify the constructor, destructor and the existing member functions to properly maintain this pointer and to use it where this would improve program efficiency and/or readability.
c)	Implement a class Iterator suitable for iterating through the nodes of a  List object. 
•	In addition to a pointer to the list, the Iterator class should have two Node pointers, current pointing to the current node in a list, and previous pointing to the previous node in the same list.
•	The Iterator class should have member functions: 
o	get to return the data field of the current node	
o	next that advances the iterator to the next node,
o	previous that moves the iterator to the previous node.
o	equals  to compare two iterators
d)	In the List class implement the following additional member functions
•	begin to return an iterator with current pointer pointing to the first node in a list, and previous pointer NULL.
•	end to return an iterator with current pointer NULL and  previous pointer pointing to the last node in the list.
•	insert  with arguments   Iterator and int to insert before the position pointed to by the current pointer of the iterator a node with a data field set to the int argument 
•	delete with argument   Iterator to remove from the list the node pointed to by the current pointer of the iterator. The function delete should return an iterator with  current pointer pointing to the node that before the deletion was after the deleted node.
[50 Points]
