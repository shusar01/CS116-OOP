// Lab Assignment 3 Part 2
// Programmer: Steven Husar
// Programmer's ID: 1702539

#include <iostream>
#include <string>
using namespace std;

#include <cstdlib>

// Array class that establishes the entire Array operations
class Array {
	int values [100];
	int dummy;
	
  public:
    Array(); // constructor
    int operator [ ] (int) const; //getter
    int& operator [ ] (int); //setter
    int capacity () const; // getter
};

int main ()
{
  // programmer's identification
  cout << "Programmer: Steven Husar\n";
  cout << "Programmer's ID: 1702539\n";
  cout << "File: " << __FILE__ << endl;
  
  // main item definitions
  // Note: "user" is the index definition, and "indexSpot" defines what is stored in the actual index spot
  Array user, indexSpot;
  int a, b, c;
  int storedValues = 0;
  string buf;
  
  // initial input validations
  while (true) {
    cout << "Input an index and a value [Q to quit]:";
	  cin >> buf;
		if (buf == "Q" || buf == "q") {
      break;
    }
    a = atoi(buf.c_str( ));
    cin >> buf;
		if (buf == "Q" || buf == "q") {
      break;
    }
    
    b = atoi(buf.c_str( ));
    if (a >= 0 && a < 100) {	
			user[a] = a;
			indexSpot[a] = b;
			storedValues += 1;
		}
    }
  
  // confirmation of stored values
  cout << "You stored this many values: " << storedValues << endl;
  cout << "The index-value pairs are: " << endl;
  for (int j = 0; j < 100; j++) {
    if (indexSpot[j] != 0){
      cout << user[j] << " => " << indexSpot[j] << endl;
    }
  }
  
  // Checks for specific values stored
  while (true) {
    
    cout << "\nInput an index for me to look up [Q to quit]: ";
    cin >> buf;
    if (buf == "Q" || buf == "q") {
      break;
    }
    c = atoi(buf.c_str( ));
    if (c >= 0 && c < 100){
			if (indexSpot[c] != 0) {
				cout << "Found it -- the value stored at " << user[c] << " is " << indexSpot[c];
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

// Proper dynamic structure to the Array class
Array::Array () {
  for (int index = 0; index < 100; index++) {
    values[index] = 0;
  }
}

// Getter operator of the values index
int Array::operator [ ] (int index) const {
  if (index < 0 || index >= 100) {
    return 0;
  }
  return values[index]; //the copied value present
}

// Setter operator of the values index
int& Array::operator [ ] (int index) {
  if (index < 0 || index >= 100) {
    return dummy;
  }
  return values [index];
}

// Capacity limit established for the Array class
int Array::capacity() const {
  return 100;
}
