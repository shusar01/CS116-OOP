/*
  Parse.cpp
  Purpose - To extract the data from the text file (in csv format) and pushing back values
  to a vector, which will then operate on a menu created within the evaluation function.

  @author Steven Husar
  @version 1.0 3/19/2017

*/

#include "address.h"
#include "wine.h"
#include "menuWine.h"
#include "parse.h"

const char SPLIT_CHAR = ';';

using namespace std;

	/*
 	Purpose- Meant to rid of leading and trailing spaces

  	@author Ron Sha
 	@version 1.0 2/28/2017?
	
	@param sentence - input string contains spaces
 	@return - return a new string where leading and trailing spaces have been removed
	*/
string Parse :: trim_words(const string & sentence) {
  stringstream ss;
  string s;
  string out;
    
  ss << sentence;
  while (ss >> s) 
  {
    out += (s + ' ');
  }
  return out.substr(0, out.length() - 1);
}

	/*
 	Purpose- Meant to pass arguments from the user in order to set up a wine vector

  	@author Steven Husar
 	@version 1.0 3/19/2017
	
	@param argcc - indidicates how many arguements when the programs runs
	@param argvv - contains program argument.  argv[0] is the program name itself
	@param filenamee - the text file that will be intentionally parsed
  	@param Winest - where all the information of the text file will be stored
 	@return - none
	*/
void Parse :: evaluation (int argcc, char* argvv[], string filenamee, vector <Wine *> &Wines)
{	
  // use filename if provided in the parameter list
    if (argcc < 2)
	{
		cout <<"Usage: " << argvv[0] << " input_file\n";
		//cout <<"Using default file president_csv.txt instead\n"; //commented out due to no need in program
		fileName =filenamee;
	}
	else 
		fileName = argvv[1];     
		                
	ifstream myfile (filenamee.c_str()); // open the file

  if (myfile.is_open()) {
    while (myfile) {
      if (!getline(myfile, str))
        break; //end of file

      istringstream split(str);
      //  for (string each; getline(split, each, split_char); tokens.push_back(each));
      // OR USE THE WHILE LOOP BELOW
      vector <string> tokens;
      while (split) // parse the line
      {
        string s;
        if (!getline(split, s, SPLIT_CHAR))
          break; // end of line
        else 
        {
          str1 = trim_words(s);
          tokens.push_back(str1);
        }
      }
      // now use `tokens`

      for (unsigned int i = 0; i < tokens.size(); i++)
      {
		switch (i)
		{
			case 0: // field #1 from the line
				wname = tokens[0];
				break;
			case 1: // field #2 from the line
				wtype = tokens[1];
				break;			
			case 2: 
				vitage = stoi(tokens[2]);
				break;	
			case 3: 
				rating = stoi(tokens[3]); // convert field #4  
				break;					 // string month to int	month		
			case 4: 
				price = stoi(tokens[4]);
				break;				
			case 5: 
				wineryName = tokens[5];
				break;				
			case 6: 
				 wineryAddress = tokens[6];
				break;		
			case 7: 
				wineryCity = tokens[7];
				break;				
			case 8: 
				wineryState = tokens[8];
				break;				
			case 9: 
				wineryZip = stoi(tokens[i]);
				break;					
		}
      }

      Address * a;
      a = new Address(wineryName, wineryAddress, wineryCity, wineryState, wineryZip);      
      Wine * b;
      b = new Wine(wname, wtype, vitage, rating, price, a) ;
      Wines.push_back(b); //define all the terms of the values of the text files into the respective format
    }
    myfile.close();
  } 
  else 
    cout << "Unable to open file";
    menuWine mWine(Wines); //executes how to command the user towards certain aspects of the program.

}

