/*
  LinkedList.h
  Purpose - To have established data alongside respective nodes for helping establish an order of the data.

  @author Ron Sha, Steven Husar
  @version 1.0 5/11/2017
*/

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <typeinfo>
#include <iomanip>  // output format setw
#include <vector>
#include "dbconnect.h"



template< typename T > class List; // forward declaration

template< typename NODETYPE  >
class ListNode 
{

public:

   /*
  Purpose- Allows the List class to act as a friend for usage in the ListNode class

  @author Ron Sha
  @version 1.0 4/20/2017

  @return - none 
  */
   friend class List< NODETYPE >; 
   
           /*
  Purpose- establishes the data provided by the user when defining data and current key values

  @author Ron Sha
  @version 1.0 4/20/2017

  @return - none 
*/
   ListNode( const NODETYPE & ); // constructor
   
        /*
  Purpose- return the data in the node

  @author Ron Sha
  @version 1.0 4/20/2017

  @return data - the value stored in the current node.
*/
   NODETYPE getData() const; 

   
      /*
  Purpose- sets the private value nextPtr equal to the received nPtr

  @author Ron Sha
  @version 1.0 4/20/2017

  @return- none
*/
   
   void setNextPtr( ListNode *nPtr ) 
   { 
      nextPtr = nPtr; 
   } // end function setNextPtr
   
   // return nextPtr
   
   /*
  Purpose- Attains the next pointer from the class.

  @author Ron Sha
  @version 1.0 4/20/2017

  @return nextPtr - the next pointer following itself in the program
*/
   
   ListNode *getNextPtr() const 
   { 
      return nextPtr; 
   } // end function getNextPtr

private:
   NODETYPE data; // data
   int key; // used for key for the list
   ListNode *nextPtr; // next node in the list
}; // end class ListNode



template< typename NODETYPE  >
class List 
{
public:
/*
  Purpose- Default constructor that establishes the beginning and last pointer

  @author Ron Sha
  @version 1.0 4/20/2017

  @return- none
*/

   List(); 
 
 /*
  Purpose- Copy constructor that establishes the beginning and last pointer

  @author Ron Sha
  @version 1.0 4/20/2017

  @return- none
*/  
   
   List( const List< NODETYPE > & );
   
 /*
  Purpose- descotructor that eliminates all present pointer nodes.

  @author Ron Sha
  @version 1.0 4/20/2017

  @return- none
*/  
    
   ~List(); // destructor

/*
  Purpose- Allows for inserting data in front of a current data set

  @author Ron Sha
  @version 1.0 4/20/2017

  @param NODETYPE & value - a defined list of both data and node order directives.
  @param int key - the place in which the item will be stored as.
  @return- none
*/
   void insertAtFront( const NODETYPE &, int ); 
   
/*
  Purpose - Allows for inserting data in the back of a current data set.

  @author Ron Sha , Steven Husar
  @version 1.0 4/20/2017 / 5/11/2017

  @param NODETYPE & value - a defined list of both data and node order directives.
  @param int key - the place in which the item will be stored as.
  @return- none
*/   
   void insertAtBack( const NODETYPE &, int ); 
   
/*
  Purpose - Allows for removing data from the front of a current data set.

  @author Ron Sha
  @version 1.0 4/20/2017

  @param NODETYPE & value - a defined list of both data and node order directives.
  @return bool - a notion of completion of the process
*/     
   bool removeFromFront( NODETYPE & ); 
   
/*
  Purpose - Allows for removing data from the back of a current data set.

  @author Ron Sha, Steven Husar
  @version 1.0 4/20/2017 and 5/11/2017

  @param NODETYPE & value - a defined list of both data and node order directives.
  @return bool - a notion of completion of the process
*/     
   bool removeFromBack( NODETYPE & ); 
   
/*
  Purpose - Defines the list being currently empty.

  @author Ron Sha
  @version 1.0 4/20/2017

  @return bool - a test to see if the list is empty
*/    

   bool isEmpty() const; 
   
   /*
  Purpose - Display the contents of the List

  @author Ron Sha
  @version 1.0 4/20/2017

  @return - none
*/    
   void print() const; 
   
 //  void printPtrFunc(   );
 
   /*
  Purpose - Display the contents of the List

  @author Ron Sha
  @version 1.0 4/20/2017

  @return - none
*/   
 
   NODETYPE * getInfo(int myKey);
   
      /*
  Purpose - meant to return the firstPtr

  @author Ron Sha
  @version 1.0 4/20/2017

  @return firstPtr - the beginning of the nodes
*/  

   ListNode< NODETYPE >  *getFirstPtr() const 
   { 
      return firstPtr; 
   }
   
 protected:
   ListNode< NODETYPE > *firstPtr; // pointer to first node
   ListNode< NODETYPE > *lastPtr; // pointer to last node

      /*
  Purpose - Utility function to allocate a new node

  @author Ron Sha
  @version 1.0 4/20/2017

  @return ptr - Return a pointer to a newly allocated node
*/  
   
   ListNode< NODETYPE > *getNewNode( const NODETYPE &, int );
}; // end class template List

#endif
