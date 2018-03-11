/**
Purpose: This header file is meant to declare entities that execute the program in a specific order
@author Steven Husar
@version 1.0 3/19/2017
*/
#ifndef WINEMENU_H
#define WINEMENU_H
#pragma once
#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>  // used for vector sort
#include <iomanip>  // output format setw
#include <limits>
#include "address.h"
#include "wine.h"
using namespace std;	

/*
  Purpose - Operator that prints out a wine list between certain wine scores given by the user.
		    The function will also provide following the list the average price of the wines and the
		    total number of wines within the list.

  @author Steven Husar
  @version 1.0 3/19/2017

  @variable scoreL - This will be the user set lowest score the user would like to see.
  @variable scoreW - This will be the user set highest score the user would like to see.
  @variable priceTotal - This will identify the total wine price values of data set following conditional evaluation of the data.
  @variable count - This will identify the number of data set following conditional evaluation of the data.
  @variable- priceAverage - This will retain the final average from the selected dataset formed by count & priceTotal.

  @param Winest - All of the information from the winelist within the main program
  @return- none
*/
void choice1(vector <Wine *> & Winest);

/*
  Purpose- Operator that prints out a wine list between certain wine prices given by the user.
		   The function will also provide following the list the average price of the wines and the
		   total number of wines within the list.

  @author Steven Husar
  @version 1.0 3/19/2017

  @variable priceL - This will be the user set lowest price the user would like to see.
  @variable priceW - This will be the user set highest price the user would like to see.
  @variable priceTotal - This will identify the total wine price values of data set following conditional evaluation of the data.
  @variable count - This will identify the number of data set following conditional evaluation of the data.
  @variable- priceAverage - This will retain the final average from the selected dataset formed by count & priceTotal.

  @param Winest - All of the information from the winelist within the main program
  @return- none
*/
void choice2(vector <Wine *> & Winest);

/*
  Purpose- Operator that prints out a wine list sorted by price

  @author Steven Husar
  @version 1.0 3/19/2017

  @param Winest - All of the information from the winelist within the main program
  @return- none
*/
void choice3(vector <Wine *> & Winest);

/*
  Purpose- Operator that prints out a wine list sorted by score

  @author Steven Husar
  @version 1.0 3/19/2017

  @param Winest - All of the information from the winelist within the main program
  @return- none
*/
void choice4(vector <Wine *> & Winest);

/*
  Purpose- Operator that prints out a Red wine list and sorts by price
		   The function will also provide following the list the highest, lowest, 
		   and average price of the wines within the list.

  @author Steven Husar
  @version 1.0 3/19/2017

  @variable currentPrice - This will help identify the current price in the loop that the loop is on.
  @variable lowestWinePrice - This will hold the lowest priced wine within the list.
  @variable highestWinePrice - This will hold the highest priced wine within the list.
  @variable priceTotal - This will identify the total wine price values of data set following conditional evaluation of the data.
  @variable count - This will identify the number of data set following conditional evaluation of the data.
  @variable- priceAverage - This will retain the final average from the selected dataset formed by count & priceTotal.

  @param Winest - All of the information from the winelist within the main program
  @return- none
*/
void choice5(vector <Wine *> & Winest);

/*
  Purpose- Operator that prints out a White wine list and sorts by year.
		   The function will also provide following the list the highest, lowest, 
		   and average price of the wines within the list.

  @author Steven Husar
  @version 1.0 3/19/2017

  @variable currentPrice - This will help identify the current price in the loop that the loop is on.
  @variable lowestWinePrice - This will hold the lowest priced wine within the list.
  @variable highestWinePrice - This will hold the highest priced wine within the list.
  @variable priceTotal - This will identify the total wine price values of data set following conditional evaluation of the data.
  @variable count - This will identify the number of data set following conditional evaluation of the data.
  @variable- priceAverage - This will retain the final average from the selected dataset formed by count & priceTotal.

  @param Winest - All of the information from the winelist within the main program
  @return- none
*/
void choice6(vector <Wine *> & Winest);

/**
 Purpose: The items here operate the program in a specifc order

@author Steven Husar
@version 1.0 3/19/2017

@variable userFeedback1 - This will hold the menu choice the user will make
@return none
*/

class menuWine
{
	public:
	/*
 	Purpose- Meant to initiate a default constructor

  	@author Steven Husar
 	@version 1.0 3/19/2017

 	@return- none
	*/
	menuWine();

	/*
	Purpose- Operator to execute specific operations for the program

 	@author Steven Husar
	@version 1.0 3/19/2017

	@param Winest - All of the information from the winelist within the main program
	@return- none
	*/
	menuWine(vector <Wine *> & Winest);

	private:
	int userFeedback1;
};

#endif
