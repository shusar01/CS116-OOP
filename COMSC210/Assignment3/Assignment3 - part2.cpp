// Lab Assignment 3 Part 2
// Programmer: Steven Husar
// Programmer's ID: 1702539

#include <iostream>
#include <string>
using namespace std;

#include <cstdlib>
//#include <cassert>

class Array {
	int values [100];
	int dummy;
	
  public:
    Array();
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
  
  Array user;
  int a, b, c;
  string buf;
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
    user[a] = b;
    }
  
  cout << "You stored this many values: " << user.capacity() << endl;
  cout << "The index-value pairs are: " << endl;
  for (int j = 0; j < user.capacity(); j++) {
    cout << j << " => " << user[j] << endl;
  }
  while (true) {
    
    cout << "\nInput an index for me to look up [Q to quit]: ";
    cin >> buf;
    if (buf == "Q" || buf == "q") {
      break;
    }
    c = atoi(buf.c_str( ));
    if (c < 0 || c > 100) {
      cout << "I didn't find it\n";
    }
    cout << "Found it -- the value stored at " << c << " is " << user[c];
  }
  return 0;
}

Array::Array () {
  for (int index = 0; index < 100; index++) {
    values[index] = 0;
  }
}

int Array::operator [ ] (int index) const {
  if (index < 0 || index >= 100) {
    return 0;
  }
  return values[index]; //the copied value present
}

int& Array::operator [ ] (int index) {
  if (index < 0 || index >= 100) {
    return dummy;
  }
  return values [index];
}

int Array::capacity() const {
  return 100;
}
