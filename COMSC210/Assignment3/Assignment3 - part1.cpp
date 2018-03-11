// Lab Assignment 3 Part 1
// Programmer: Steven Husar
// Programmer's ID: 1702539

#include <iostream>
#include <string>
using namespace std;

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

