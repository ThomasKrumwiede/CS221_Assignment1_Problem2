// listmain.cpp
//
// This is a main program to test the linked list class.
//


#include <iostream>
#include "list.h"
#include "Iterator.h"
using namespace std;


int main ()
{
   List l;

   cout << "List created." << endl;
   l.rearInsert (10);
   l.rearInsert (20);
   cout << "Two data values inserted in rear." << endl;
   l.frontInsert (30);
   l.frontInsert (40);
   cout << "Two data values inserted in front." << endl;
   cout << "The list is: " << l << endl;
   while (l.length() > 0){
	   int value = l.frontDelete();
	   cout << "Deleted from the front " << value << endl;
	   cout << "The list length is " << l.length() << endl;
	   cout << "The list is: " << l << endl;	  
	   if (l.length() <=0) break;
	   value = l.rearDelete();
	   cout << "Deleted from the end " << value << endl;
	   cout << "The list length is " << l.length() << endl;
	   cout << "The list is: " << l << endl;
	   
   }  

   //Test the additions required from Assignment 1 Problem 2
   cout << "\n" << "Assingment 1 Problem 2:" << endl;

   List problem2list;
   problem2list.frontInsert(2);
   problem2list.frontInsert(1);
   problem2list.rearInsert(3);
   problem2list.rearInsert(4);
   problem2list.rearInsert(5);
   problem2list.rearInsert(6);

   //test part c

   //Test List::begin()
   Iterator position_begin;
   position_begin = problem2list.begin();
   for (int i = 0; i < 7; i++) {
		cout << "postition_begin = " << position_begin.get() << endl;
		position_begin.next();
   }
   

   //Test List::end()
   Iterator position_end;
   position_end = problem2list.end();
   for (int i = 0; i < 7; i++) {
	   cout << "position_end = " << position_end.get() << endl;
	   position_end.previous();
   }
   
   //Test of the insert method 
   position_begin = problem2list.begin();
   for (int i = 0; i < 3; i++) {
	   position_begin.next();
   }

   problem2list.insert(position_begin, 99);

   cout << '\n' <<  "Testing insert: " << endl;
   position_begin = problem2list.begin();
   for (int i = 0; i < 8; i++) {
	   cout << "postition_begin = " << position_begin.get() << endl;
	   position_begin.next();
   }


   
   
   //Test Iterator::equals()
   //using Iterator::next() and Iterator::previous()
  // while (!position_begin.equals(position_end)) {
	   //position_begin.next();
	   //position_end.previous();
	//}
   //cout << "Iterator is equal when position_begin = " << position_begin.get()
	   //<< "and position_end = " << position_end.get();

  
   return 0;
}