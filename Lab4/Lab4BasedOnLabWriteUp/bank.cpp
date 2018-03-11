/** 
Purpose: This .cpp file is meant to perform the operations each function
defined in the header files (account.h and bank.h) for the overall program.

@author Steven Husar
@version 1.0 2/16/2017

*/

#include "account.h"
#include "bank.h"

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

Bank :: Bank(Checking checkingAmount, Savings savingsAmount)
	{
		checking = checkingAmount;
		savings = savingsAmount;
	}
	
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

void Bank :: deposit(double amount, string account)
	{
		if(account == "C")
		{
		checking.deposit(amount);
		}
		else  
		{
		savings.deposit(amount);
		}
	}
	
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
 
	void Bank :: withdraw(double amount, string account)
	{
		if(account == "C")
		{
		checking.withdraw(amount);
		}
		else 
		{
		savings.withdraw(amount);
		}
	}

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

	void Bank :: transfer(double amount, string account)
	{
		if(account == "C")
		{
		checking.withdraw(amount);
		savings.deposit(amount);
		}
		else 
		{
		savings.withdraw(amount);
		checking.deposit(amount);
		}
	}

/**
Purpose: This will show to the user the amount currently present within
		  each of the respective accounts currently.

@return none

*/
	void Bank :: printBalances() const
	{
		cout << fixed << setprecision(2);
		cout << "Savings Account balance:  $   " << savings.getBalance() << endl;
		cout << "Checking Account balance: $   " << checking.getBalance() << endl;

	}
