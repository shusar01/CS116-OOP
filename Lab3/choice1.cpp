/*
  choice1.cpp
  Purpose - To return to the user wines that are between two scores (0 - 100 only)

  @author Steven Husar
  @version 1.0 3/19/2017
*/

#include "menuWine.h"
#include <iomanip>
#include <iostream>
#include <limits>

/*
  Purpose - Operator that prints out a wine list between certain wine scores given by the user.
		    The function will also provide following the list the average price of the wines and the
		    total number of wines within the list.

  @author Steven Husar
  @version 1.0 3/19/2017

  @variable scoreL - This will be the user set lowest score the user would like to see.
  @variable scoreW - This will be the user set highest score the user would like to see.
  @variable priceTotal - This will identify the total wine price values of data set following conditional evaluation of the data.
  @variable count - This will identify the number of data set following conditional evaluation of the data.
  @variable- priceAverage - This will retain the final average from the selected dataset formed by count & priceTotal.

  @param Winest - All of the information from the winelist within the main program
  @return- none
*/
void choice1(vector <Wine *> & Winest)
	{
		int scoreL, scoreW;
		do{
			cin.clear(); // reset failbit
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "What is the lowest score would you like to look between" << endl;
			cin >> scoreL;
			if (scoreL < 0)
			{
				cout << "Please enter a positive number" << endl;
			}
			else if (scoreL > 100)
			{
				cout << "Please enter a number under 100" << endl;
			}
			else if (cin.fail())
			{
				cout << "Please enter a valid number" << endl;
			}				
			else if (scoreL >= 0)
			{
				do{
				cin.clear(); // reset failbit
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				cout << "What is the highest score would you like to look between" << endl;
				cin >> scoreW;
				if (scoreW < 0)
				{
					cout << "Please enter a positive number" << endl;
				}			
				else if (scoreW > 100)
				{
					cout << "Please enter a number under 100" << endl;
				}	
				else if (cin.fail())
				{
					cout << "Please enter a valid number" << endl;
				}
				else if (scoreW < scoreL)
				{
					cout << "Please enter a number greater than " << scoreL << endl;
				}			
				else if (scoreW >= scoreL)
				{
					cout << "Below is/are the Wine locations with scores ranging from " << scoreL
					<< " to " << scoreW << ":\n" <<endl;
					cout << "Winery Name" << ": " << "Color" << " " << "Year" << " " << "Score" << " "
					<< "Price" << "   " << "Winery Name" << ": " << "Street Address" << " " << "City" 
					<< ", " << "State" << " " << "Zip Code" << " \n" <<endl;
					int priceTotal = 0, count = 0;
					double priceAverage = 0;
					for (unsigned int i=0; i < Winest.size(); i++)
					{
						if (Winest[i]->getRating() >= scoreL && Winest[i]->getRating() <= scoreW)
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
			} while (cin.fail() || scoreW < 0 || scoreL > scoreW);
		}
	}while (cin.fail() || scoreL < 0 || scoreW < 0 || scoreL > scoreW);
}
