/**
Purpose: Lab 1 is a re-introduction to working with CS 102 concepts through the language C++.
The program itself operates as a conversion implamentor, from converting seconds to hours, minutes and seconds,
to converting Celcius to Fahrenheit and vice versa. 

@author Steven Husar
@version 1.0 2/9/2017
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include <limits>
using namespace std;

/**
Purpose: Print out the programmer's information such as name, class information and date/time when the program is run

@author Ron Sha
@version 1.0 1/27/2017

@param name - the name of the programmer
@param courseInfo - the name of the course
@return - none

*/
void printMeFirst(string name, string courseInfo)
{
	cout << "Program written by: "<< name << endl;
	cout << "Course info: " << courseInfo <<endl; 
	time_t now= time(0);	
	char* dt=ctime(&now);
	cout << "Date: " << dt << endl;
}

/**
Purpose: This checks and returns the user to make another menu selection if the integer is not an integer

@author Steven Husar
@version 1.0 2/9/2017

@variable input - this variable attains information from the user. This variable will allow the user to 
				  have another oppurtunity to make a correct input in the main program without a failure to operate.
@return - input value when no cin.fail() occurs

*/
int intInput()
{
	int input;
	do {
			cin >> input;
			if (cin.fail())
			{
				cin.clear(); // reset failbit
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
			} while (cin.fail());
			return input;
}

/**
Purpose: This function will print to the user the amount of hours, minutes, and seconds given their input of an integer amount of seconds

@author Steven Husar
@version 1.0 2/9/2017

@variable second - meant to retain a value the user wants to convert from seconds to hours, minutes, and seconds.
@variable seconds - acts as a secondary variable to store a remainder amount of seconds that could not be summed into a minute
@variable minutes - first stores the total amount of seconds that amount to a minute. Then afterwards stores the remainder amount of minutes that could not be summed into an hour
@variable hours - stores the total amount of minutes that amount to an hour.
@return - none  (statement results printed within function).

*/
void secondsConversion ()
{
			int second;
			do{
			cin.clear(); // reset failbit
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout <<"Input seconds (positive integer):" <<endl;
			cin >> second;
			if (cin.fail() || second < 0)
			{
				cout << "Please enter a positive number" << endl;
			}
			else if (second >= 0)
			{
				int minutes = second / 60;
				int seconds = second % 60;
				int hours = minutes / 60;
				minutes = minutes % 60;
				cout << second << " seconds is : " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds. \n" <<endl;	
			}
			}while (cin.fail() || second < 0);
}

/**
Purpose: This returns to a user a Celcius value given their input of an integer amount in Fahrenheit

@author Steven Husar
@version 1.0 2/9/2017

@variable fahrenheit - meant to retain the value that the user wants to see converted from Fahrenheit to Celcius.
@variable celsius - meant to retain the value amounting to the Celcius degree number from the user's Fahrenheit value.
@return - none (statement results printed within function)

*/

void FtoC ()
{
			do{
			cin.clear(); // reset failbit
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			int fahrenheit;
			cout << "Enter a Fahrenheit value: " ;
			cin >> fahrenheit;
			if (cin.fail())
			{
				cout << "Please enter a vaild integer"<< endl; 
			}
			else
			{
			double celsius = (((fahrenheit - 32.0) * 5.0) / 9.0);
			cout << fahrenheit << " F is equal to "; 
			cout << fixed << setprecision(1);
			cout << celsius << " C\n"<< endl;	
			}		
			} while (cin.fail());
}

/**
Purpose: This prints to the user a Fahrenheit value given their input of an integer amount in Celcius

@author Steven Husar
@version 1.0 2/9/2017

@variable celsius - meant to retain the value that the user wants to see converted from Celsius to Fahrenheit.
@variable fahrenheit - meant to retain the value amounting to the Fahrenheit degree number from the user's Celsius value.
@return - none (statement results printed within function)

*/

void CtoF ()
{
			do{
			cin.clear(); // reset failbit
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			int celcius;
			cout << "Enter a Celcius value: " ;
			cin >> celcius;
			if (cin.fail())
			{
				cout << "Please enter a vaild integer"<< endl; 
			}
			else
			{
			double fahrenheit = (((celcius * 9.0) / 5.0) + 32.0);
			cout << celcius << " C is equal to "; 
			cout << fixed << setprecision(1);
			cout << fahrenheit << " F\n"<< endl;	
			}		
			} while (cin.fail());	
}

/**
Purpose: This will implement the entire program by presenting a menu of options, divide the user input to an appropriate function, and continue until the user enters "4" in the main menu. 

@author Steven Husar
@version 1.0 2/9/2017

@variable choice - This will store the user's first option for which conversions they would like to see happen.
@return - 0 (This is meant to return to the operating system the program was a success)
  
**/

int main()
{
	/*
		You must include the printMeFirst() function as 1st line of your program.
		You need to pass your name, your class into the function so it will print them out.
		Always call this function in all of your lab program for this class.
	*/
	printMeFirst("Steven Husar", "Lab1: CS116-02");
	int choice;
	do
	{

		cout<<"Choose a selection below:" << endl;
		cout<<"	1 - Second(s) to hours, minutes and seconds"<<endl;
		cout<<"	2 - Fahrenheit to Celsius"<< endl;
		cout<<"	3 - Celsius to Fahrenheit" << endl;
		cout<<"	4 - Quit"<<endl;
		choice = intInput();
		/*
		Call different function based on user input
		Use if or switch statement
		*/
		if (choice == 1)
		{
		secondsConversion ();
		}
		else if (choice == 2)
		{
		FtoC ();
		}
		
		else if (choice == 3)
		{
		CtoF();
		}
		else if (choice!=4)
		{
			cout << "Please enter a vaild selection" << endl;
		}
		}while (choice != 4);
		return 0;
}







