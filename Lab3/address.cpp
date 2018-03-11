/*
  address.cpp
  Purpose - To set the address information in a specific manner within / for the class Address.

  @author Steven Husar
  @version 1.0 3/19/2017

*/

#include "address.h"

	/*
 	 Purpose- An overload function that will set all the parameters passing into the appropriate private variables
	 @author Steven Husar
 	 @version 1.0 3/19/2017

 	 @param winery_name- The intended wine name set
 	 @param winery_street- The intended wine street address set
 	 @param winery_city- The intended wine city set
 	 @param winery_state - The intended wine state set
 	 @param winery_zip- The intended wine zip set
 	 @return- none
	*/
Address :: Address(string winery_name, string winery_street, string winery_city, string winery_state, int winery_zip)
{
	wineryName = winery_name;
	street = winery_street;
	city = winery_city;
	state = winery_state;
	zipCode = winery_zip;	
}

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
void Address :: setInfo(string winery_name, string winery_street, string winery_city, string winery_state,  int winery_zip)
{
	wineryName = winery_name;
	street = winery_street;
	city = winery_city;
	state = winery_state;
	zipCode = winery_zip;
}    

	/*
 	 Purpose- This will specifically set a specific wine name
	 @author Steven Husar
 	 @version 1.0 3/19/2017

 	 @param winery_name- The intended wine name set
 	 @return- none
	*/   
void Address :: setWineryName (string winery_name)
{
	wineryName = winery_name;
}

	/*
 	 Purpose- This will specifically set a specific wine city name
	 @author Steven Husar
 	 @version 1.0 3/19/2017

 	 @param c- The intended wine name set
 	 @return- none
	*/ 
void Address :: setCity (string c) // set city to c
{
	city = c;
}

	/*
 	 Purpose- This will specifically return a city name
	 @author Steven Husar
 	 @version 1.0 3/19/2017

 	 @return- a city name
	*/ 
string Address :: getCity() // return the value of city
{
	return city;
}

	/*
 	 Purpose- This will specifically return a winery name
	 @author Steven Husar
 	 @version 1.0 3/19/2017

 	 @return- a winery name
	*/ 
string Address :: getWinery()
{
	return wineryName;
}

	/*
 	 Purpose- This will specifically return a winery street
	 @author Steven Husar
 	 @version 1.0 3/19/2017

 	 @return- a winery street name
	*/ 
string Address :: getStreet()
{
	return street;
}

	/*
 	 Purpose- This will specifically return a winery state acronym
	 @author Steven Husar
 	 @version 1.0 3/19/2017

 	 @return- a winery state acronym
	*/ 
string Address :: getState()
{
	return state;
}

	/*
 	 Purpose- This will specifically return a winery zip
	 @author Steven Husar
 	 @version 1.0 3/19/2017

 	 @return- a winery zip code
	*/ 
int Address :: getZip()
{
	return zipCode;
}
	

