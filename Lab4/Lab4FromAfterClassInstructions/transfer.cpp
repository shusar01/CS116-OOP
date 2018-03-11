#include "checking.h"
#include "savings.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>

using namespace std;

/*
  Purpose- To conduct transfer of money operations between a checking and savings account, which 
		   is dependent on the string type, which should indicate the accout the money will be taken from

  @author Steven Husar
  @version 1.0 4/6/2017

  @param &c - the active checking account
  @param &s- the active savings account
  @param amount - the amount that is intentionally being sent from the type account to the other account
  @param type - the account type that the amount will be taken out of
  @return- none
*/

void transfer(checking &c, savings &s, double amount, string type)
{
		if(type == "C")
		{
		c.withdraw(amount);
		s.deposit(amount);
		}
		else 
		{
		s.withdraw(amount);
		c.deposit(amount);
		}
}
