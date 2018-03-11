// Lab Assignment 4 Part 2
// Programmer: Steven Husar
// Programmer's ID: 1702539

#include <iostream>
#include <string>
using namespace std;

#include <cstdlib> //atof
#include "MyStaticArray.h"

int main () {
  // programmer's identification
  cout << "Programmer: Steven Husar\n";
  cout << "Programmer's ID: 1702539\n";
  cout << "File: " << __FILE__ << endl;
  
  // main item definitions
  // Note: "user" is the index definition, and "indexSpot" defines what is stored in the actual index spot
  MyStaticArray <float, 100> indexSpot;
  MyStaticArray <bool, 100> spotTaken;
  int d, e;
  float a = 0.0f;
  float b = 0.0f;
  float c = 0.0f;
  int storedValues = 0;
  string buf;
  
    // initial input validations
  while (true) {
    cout << "Input an index and a value [Q to quit]:";
    cin >> buf;
    if (buf == "Q" || buf == "q") {
      break;
    }
    a = atof(buf.c_str( ));
    cin >> buf;
    if (buf == "Q" || buf == "q") {
      break;
    }
    b = atof(buf.c_str( ));
    d = (a - int(a))* 10;
    if (a >= 0 && a < 100 && d==0) {	
      indexSpot[a] = b;
      spotTaken[a] = true;
      storedValues += 1;
    }
  }
   // confirmation of stored values
  cout << "You stored this many values: " << storedValues << endl;
  cout << "The index-value pairs are: " << endl;
  for (int j = 0; j < 100; j++) {
    if (spotTaken[j] != false){
      cout << j << " => " << indexSpot[j] << endl;
    }
  }

  // Checks for specific values stored
  while (true) {
    
    cout << "\nInput an index for me to look up [Q to quit]: ";
    cin >> buf;
    if (buf == "Q" || buf == "q") {
      break;
    }
    c = atof(buf.c_str( ));
    e = (c - int(c))* 10;
    if (c >= 0 && c < 100 && e==0){
      if (spotTaken[c] != false) {
        cout << "Found it -- the value stored at " << c << " is " << indexSpot[c];
      }
      else {
        cout << "I didn't find it";
      }
    }
    else {
      cout << "I didn't find it";
    }
  }
}
