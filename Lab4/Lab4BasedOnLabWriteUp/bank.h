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
Purpose: This class file is meant to hold data for an active checking account thanks to the inherited Account entities.
@author Steven Husar
@version 1.0 4/6/2017
*/

class Checking : public Account {};

/**
Purpose: This class is meant to hold data for an active savings account thanks to the inherited Account entities.
@author Steven Husar
@version 1.0 4/6/2017
*/

class Savings : public Account {};

/**
Purpose: This class is meant to utilize data following opertaions given from the classes Checking and Savings to perform bank operations on these types of accounts.
@author Steven Husar
@version 1.0 4/6/2017
*/

class Bank
{
public:

/**
 Purpose: The Default Constructor is placed here out of good practice. Nothing is intened to be set here
 
 @author Steven Husar
 @version 1.0 4/6/2017
 
 @return none
 */

	Bank()
	{
	}

/**
 Purpose: Overloading in order to formulate mulitple Checking and 
		  or Savings accounts as needed.
 
 @author Steven Husar
 @version 1.0 2/16/2017
 
 @param checkingAmount - used to allow various accounts to be able
						 to be set a Checking Account balance 
						 (intentional for this program) 
 @param SavingsAccount - used to allow various accounts to be able
						 to be set a Savings Account balance 
						 (intentional for this program) 
 @variable checking - This hold a value present in this account type
 @variable savings - This hold a value present in this account type
 @return none
 */
	Bank(Checking checkingAmount, Savings savingsAmount);

/**
 Purpose: This allows the user to increase the balance in a respective account 
		  based on the amount given by the user.
 
 @author Steven Husar
 @version 1.0 2/16/2017
 
 @param amount - This is the users input which is used in performing 
				 modifications done to the respective account's balance. 
 @param account - Tells the program which type of account is to be worked on
				  to perform the respective operation. 
 @calling checking.deposit() - Calls to the account function to perform
							   deposit account duties for the checking account.
 @calling checking.deposit() - Calls to the account function to perform
							   deposit account duties for the savings account.
 @return none
 */	
	void deposit(double amount, string account);

/**
 Purpose: This allows the user to decrease the balance in a respective account 
		  based on the amount given by the user.
 
 @author Steven Husar
 @version 1.0 2/16/2017
 
 @param amount - This is the users input which is used in performing 
				 modifications done to the respective account's balance. 
 @param account - Tells the program which type of account is to be worked on
				  to perform the respective operation. 
 @calling checking.withdraw() - Calls to the account function to perform
							   withdraw account duties for the checking account.
 @calling checking.withdraw() - Calls to the account function to perform
							   withdraw account duties for the savings account.
 @return none
 */	
	void withdraw(double amount, string account);

/**
 Purpose: This allows the user to shift the balance amounts between the 
 the two account types based on the input the user would like to first work with.
 
 @author Steven Husar
 @version 1.0 2/16/2017
 
 @param amount - This is the users input which is used in performing 
				 modifications done to the respective account's balance. 
 @param account - Tells the program which type of account is to be worked on
				  to perform the respective operation. 
 @calling checking.withdraw() - Calls to the account function to perform
							   withdraw account duties for the checking account.
 @calling checking.withdraw() - Calls to the account function to perform
							   withdraw account duties for the savings account.
 @calling checking.deposit() - Calls to the account function to perform
							   withdraw account duties for the checking account.
 @calling checking.deposit() - Calls to the account function to perform
							   withdraw account duties for the savings account.
 @return none
 */		

	void transfer(double amount, string account);
/**
Purpose: This will show to the user the amount currently present within
		  each of the respective accounts currently.

@return none

*/

	void printBalances() const;
	
private:
	Checking checking; 
	Savings savings;
};

#endif
