// Lab Assignment 5 Part 2
// Programmer: Steven Husar
// Programmer's ID: 1702539

#include <iostream>
#include <string>
using namespace std;

#include <algorithm>
#include <cstdlib> //atof
#include "MyDynamicArray.h"

int main () {
  // programmer's identification
  cout << "Programmer: Steven Husar\n";
  cout << "Programmer's ID: 1702539\n";
  cout << "File: " << __FILE__ << endl;
  
  // main item definitions
  // Note: "user" is the index definition, and "indexSpot" defines what is stored in the actual index spot
  MyDynamicArray<float> Array1;
  MyDynamicArray<bool> IndexTracker;
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
    if (a >= 0 && d==0) {	
      Array1[a] = b;
      IndexTracker[a] = true;
      storedValues += 1;
    }
  }
   // confirmation of stored values
  cout << "You stored this many values: " << storedValues << endl;
  cout << "The index-value pairs are: " << endl;
  for (int j = 0; j < Array1.capacity(); j++) {
    if (IndexTracker[j] != false){
      cout << j << " => " << Array1[j] << endl;
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
    if (c >= 0 && c < Array1.capacity() && e==0){
      if (IndexTracker[c] != false) {
        cout << "Found it -- the value stored at " << c << " is " << Array1[c];
      }
      else {
        cout << "I didn't find it";
      }
    }
    else {
      cout << "I didn't find it";
    }
  }
  
  
  return 0;
}
