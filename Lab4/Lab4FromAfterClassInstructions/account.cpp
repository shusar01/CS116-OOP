/**
Purpose: This .cpp file is meant to perform the operations each function
defined in the header file (account.h) for the overall program.

@author Steven Husar
@version 1.0 2/16/2017

*/

#include "account.h"

/**
 @variable penalty - As explained by the professor, the penalty variable
					 will operate as a fault against the account owner
					 specifically in the event of attempting to take out
					 more then the balance in the account.
					 It's placed here for this to be shifted more accessably.
 */

const double penalty = 5.0;

/**
 Purpose: Overloading in order to utilize multiple account when needed
 
 @author Steven Husar
 @version 1.0 2/16/2017
 
 @param bal - used to allow various accounts to be able
			  to be set to balance (intentional for this program)
 @variable balance -  This holds a value in which the user has in a respective account.
 @return none
 */
	
	Account :: Account (double bal)
	{
		balance = bal;
	}
	
/**
 Purpose: This allows the user to increase the balance based on the 
		  amount given by the user. If the user tries to deposit any amount
		  less than zero, a message will return that it needs to run the
		  function with a positive amount. The program will not run until this
		  occurs.
 
 @author Steven Husar
 @version 1.0 2/16/2017
 
 @param amount - This is the users input which is used in performing 
				 modifications done to the balance. 
 @param balance - This holds a value in which the user has in a respective account.
 @return none
 */	

	void Account :: deposit(double amount)
	{
		if(amount<0)
		{
			cout << "This program cannot deposit money less than zero dollars." 
			<< "Call this function again if you can deposit money more than zero dollars"<<endl;
		}
		else
		{
		balance = balance + amount;
		}
	} 

/**
 Purpose: For the user to attain a withdraw amount based on the amount 
		  given by the user. This function will perform two checks before its
		  intentional use. First if the user tries to withdraw any amount
		  less than zero, a message will return that it needs to run the
		  function with a positive amount. The program will not run until this
		  occurs. The second check catches when a user attempts to 
		  attain more out of the account than is present by asking for a 
		  higher amount than is present in the balance of the account.
		  If this occurs, the program refuses to operate and simply charges
		  the account the penalty, as defined above.
 
 @author Steven Husar
 @version 1.0 2/16/2017
 
 @param amount - This is the users input which is used in performing 
				 modifications done to the balance. 
 @variable balance - This holds a value in which the user has in a respective account.
 @variable penalty - As explained by the professor, the penalty variable
					 will operate as a fault against the account owner
					 specifically in the event of attempting to take out
					 more then the balance in the account.
					 It's placed here for this to be shifted more accessably.
 @return none
 */		
	
	void  Account :: withdraw(double amount)
	{
		if (amount < 0)
		{
			cout << "This program cannot withdraw money less than zero dollars." 
			<< "Call this function again if you would like to withdraw money more than zero dollars"<<endl;
		}
		else
		{
			
		if(amount > balance)
		{
			cout << "Only " << balance << " is available. But trying to withdraw " << amount << ". Deduct 5 from account." << endl;
			balance = balance - penalty;
		}
		else
		{
			balance = balance - amount;	
		}
		
	}
	}
	
/**
Purpose: This will show to the user the amount currently present within
		 the account, or in other words, show the balance.

 @author Steven Husar
 @version 1.0 2/16/2017

@return balance - This holds a value in which the user has in a respective account.

*/
	double Account :: getBalance() const 
	{
	return balance;
	}



