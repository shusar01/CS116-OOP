/*
  menuWine.cpp
  Purpose - To operate the program in a specific manner by retriving the specific 
  information the user would like to view / review.

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
#include "address.h"
#include "wine.h"
#include "menuWine.h"

using namespace std;
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
bool compareARating (const Wine * a, const Wine * b) { return a->getRating() > b->getRating(); }

/*
  Purpose- Operator that allows the function to utilize this ascending sort function 
		   created in the menuWine file for usage in the choice2 function below.
		   This will return true if the wine a is less than wine b in its price.
  @author Steven Husar
  @version 1.0 3/19/2017

  @param a- object on the left side of the previous object b
  @param b- object on the right side of the previous object a 
  @return- true if the left hand side object price is less than the right hand side object price
*/
bool compareAPrice (const Wine * a, const Wine * b) { return a->getPrice() > b->getPrice(); }

/*
  Purpose- Operator that allows the function to utilize this ascending sort function 
		   created in the menuWine file for usage in the choice2 function below.
		   This will return true if the wine a is less than wine b in its year.
  @author Steven Husar
  @version 1.0 3/19/2017

  @param a- object on the left side of the previous object b
  @param b- object on the right side of the previous object a 
  @return- true if the left hand side object year is less than the right hand side object year
*/

bool compareAYear (const Wine * a, const Wine * b) { return a->getYear() > b->getYear(); }

/*
  Purpose- Operator to execute specific operations for the program

  @author Steven Husar
  @version 1.0 3/19/2017

  @param Winest - All of the information from the winelist within the main program
  @return- none
*/

menuWine :: menuWine(vector <Wine *> & Winest)
{
	do
	{
		cout << "\nChoose one of the following options to calculate for you:\n" 
		<<"1. Display all wines between certain scores\n2. Display all wines between certain prices\n"
		<< "3. Display all wines sorted by price\n4. Display all wines sorted by scores\n"
		<< "5. Display all Red Wines sorted by price\n6. Display all White Wines sorted by year\n7. Exit the program"<<endl;
		cin >> userFeedback1;

		if (userFeedback1==1)
		{
			choice1(Winest);
		}

		else if (userFeedback1==2)
		{
			choice2(Winest);
		}
		else if (userFeedback1==3)
		{
			choice3(Winest);
		}
		else if (userFeedback1==4)
		{
			choice4(Winest);
		}
		else if (userFeedback1==5)
		{
			choice5(Winest);
		}
		else if (userFeedback1==6)
		{
			choice6(Winest);
		}
		else if(userFeedback1==7)
		{
			break;
		}
		else
		{
			cout << "Try again next time" <<endl;
		}
	} while (userFeedback1 != 7);
} 
