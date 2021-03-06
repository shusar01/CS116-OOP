/*
  choice4.cpp
  Purpose - To return to the user all the wines in a descending order by score

  @author Steven Husar
  @version 1.0 3/19/2017
*/

#include "menuWine.h"

/*
  Purpose- Operator that allows the function to utilize this ascending sort function 
		   created in the menuWine file for usage in the choice2 function below.
		   This will return true if the wine a is less than wine b in its rating.
  @author Steven Husar
  @version 1.0 3/19/2017

  @param a- object on the left side of the previous object b
  @param b- object on the right side of the previous object a 
  @return- true if the left hand side object rating is less than the right hand side object rating
*/
bool compareARating (const Wine * a, const Wine * b);

/*
  Purpose- Operator that prints out a wine list sorted by score

  @author Steven Husar
  @version 1.0 3/19/2017

  @param Winest - All of the information from the winelist within the main program
  @return- none
*/

void choice4(vector <Wine *> & Winest)
{
	sort(Winest.begin(), Winest.end(), compareARating);
	cout << "Below are the Wine locations with the ratings sorted in descending order:\n"<<endl;
	cout << "Winery Name" << ": " << "Color" << " " << "Year" << " " << "Score" << " "
		 << "Price" << "   " << "Winery Name" << ": " << "Street Address" << " " << "City" 
		 << ", " << "State" << " " << "Zip Code" << " \n" <<endl;
	for (unsigned int i=0; i < Winest.size(); i++)
	{
		Winest[i]->printInfo();
	}	
}
