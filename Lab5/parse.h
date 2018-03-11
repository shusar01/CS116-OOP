

/*
 * Parse.h Purpose:  This program will establish all the values in which will be utilized 
 * 					 for the program after here pulling the data from mySQL and dividing its values.
 * 
 * 		@author Steven Husar
 * 		@version 1.5 5/11/2017
 * */
 
#ifndef PARSE_H
#define PARSE_H
 
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <typeinfo>
#include <iomanip>  // output format setw
#include <vector>
#include "dbconnect.h"
//#include "menuWine.h"
#include "LinkedList.h"
#include "wine.h"

using namespace std;
 

class Parse
{
	public: 
	/*
  Purpose - to establish the initial data (default)

  @author Steven Husar
  @version 1.0 5/11/2017

*/
	Parse()
	{	}
	 /*
  Purpose - To attain the SQL data from mySQL alongside dividing this data into its represented items
			the program intends to utilize the variables towards

  @author Steven
  @version 1.5 5/11/2017

  @param argcc - indidicates how many arguements when the programs runs
  @param argvv - contains program argument.  argv[0] is the program name itself
  @param Wines - a currest structure of wine data within the program currently
  @param b - a value establishment that works specficly with methods within the Wine class
  @return - none
*/   
	void evaluation (int argcc, char * argvv[], List <Wine> & Wines, Wine b);
	
	private:
	string wname, wtype;
	int vitage, rating, price;
	
};

#endif
