/*
 * Parse.cpp Purpose:  This program will establish all the values in which will be utilized 
 * 					 for the program after here pulling the data from mySQL and dividing its values.
 * 
 * 		@author Steven Husar
 * 		@version 1.5 5/11/2017
 * */
 
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <typeinfo>
#include <iomanip>  // output format setw
#include <vector>
#include "dbconnect.h"
#include "LinkedList.hpp"
#include "parse.h"
#include "wine.h"
//#include "menuWine.h"

using namespace std;
 

  /*
  Purpose - To attain the SQL data from mySQL alongside dividing this data into its represented items
			the program intends to utilize the variables towards

  @author Steven
  @version 1.5 5/11/2017

  @param argcc - indidicates how many arguements when the programs runs
  @param argvv - contains program argument.  argv[0] is the program name itself
  @param Wines - a currest structure of wine data within the program currently
  @param b - a value establishment that works specficly with methods within the Wine class
  @return - none
*/   

void Parse :: evaluation (int argcc, char * argvv[], List <Wine> & Wines, Wine b)
{	
  MYSQL *conn;		// the connection
  MYSQL_RES *res;	// the results
  MYSQL_ROW row;	// the results row (line by line)
 
  struct connection_details mysqlD;
  mysqlD.server = (char *)"localhost";  // where the mysql database is
  mysqlD.user = (char *)"root";		// the root user of mysql	
  mysqlD.password = (char *)"password"; // the password of the root user in mysql
  mysqlD.database = (char *)"mysql";	// the databse to pick
 
  // connect to the mysql database
  conn = mysql_connection_setup(mysqlD);
  // use filename if provided in the parameter list
    if (argcc < 2)
	{
		cout << "argv[0]: " << argvv[0] << endl;
		printf("\nUsage: %s  \"Select * from wineInfo;\"\n", argvv[0]);
		printf("if no argument given, default is:\n %s show tables\n", argvv[0]);
		res = mysql_perform_query(conn, (char *)"show tables");
		printf("MySQL Tables in mysql database:\n");
	}
	else 
	{
		
	 res = mysql_perform_query(conn, (char *)"use wine");
     cout << "argv[0]: " << argvv[0] << endl;
     cout << "argv[1]: " << argvv[1] << endl;
     res = mysql_perform_query(conn, argvv[1]);

    cout <<  setfill('-') << setw(93) << "-" <<endl;
   	cout << setfill(' ');
   	cout<<"| " << left << setw(42) << "Winery Name"  << "| "  <<setw(9) << "Vintage" << "| "  <<
		setw(10) << "Rating" << "| " << setw(10) << "Price" << "| " << setw(10) << "Wine Type" << " |" <<endl;
		   		cout <<  setfill('-') << setw(93) << "-" <<endl;
		   		   	cout << setfill(' ');
  }

  while ((row = mysql_fetch_row(res)) !=NULL)
  {

      if (argcc < 2) {
         printf("%s\n", row[0]);  // only print out 1st column
      }
      else
      {
				int counter = 0;
				wname = row[0]; //wineryName
				vitage = stoi(row[1]); //Vintage
				rating = stoi(row[2]); // rating
				price = stoi(row[3]); // price
				wtype = row[4]; //wineType
				b.setInfo(wname, wtype, vitage, rating, price);
				b.printInfo();
				Wines.insertAtFront(b,counter);
				counter++;
      }   
    }
    cout <<  setfill('-') << setw(93) << "-" <<endl;
    cout << setfill(' ');

 mysql_free_result(res);

  /* clean up the database link */
  mysql_close(conn);
}
