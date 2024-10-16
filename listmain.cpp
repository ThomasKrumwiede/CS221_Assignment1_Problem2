// listmain.cpp
//
// This is a main program to test the linked list class.
//


#include <iostream>
using namespace std;
#include "list.h"

void main ()
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
   system("pause");   
}