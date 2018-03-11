/**
Purpose: This header file is meant to perform opertaions to parse a header text file into specific place holders.
@author Steven Husar
@version 1.0 3/19/2017
*/
#ifndef PARSE_H
#define PARSE_H

#include <iostream>
#include <sstream>
#include <vector>
#include <string> 
#include <fstream>
#include <algorithm>  // used for vector sort
#include <iomanip>  // output format setw
#include "address.h"
#include "wine.h"
#include "menuWine.h"

using namespace std;

/**
 Purpose: Meant to properly convert the current file passed in to store the values in a structured vector

@author Steven Husar
@version 1.0 3/19/2017

@variable str1 - placeholder value to help split variables
@variable str - placeholder value to help split variables
@variable wname - a winery name
@variable wtype - a wine type (Red/White)
@variable wineryName - a winery name
@variable wineryAddress - the winery address
@variable wineryCity - the winery city
@variable wineryState - the winery state (acronym)
@variable vitage - the year the wine was made
@variable rating - the score the wine has attained
@variable price - the price the wine is listed at
@variable wineryZip - the zip code of the winery
@variable fileName - the name of the file
@return none
*/

class Parse
{
	public: 
	/*
 	Purpose- Meant to initiate a default constructor

  	@author Steven Husar
 	@version 1.0 3/19/2017

 	@return- none
	*/
	Parse()
	{
		
	}

	/*
 	Purpose- Meant to rid of leading and trailing spaces

  	@author Ron Sha
 	@version 1.0 2/28/2017?
	
	@param sentence - input string contains spaces
 	@return - return a new string where leading and trailing spaces have been removed
	*/
	string trim_words(const string & sentence);

	/*
 	Purpose- Meant to pass arguments from the user in order to set up a wine vector

  	@author Steven Husar
 	@version 1.0 3/19/2017
	
	@param argcc - indidicates how many arguements when the programs runs
	@param argvv - contains program argument.  argv[0] is the program name itself
	@param filenamee - the text file that will be intentionally parsed
  	@param Winest - where all the information of the text file will be stored
 	@return - none
	*/
	void evaluation (int argcc, char * argvv[], string filenamee, vector <Wine*> &Wines);
	
	private:
	string str1, str;
	string wname, wtype, wineryName, wineryAddress, wineryCity, wineryState;
	int vitage, rating, price, wineryZip;
	string fileName;
	
};

#endif

