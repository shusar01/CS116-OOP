/*
  wine.cpp
  Purpose - To set the address information in a specific manner within / for the class Wine.

  @author Steven Husar
  @version 1.0 3/19/2017

*/

#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>  // used for vector sort
#include <iomanip>  // output format setw
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
  @param *ptaddress- The intended addresses set to this wine
  @return- none
*/

Wine :: Wine(string wine_name, string wine_type, int wine_year, int wine_rating, double wine_price, Address *ptaddress)
{
		wineName = wine_name;
		wineType = wine_type;
		wineYear = wine_year;
		wineRating = wine_rating;
		winePrice = wine_price;
		paddress = ptaddress;
}
	
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
void Wine :: setInfo(string wine_name,string wine_type, int wine_year, int wine_rating, double wine_price, Address *ptaddress)
{
		wineName = wine_name;
		wineType = wine_type;
		wineYear = wine_year;
		wineRating = wine_rating;
		winePrice = wine_price;
		ptaddress = new Address();
}

	/**
	Purpose: To have an function that allows an address to be set from the private pointer value
	@author Steven Husar
	@version 1.0 3/19/2017
	
	@param a - the intended address information
	return - none
	*/
void Wine :: setAddress(Address a) // copy a to the value of pointer paddress  
{
		*paddress = a;
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
 	 Purpose- Like the printInfo function, this will print all the information in the wine vector and address information
	 @author Steven Husar
 	 @version 1.0 3/19/2017

 	 @return- none
	*/   
void Wine :: printInfo ()
{
	string wineryName, street, city, state;
	int zipCode;
	if (paddress != NULL)
	{
		wineryName=paddress->getWinery();
		street = paddress->getStreet();
		city = paddress->getCity();
		state = paddress->getState();
		zipCode = paddress->getZip();
	}	
	else
	{
		wineryName = "None";
		street = "None";
		city = "None";
		state = "None";
		zipCode = 0;
	}
	cout << wineryName << ": " << wineType << " " << wineYear << " " << wineRating 
	<< " "<< winePrice << "  " << wineryName << ": " << street << " "
	<< city << ", " << state << " " << zipCode <<endl;
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

	/*
 	 Purpose- Like the printInfo function, this will print all the information in the wine vector and address information
	 @author Steven Husar
 	 @version 1.0 3/19/2017

 	 @return- none
	*/   
void printMoreInfo(Wine p)
{
cout << p.wineName << " " << p.wineType << " " << p.wineRating << " " << p.winePrice << " " << p.wineYear
<< " " << p.paddress->getWinery() << " " << p.paddress->getCity();
};
