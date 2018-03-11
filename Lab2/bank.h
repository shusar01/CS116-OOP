/**
Purpose: This header file is meant to declare entities that make up an bank account
		 used in a banking enviornment with the assistance of the account header file.
@author Steven Husar
@version 1.0 2/16/2017
*/

#ifndef BANK_H
#define BANK_H
#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include "account.h"

/**
 Purpose: The items here will set up the variables to be utilized for an
		  account type of variable for a banking enviornment.

@author Steven Husar
@version 1.0 2/16/2017
@function Bank (Overloading)- allows for multiple account to be potentially 
								 crafted for this program.
@function deposit - allows a user to add an amount to a respective account type.
@function withdraw - allows a user to subtract an amount from a respective account type.
@function transfer - Due to the class having 2 account types, the user will 
					 be able to take an amount from an account they state
					 over to the other account type.
@function printBalance - Shows to the user directly the amount present in 
						 the respective accounts.

@param Checking Amount - used for the possibility to allow various checking
						 Accounts to be created (intentional for this program).
@param Savings Amount - used for the possibility to allow various savings
						 Accounts to be created (intentional for this program) .
@param amount - This is the users input which is used in performing modifications
				done to the respective account type.
@param account - This is the users input which tells the program which account
				  is to be worked on.

@variable checking - This holds the amount information for this type of account.
@variable savings - This holds the amount information for this type of account.

@return none
*/


/**
Purpose: This class file is meant to hold data for an active checking account thanks to the inherited Account entities.
@author Steven Husar
@version 1.0 4/6/2017
*/

class Checking : public Account;

/**
Purpose: This class is meant to hold data for an active savings account thanks to the inherited Account entities.
@author Steven Husar
@version 1.0 4/6/2017
*/

class Savings : public Account;

/**
Purpose: This class is meant to utilize data following opertaions given from the classes Checking and Savings to perform bank operations on these types of accounts.
@author Steven Husar
@version 1.0 4/6/2017
*/

class Bank
{
public:

	Bank()
	{
	}
	Bank(Account checkingAmount, Account savingsAmount);
	void deposit(double amount, string account);
	void withdraw(double amount, string account);
	void transfer(double amount, string account);
	void printBalances() const;
	
private:
	Checking checking; 
	Savings savings;
};

#endif
