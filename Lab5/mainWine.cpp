/*
 * PmainWine.cpp rogram Purpose:  This program will read the database's information from mySQL's wineInfo tablean 
 * and store its values and additional ones in the program with a node structure establishment.
 * 
 * It takes user's input through a series of options and based on the input, 
 * will print out the user information about the file passed into the program
 * 
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <typeinfo>
#include <string>
#include <iomanip>  // output format setw
#include <vector>
#include "dbconnect.h"
#include "LinkedList.hpp"
#include "parse.h"
#include "wine.h"
using namespace std;

/*
  Purpose- To show the list of data structured for the list of Nodes
  @author Ron Sha and Steven Husar
  @version 1.0 4/20/2017 / 5/11/2017

  @param nodeList - the current stored list of values the program holds currently
  @return- none
*/

template< typename NODETYPE >
void printNoteInfo (  List< NODETYPE > & nodeList)
{   
   NODETYPE *wp;
   wp = (NODETYPE *) nodeList.getInfo(0); //get node based on key
   wp->printInfo();
 
 
   ListNode< NODETYPE > *currentPtr;
     
   currentPtr =  nodeList.getFirstPtr();
   
   cout << "The node list is: \n";

    cout <<  setfill('-') << setw(93) << "-" <<endl;
   	cout << setfill(' ');
   	cout<<"| " << left << setw(42) << "Winery Name"  << "| "  <<setw(9) << "Vintage" << "| "  <<
		setw(10) << "Rating" << "| " << setw(10) << "Price" << "| " << setw(10) << "Wine Type" << " |" <<endl;
	cout <<  setfill('-') << setw(93) << "-" <<endl;
	cout << setfill(' ');     
	   //print out all the info in linked list
   while ( currentPtr != 0 ) // display elements in list
   {
      wp = (NODETYPE *) currentPtr; //convert to correct data type
      wp->printInfo();
      currentPtr = currentPtr->getNextPtr();
   } // end while
   cout <<  setfill('-') << setw(93) << "-" <<endl;
   cout << setfill(' ');
}   
      
  /*
  Purpose - To simply show the current list of values the current List has stored with its nodes

  @author Ron Sha
  @version 1.0 4/20/2017

  @param wineList - the list containing both data and nodes of a current dataset unification
  @return - none
*/   

void printPersonInfo(List< Wine> & wineList)
{
   Wine *f;
   f = (Wine *) wineList.getInfo(0); //get node based on key
   f->printInfo();
 
 
    ListNode< Wine > *currentPtr;
     
   currentPtr =  wineList.getFirstPtr();
   
   cout << "The Employee list is: \n";
   //print out all the info in linked list
   while ( currentPtr != 0 ) // display elements in list
   {
      f = (Wine *) currentPtr; //convert to correct data type
      f->printInfo();
      currentPtr = currentPtr->getNextPtr();
   } // end while
  
}

/*
  Purpose- Print out the programmer's information such as name, class information,
                                   and date/time when the program is run

  @author Ron Sha
  @version 1.0 1/1/2016

  @param name- the name of the programmer
  @param courseInfo- the name of the course
  @return- none
*/

void printMeFirst(string name, string courseInfo);

/*
 * Program Purpose:  This program will read the database's information from mySQL's wineInfo tablean 
 * and store its values and additional ones in the program with a node structure establishment.
 * 
 * It takes user's input through a series of options and based on the input, 
 * will print out the user information about the file passed into the program
 * 
 * @param - argc - indidicates how many arguements when the programs runs
 * @param - argv - contains program argument.  argv[0] is the program name itself
 * 
 * return 0 - to justify the program works
 * */

int main(int argc, char* argv[])
{
	printMeFirst("Steven Husar", "CS-116 - 2017 Spring"); // you must call this function 1st
   Parse myParse;
   Wine p;
   List< Wine> wineList;	
   myParse.evaluation(argc, argv, wineList, p);
   p.setInfo("Ron Sha's Favorite Wine", "Red", 2012, 22, 20);
   wineList.insertAtFront( p,0 );
   printNoteInfo (wineList);
   // remove last node from Linked List
   // you need to implement removeFromBack method function
   
   wineList.removeFromBack(p);
   wineList.removeFromFront(p);  // remove the first node
   printNoteInfo (wineList);  
   
} // end main





