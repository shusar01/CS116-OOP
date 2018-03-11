// Lab Assignment 2 Part 1
// Programmer: Steven Husar
// Programmer's ID: 1702539

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// including items in C Library
#include <cstdilb>

int main ()
{
  // programmer's identification
  cout << "Programmer: Steven Husar\n";
  cout << "Programmer's ID: 1702539\n";
  cout << "File: " << __FILE__ << endl;
  
  // initializing variables
  ofstream fout;
  fout.open("data.xls");
  string input, lastName, major;
  float unit;
  
  // defining the cout and input statements for the file and from the user respectively
  // Note: As opposed to using the GetLine entity for collecting more than one text field,
  //       I felt when retriving data, one enters it more often then places a space in inputing data.
  fout << "Last Name\tMajor\tUnits\n"; 
  for (int i = 0; i < 3; i++) {
    cout << "Please enter individually your Last Name, Major, and how many units you have completed in college.\n";
    cin >> lastName;  
    cin >> major;  
    cin >> input;  
    unit = atof(input.c_str( )); 
    fout << lastName << "\t" << major << "\t" << unit << "\n";   
  }
  fout.close( );
}
