/*
menuWine.cpp
*/
#include <iostream>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <typeinfo>
#include <string>
#include <iomanip>  // output format setw
#include <vector>
#include "dbconnect.h"
#include "LinkedList.hpp"
#include "parse.h"
#include "wine.h"
using namespace std;

string menuWine ()
{
	int userFeedback1,scoreL, scoreW;
	string SQLScript;
	do
	{
	cout << "Hello and welcome to the 2014 Wine database describer\n"
	<< "Please select what you would like to review from the database with your input:\n"
	<< "1. Display all the wine that has a wine score \n"
	<< "2. Display all the wine that has a price\n"
	<< "3. Display all the wines vintage between years\n"
	<< "4. Exit\n";

		if (userFeedback1==1)
		{
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
    cout <<  setfill('-') << setw(93) << "-" <<endl;
   	cout << setfill(' ');
   	cout<<"| " << left << setw(42) << "Winery Name"  << "| "  <<setw(9) << "Vintage" << "| "  <<
		setw(10) << "Rating" << "| " << setw(10) << "Price" << "| " << setw(10) << "Wine Type" << " |" <<endl;
		   		cout <<  setfill('-') << setw(93) << "-" <<endl;
		   		   	cout << setfill(' ');
		   		   	ostringstream os;
		   		   	os << "Select * from wineInfo where rating > " << scoreL << "and rating < " << scoreW << "Order By Score and Price;";
		   		   	return os;
				}
			} while (cin.fail() || scoreW < 0 || scoreL > scoreW);
		}
	}while (cin.fail() || scoreL < 0 || scoreW < 0 || scoreL > scoreW);

		}

		else if (userFeedback1==2)
		{
			selection2(Winest);
		}
		else if (userFeedback1==3)
		{
			selection3(Winest);
		}
		else if (userFeedback1==4)
		{
			break;
		}
		else
		{
			cout << "Select a menu option between 1-4" <<endl;
		}
	} while (userFeedback1 != 4);
 }
