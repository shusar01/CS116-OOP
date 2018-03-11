/**
Purpose: This header file is meant to declare entities that structure winery information.
@author Steven Husar
@version 1.0 3/19/2017
*/

#ifndef WINE_H
#define WINE_H

#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>  // used for vector sort
#include <iomanip>  // output format setw
#include "address.h"

using namespace std;

/**
 Purpose: The items here will help structure variables toward certain aspects of an address.

@author Steven Husar
@version 1.0 3/19/2017

@variable wineName - This holds a string containing the name of a Winery.
@variable wineType - This holds a string containing the name of a color of wine.
@variable wineYear - This holds an integer of the wine year.
@variable wineRating - This holds an of the wine rating
@variable paddress - This points to the respective address information.
@return none
*/

class Wine
{
	public:
	/**
	Purpose: This function is meant to set default information about the wine information
	@author Steven Husar
	@version 1.0 3/19/2017
	
	return - none
	*/
	Wine()
	{  
		paddress=new Address(); 
	}

	/*
 	 Purpose- This overload function will set all the parameters passing into the appropriate private variables
 	 @author Steven Husar
 	 @version 1.0 3/19/2017

	 @param wine_name- The intended wine name set
 	 @param wine_type- The intended wine type set
  	 @param wine_year- The intended wine year set
  	 @param wine_rating - The intended wine price set
 	 @param *ptaddress- The intended addresses set to this wine
 	 @return- none
	*/

	Wine(string wine_name,string wine_type, int wine_year, int wine_rating, double wine_price, Address *ptaddress);

	/*
 	 Purpose- like the overload function, this will set all the parameters passing into the appropriate private variables
 	 @author Steven Husar
 	 @version 1.0 3/19/2017

	 @param wine_name- The intended wine name set
 	 @param wine_type- The intended wine type set
  	 @param wine_year- The intended wine year set
  	 @param wine_rating - The intended wine price set
 	 @param *ptaddress- The intended addresses set to this wine
 	 @return- none
	*/
	void setInfo(string wine_name,string wine_type, int wine_year, int wine_rating, double wine_price, Address *ptaddress);

	/**
	Purpose: Once the program is completed, this will eliminate the address information upon completion of this program.
	@author Steven Husar
	@version 1.0 3/19/2017
	
	return - none
	*/	
	~Wine() 
	{ 
		if (paddress != NULL)
		{
			delete paddress; paddress = NULL;
		}  
	}

	/**
	Purpose: To have an function that allows an address to be set from the private pointer value
	@author Steven Husar
	@version 1.0 3/19/2017
	
	@param a - the intended address information
	return - none
	*/	
	void setAddress(Address a) ; 

	/*
 	 Purpose- This will specifically return a wine rating
	 @author Steven Husar
 	 @version 1.0 3/19/2017

 	 @return- a wine rating
	*/   
	int getRating() const; 

	/*
 	 Purpose- This will specifically return a wine price
	 @author Steven Husar
 	 @version 1.0 3/19/2017

 	 @return- a wine price
	*/   
	int getPrice() const;

	/*
 	 Purpose- This will specifically return a winery name
	 @author Steven Husar
 	 @version 1.0 3/19/2017

 	 @return- a wine name
	*/   
	string getWineName() const;

	/*
 	 Purpose- This will specifically return a wine type (color)
	 @author Steven Husar
 	 @version 1.0 3/19/2017

 	 @return- a wine type (color)
	*/   
   	string getWineType() const;

	/*
 	 Purpose- This will specifically return a wine year
	 @author Steven Husar
 	 @version 1.0 3/19/2017

 	 @return- a wine year
	*/   
	int getYear() const; // return the value of year

	/*
 	 Purpose- This will specifically print all the information available in the vector of both wine and a reached out address vector
	 @author Steven Husar
 	 @version 1.0 3/19/2017

 	 @return- none
	*/   
	void printInfo();

	/*
 	 Purpose- Like the printInfo function, this will print all the information in the wine vector and address information
	 @author Steven Husar
 	 @version 1.0 3/19/2017

 	 @return- none
	*/   
	friend void printMoreInfo(Wine p);

	/*
 	 Purpose- Operator overlading for < (less than) sign to compare year between two Person objects
  	 @author Steven Husar
  	 @version 1.0 3/19/2017

 	 @param p2- object on the right hand of <
 	 @return- true if the left hand side object year is less than the right hand side object year
	*/
	bool operator< (const Wine& p2) const;

	private:
	string wineName, wineType;
	int wineYear, wineRating;
	double winePrice;
	Address *paddress; 
};

#endif
