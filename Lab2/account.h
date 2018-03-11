/**
Purpose: This header file is meant to declare entities that make up an account
		 used in a banking enviornment.
@author Steven Husar
@version 1.0 2/16/2017
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
@version 1.0 2/16/2017
@function Account (Overloading)- allows for multiple account to be potentially 
								 crafted for this program
@function deposit - allows user to increase the balance based on the amount given by the user.
@function withdraw - evaluates the amount to find if the account has a balance high enough
					 to withdraw an amount. If the balance is lower than the amount requested,
					 the transaction is denied and charges the account a penalty. Otherwise 
					 the amount is removed from the balance, thus withdrawing the amount.
@function getBalance - reflects to the user the balance the account has currently.

@param bal - used as an example to allow various accounts to be able
			 to be set to balance (intentional for this program) 
@param amount - This is the users input which is used in performing modifications
				done to the balance.

@variable balance - This holds a value in which the user has in a respective account.

@return none
*/

class Account 
{
public:
	Account()
	{
		balance = 0.0;
	}
	Account(double bal);
	void deposit(double amount);
	void withdraw(double amount);
	double getBalance() const;
private:
	double balance;
};

#endif
