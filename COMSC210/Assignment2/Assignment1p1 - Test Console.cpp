// Lab Assignment 2 Part 1
// Programmer: Steven Husar
// Programmer's ID: 1702539

#include <iostream>
#include <string>
using namespace std;

int main ()
{
  // programmer's identification
  cout << "Programmer: Steven Husar\n";
  cout << "Programmer's ID: 1702539\n";
  cout << "File: " << __FILE__ << endl;
  
  // initializing variables
  string item;
  int userAnswer = 0;

  // user program: simple math problem
  cout << "Please enter the digit representing the sum of three plus six: \n";
  cin >> item;  
  userAnswer = atof(item.c_str( ));
  
  // answer verifications
  if ( userAnswer == 9 ) {
	  cout << "Correct\n";
  }
  else {
	  cout << "Incorrect\n";
	  // an optional check to see atof returns 0 when a word is placed in here
	  // cout << userAnswer << " was the user Answer ";
  }

}
