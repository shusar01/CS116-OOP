/**
Purpose: This header file is meant to declare entities that make up an account
		 used in a banking enviornment.
@author Steven Husar
@version 1.0 4/6/2017
*/

#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>

using namespace std;

/**
 Purpose: The items here will set up the variables to be utilized for an
		  account type of variable for an account banking enviornment.

@author Steven Husar
@version 1.0 4/6/2017
*/

class Account 
{
public:

/*
  Purpose- To make sure the balance starting off in these accounts is a $0 balance.

  @author Steven Husar
  @version 1.0 4/6/2017

  @return- none
*/

	Account()
	{
		balance = 0.0;
	}
/*
  Purpose- This Overload operation will give the class an option to give a balance amount at the start of the program.

  @author Steven Husar
  @version 1.0 4/6/2017

  @param bal - The intended balance that the user would like to set the balance as
  @return- none
*/
	Account(double bal);

/*
  Purpose- This operation will allow the user to place money into an active account

  @author Steven Husar
  @version 1.0 4/6/2017

  @param amount - The intended amount that the user would like to place into an account
  @return- none
*/
	void deposit(double amount);

/*
  Purpose- This operation will allow the user to take out money from an active account.
  	   The program will check to see if there is enough money available in the active account
           before taking out any money from the active account. 

  @author Steven Husar
  @version 1.0 4/6/2017

  @param amount - The intended amount that the user would like to take out an account
  @return- none
*/
	void withdraw(double amount);

/**
Purpose: This will show to the user the amount currently present within
		 the account, or in other words, show the balance.

 @author Steven Husar
 @version 1.0 4/6/2017

@return balance - This holds a value in which the user has in a respective account.

*/
	double getBalance() const;
private:
	double balance;
};

#endif
