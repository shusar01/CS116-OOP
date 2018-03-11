/*
  choice2.cpp
  Purpose - To return to the user wines that are between two price ($0+ only)

  @author Steven Husar
  @version 1.0 3/19/2017
*/

#include "menuWine.h"
#include <iomanip>
#include <iostream>
#include <limits>

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

void choice2(vector <Wine *> & Winest)
{
	int priceL, priceW;
	do
	{
		cin.clear(); // reset failbit
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cout << "What is the lowest price would you like to look between" << endl;
		cin >> priceL;
		if (priceL < 0)
		{
			cout << "Please enter a positive number" << endl;
		}
		else if (cin.fail())
		{
			cout << "Please enter a vaild number" << endl;
		}				
		else if (priceL >= 0)
		{
		do
		{
			cin.clear(); // reset failbit
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "What is the highest price would you like to look between" << endl;
			cin >> priceW;
			if (priceW < 0)
			{
				cout << "Please enter a positive number" << endl;
			}			
			else if (cin.fail())
			{
				cout << "Please enter a vaild number" << endl;
			}
			else if (priceW < priceL)			
			{
				cout << "Please enter a number greater than " << priceL << endl;
			}			
			else if (priceW >= priceL)
			{
				cout << "Below is/are the Wine locations with prices ranging from " << priceL
				<< " to " << priceW << ":\n" <<endl;
				cout << "Winery Name" << ": " << "Color" << " " << "Year" << " " << "Score" << " "
				<< "Price" << "   " << "Winery Name" << ": " << "Street Address" << " " << "City" 
				<< ", " << "State" << " " << "Zip Code" << " \n" <<endl;
				int priceTotal = 0, count = 0;
				double priceAverage = 0;
				for (unsigned int i=0; i < Winest.size(); i++)
				{
					if (Winest[i]->getPrice() >= priceL && Winest[i]->getPrice() <= priceW)
					{
						Winest[i]->printInfo();
						priceTotal = Winest[i]->getPrice() + priceTotal;
						count++;
					}
				}
				priceAverage = (double)priceTotal / count;
				cout << "\nThe total number of Wine is: " << count <<endl;
				cout << fixed << setprecision(2);
				cout << "The average price is: $" << priceAverage << "\n" << endl;	
			}
			} while (cin.fail() || priceW < 0 || priceL > priceW);
		}
	}while (cin.fail() || priceL < 0 || priceW < 0 || priceL > priceW);
}
