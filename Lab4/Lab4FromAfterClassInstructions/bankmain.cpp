/**
Purpose: Lab 4 is meant to help us understand how to utilize base and inheritance relationships.
* The program itself executes account operations called out by the professor in this bankmain file
* from other programs found connected to this file using classes that inherit operations found in account
* 
* Also I created a forward declaration of the professor's printMeFirst function that will be implemented with this program
* thanks to the Makefile as well as a transfer function used to establish transfer operations between two account.
* This can only be set up here because transfers can only happen with static data operated within the program.
* 
* This version of the program was modified in order to accommodate the separate classes that inherit the Account Base class

@author Steven Husar
@version 1.0 4/6/2017

*/

#include "account.h"
#include "checking.h"
#include "savings.h"
void transfer(checking &c, savings &s, double amount, string type);
void printMeFirst(std::string name, std::string courseInfo);

/**
Purpose: This will implement the entire program by presenting a menu of options, divide the user input to an appropriate function.
Operations within this file were formulated by Professor Sha.

@author Steven Husar
@version 1.0 2/16/2017

@return - 0 (This is meant to return to the operating system the program was a success)
  
**/


/* include all headers files */
int main()
{
	printMeFirst("Steven Husar", "CS-116 - 2017 Spring"); // you must call this function 1st
	checking c;
	savings s;
	cout << "\nInital bank balances: \n";
	cout << fixed << setprecision(2);
	cout << "Savings Account Balance: $  " << s.getBalance() <<endl;
	cout << "Checking Account Balance: $  " << c.getBalance() <<endl; 
	cout << "\nAdding some money to accounts: \n";
	cout << "\nAdding $1000 to saving \n";
	cout << "Adding $2000 to checking \n";
	s.deposit(1000);
	c.deposit(2000);
	cout << "Savings Account Balance: $  " << s.getBalance() <<endl;
	cout << "Checking Account Balance: $  " << c.getBalance() <<endl;
	cout << "\nTaking out $1500 from checking,and moving $200 from";
	cout << " savings to checking.\n";
	c.withdraw(1500);
	transfer(c, s, 200, "S");
	cout << "Savings Account Balance: $  " << s.getBalance() <<endl;
	cout << "Checking Account Balance: $  " << c.getBalance() <<endl;
	cout << "\ntrying to withdraw $900 from Savings.\n";
	s.withdraw(900);
	cout << "Savings Account Balance: $  " << s.getBalance() <<endl;
	cout << "Checking Account Balance: $  " << c.getBalance() <<endl;
	cout << "\ntrying to withdraw $400 from Checking.\n";
	c.withdraw(400);
	cout << "Savings Account Balance: $  " << s.getBalance() <<endl;
	cout << "Checking Account Balance: $  " << c.getBalance() <<endl;
	return 0;
}

