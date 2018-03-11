/**
Purpose: This header file is meant to declare entities that structure address information.
@author Steven Husar
@version 1.0 3/19/2017
*/
#ifndef ADDRESS_H
#define ADDRESS_H

#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>  // used for vector sort
#include <iomanip>  // output format setw

using namespace std;

/**
 Purpose: The items here will help structure variables toward certain aspects of an address.

@author Steven Husar
@version 1.0 3/19/2017

@variable wineryname - This holds a string containing the name of a Winery.
@variable street - This holds a string containing the name of a street.
@variable city - This holds a string containing the name of a city.
@variable state - This holds a string containing the acronym of a state.
@variable zipCode - This holds the integer of a zip code.
@return none
*/

class Address

{
	public:
	/**
	Purpose: This function is meant to set default information about an address
	@author Steven Husar
	@version 1.0 3/19/2017
	
	return - none
	*/
	Address()
	{
		city = "";
	}

	/*
 	 Purpose- This overload function will set all the parameters passing into the appropriate private variables
	 @author Steven Husar
 	 @version 1.0 3/19/2017

 	 @param winery_name- The intended wine name set
 	 @param winery_street- The intended wine street address set
 	 @param winery_city- The intended wine city set
 	 @param winery_state - The intended wine state set
 	 @param winery_zip- The intended wine zip set
 	 @return- none
	*/

	Address(string winery_name, string winery_street, string winery_city, string winery_state, int winery_zip);

	/*
 	 Purpose- Like the overload function, this will set all the parameters passing into the appropriate private variables
	 @author Steven Husar
 	 @version 1.0 3/19/2017

 	 @param winery_name- The intended wine name set
 	 @param winery_street- The intended wine street address set
 	 @param winery_city- The intended wine city set
 	 @param winery_state - The intended wine state set
 	 @param winery_zip- The intended wine zip set
 	 @return- none
	*/
	void setInfo(string winery_name, string winery_street, string winery_city, string winery_state,  int winery_zip) ;
  
	/*
 	 Purpose- This will specifically set a specific wine name
	 @author Steven Husar
 	 @version 1.0 3/19/2017

 	 @param winery_name- The intended wine name set
 	 @return- none
	*/   
	void setWineryName (string winery_name);

	/*
 	 Purpose- This will specifically set a specific wine city name
	 @author Steven Husar
 	 @version 1.0 3/19/2017

 	 @param c- The intended wine name set
 	 @return- none
	*/ 
	void setCity (string c); 

	/*
 	 Purpose- This will specifically return a city name
	 @author Steven Husar
 	 @version 1.0 3/19/2017

 	 @return- a city name
	*/ 
	string getCity(); 

	/*
 	 Purpose- This will specifically return a winery name
	 @author Steven Husar
 	 @version 1.0 3/19/2017

 	 @return- a winery name
	*/ 
	string getWinery();

	/*
 	 Purpose- This will specifically return a winery street
	 @author Steven Husar
 	 @version 1.0 3/19/2017

 	 @return- a winery street name
	*/ 
	string getStreet();

	/*
 	 Purpose- This will specifically return a winery state acronym
	 @author Steven Husar
 	 @version 1.0 3/19/2017

 	 @return- a winery state acronym
	*/ 
	string getState();

	/*
 	 Purpose- This will specifically return a winery zip
	 @author Steven Husar
 	 @version 1.0 3/19/2017

 	 @return- a winery zip code
	*/ 
	int getZip();
	
	private:
	string wineryName, street, city, state;
	int zipCode;
};

#endif
