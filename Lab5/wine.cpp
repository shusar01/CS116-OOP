/*
  wine.cpp
  Purpose - To set the wine information in a specific manner for the class Wine.

  @author Steven Husar
  @version 1.0 5/11/2017

*/ 

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <typeinfo>
#include <iomanip>  // output format setw
#include <vector>
#include "dbconnect.h"
#include "LinkedList.hpp"
#include "wine.h"

using namespace std;



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

Wine :: Wine(string wine_name, string wine_type, int wine_year, int wine_rating, double wine_price)
{
		wineName = wine_name;
		wineType = wine_type;
		wineYear = wine_year;
		wineRating = wine_rating;
		winePrice = wine_price;
}

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
	
void Wine :: setInfo(string wine_name,string wine_type, int wine_year, int wine_rating, double wine_price)
{
		wineName = wine_name;
		wineType = wine_type;
		wineYear = wine_year;
		wineRating = wine_rating;
		winePrice = wine_price;
}
  
  	/*
 	 Purpose- This will specifically return a wine rating
	 @author Steven Husar
 	 @version 1.0 3/19/2017

 	 @return- a wine rating
	*/   
  
int Wine :: getRating() const
{
	return wineRating;
}
   
   	/*
 	 Purpose- This will specifically return a wine price
	 @author Steven Husar
 	 @version 1.0 3/19/2017

 	 @return- a wine price
	*/   
   
int Wine :: getPrice() const
{
	return winePrice;
}

	/*
 	 Purpose- This will specifically return a winery name
	 @author Steven Husar
 	 @version 1.0 3/19/2017

 	 @return- a wine name
	*/   
   
string Wine :: getWineName() const
{
	return wineName;
}
  
  	/*
 	 Purpose- This will specifically return a wine type (color)
	 @author Steven Husar
 	 @version 1.0 3/19/2017

 	 @return- a wine type (color)
	*/  
  
string Wine :: getWineType() const
{
	return wineType;
}
  
  	/*
 	 Purpose- This will specifically return a wine year
	 @author Steven Husar
 	 @version 1.0 3/19/2017

 	 @return- a wine year
	*/  
  
int Wine :: getYear() const
{
	return wineYear;
}
	/*
 	 Purpose- Like the printInfo function, this will print all the information in the wine List.
	 @author Steven Husar
 	 @version 1.5 5/11/2017

 	 @return- none
	*/  
 
void Wine :: printInfo ()
{

cout << "| " << left << setw(42) << wineName << "| "  <<setw(9) << wineYear << "| "  <<
				setw(10) << wineRating << "| " << setw(10) << winePrice << "| " << setw(10) << wineType << " |" <<endl;
}
	/*
 	 Purpose- Operator overlading for < (less than) sign to compare year between two Person objects
  	 @author Steven Husar
  	 @version 1.0 3/19/2017

 	 @param p2- object on the right hand of <
 	 @return- true if the left hand side object year is less than the right hand side object year
	*/

bool Wine::operator< (const Wine& p2) const
{ 
	return this->wineYear < p2.wineYear;
}

