/*
  Lab 3 - Wine
  Purpose - To show students how to take a csv text file, read through
  the file itself, pushback the information into vectors, and perform 
  printing operations through a menu application

  @author Steven Husar
  @version 1.0 3/19/2017

*/
#include "parse.h"

using namespace std;

/*
  Purpose- Print out the programmer's information such as name, class information,
                                   and date/time when the program is run

  @author Ron Sha
  @version 1.0 1/1/2016

  @param name- the name of the programmer
  @param courseInfo- the name of the course
  @return- none
*/

void printMeFirst(std::string name, std::string courseInfo);

/*
 * Program Purpose:  This program will read person's information from an 
 * csv file and then store them into a person vector class.
 * 
 * It takes user's input through a series of options and based on the input, 
 * will print out the user information about the file passed into the program
 * 
 * @param - argc - indidicates how many arguements when the programs runs
 * @param - argv - contains program argument.  argv[0] is the program name itself
 * */

int main(int argc, char* argv[])
{
	printMeFirst("Steven Husar", "CS-116 - 2017 Spring"); // you must call this function 1st
	Parse myParse;
	vector <Wine *> Wines;
	myParse.evaluation(argc, argv, "winelist.txt", Wines);
  return 0;
}
