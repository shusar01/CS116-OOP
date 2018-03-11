

/*
  wine.h
  Purpose - To set the wine information in a specific manner for the class Wine.

  @author Steven Husar
  @version 1.0 5/11/2017

*/ 

#ifndef WINE_H
#define WINE_H

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <typeinfo>
#include <iomanip>  // output format setw
#include <vector>
#include "dbconnect.h"
#include "LinkedList.hpp"

using namespace std;
       
 class Wine
{
	public:
	
	/*
  Purpose- default constructor present to establishing good programming edicate.
  @author Steven Husar
  @version 1.0 3/19/2017

  @return- none
*/
	
	Wine()
	{   
	}
	
	/*
  Purpose- Will set all the parameters passing into the appropriate private variables
  @author Steven Husar
  @version 1.0 3/19/2017

  @param wine_name- The intended wine name set
  @param wine_type- The intended wine type set
  @param wine_year- The intended wine year set
  @param wine_rating - The intended wine price set
  @return- none
*/
	
	Wine(string wine_name,string wine_type, int wine_year, int wine_rating, double wine_price);
	
		/*
 	 Purpose- like the overload function, this will set all the parameters passing into the appropriate private variables
 	 @author Steven Husar
 	 @version 1.5 5/11/2017

	 @param wine_name- The intended wine name set
 	 @param wine_type- The intended wine type set
  	 @param wine_year- The intended wine year set
  	 @param wine_rating - The intended wine price set
 	 @return- none
	*/
	
	void setInfo(string wine_name,string wine_type, int wine_year, int wine_rating, double wine_price);
	
	/**
	Purpose: Once the program is completed, this will eliminate the address information upon completion of this program.
	@author Steven Husar
	@version 1.0 3/19/2017
	
	return - none
	*/
	~Wine() 
	{ 	 
	}   
	
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
 	 Purpose- Like the printInfo function, this will print all the information in the wine List.
	 @author Steven Husar
 	 @version 1.5 5/11/2017

 	 @return- none
	*/  
 
	void printInfo();
	
	/*
 	 Purpose- Like the printInfo function, this will print all the information in the wine vector and address information
	 @author Steven Husar
 	 @version 1.0 3/19/2017

 	 @return- none
	*/   
	friend void printMoreInfo(Wine p) { cout << p.wineName << " " << p.wineRating << " " << p.winePrice << " " << p.wineYear << " " << p.wineType;}
	
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
};

#endif
