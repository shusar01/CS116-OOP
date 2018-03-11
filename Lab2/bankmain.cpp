/**
Purpose: Lab 2 is meant to help us understand how to work with multiple files outside of a standard .cpp file
* by connecting header files with other .cpp files and uniting the files using a Makefile,
* crafted by the professor.
* The program itself executes a Bank account operation called out by the professor in this bankmain file
* from other programs found connected to this file.
* 
* Also I created a forward declaration of the professor's printMeFirst function that will be implemented with this program
* thanks to the Makefile.

@author Steven Husar
@version 1.0 2/16/2017

*/

#include "account.h"
#include "bank.h"
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
	Bank myBank;
	cout << "\nInital bank balances: \n";
	myBank.printBalances(); /* set up empty accounts */
	cout << "\nAdding some money to accounts: \n";
	cout << "\nAdding $1000 to saving \n";
	cout << "Adding $2000 to checking \n";
	myBank.deposit(1000, "S"); /* deposit $1000 to savings */
	myBank.deposit(2000, "C"); /* deposit $2000 to checking */
	myBank.printBalances();
	cout << "\nTaking out $1500 from checking,and moving $200 from";
	cout << " savings to checking.\n";
	myBank.withdraw(1500, "C"); /* withdraw $1500 from checking */
	myBank.transfer(200, "S"); /* transfer $200 from savings */
	myBank.printBalances();
	cout << "\ntrying to withdraw $900 from Savings.\n";
	myBank.withdraw(900,"S");
	myBank.printBalances();
	cout << "\ntrying to withdraw $400 from Checking.\n";
	myBank.withdraw(400,"C");
	myBank.printBalances();return 0;
}

