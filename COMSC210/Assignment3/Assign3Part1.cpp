// Lab Assignment 3 Part 1
// Programmer: Steven Husar
// Programmer's ID: 1702539

#include <iostream>
using namespace std;

#include <cassert>


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

int main () {
	
	// programmer's identification
  cout << "Programmer: Steven Husar\n";
  cout << "Programmer's ID: 1702539\n";
  cout << "File: " << __FILE__ << endl;
  
	Array testArray;
	// First test. Testing total failure of the program. Comment out before moving to the next test.
	// Result: It failed as the core dumped right then and there.
	// cout << "Testing total failure of the program" << endl;
	// assert (false);
	
	// Second test. Testing Array::Array 
	// Result: as the defined capacity will account for the length of the intended array,
	//         the success message should show once this assert is evaluated.
	cout << "\nTesting constructor Array::Array\n";
	for (int i = 0; i < testArray.capacity(); i++) {
		assert(testArray[i] == 0);
	}
	cout << "The second test for all values present in the array are initialized to the value 0" <<endl; 
	
	// Third Test. Testing the Setter function
	// Result: this will verify values are being stored into the array
	//         and should result in a dummy if the expected outcome isn't in range
	cout << "\n Testing the Array::operator[] setter\n";
	testArray[34] = 623;
	testArray[-101] = 35;	
	cout << "Expected: 623 for testArray[34]\n";
	cout << "Actual: " << testArray[34] << endl;
	assert(623 == testArray[34]);
	
	cout << "Expected: 0 for testArray[97] (unset index value after given its initial 0 value earlier)\n";
	cout << "Actual: " << testArray[97] << endl;
	assert(0 == testArray[97]);
	
	cout << "Expected: 35 for testArray[-101]\n";
	cout << "Actual: " << testArray[-101] << endl;
	assert(35 == testArray[-101]);
	
	cout << "Expected: 35 for testArray[384] (unset index value to test carrying dummy field)\n";
	cout << "Actual: " << testArray[384] << endl;
	assert(35 == testArray[384]);
	
	
	// Fourth Test. Testing the Getter function
	// Result: as values are placed into the array from the third test, this test should
	//         retrieve those values and reference them successfully by its last success message.
	cout << "\nTesting Getter function for Array" << endl;
	const Array testArray2 = testArray;
	for (int i = 0; i < 100; i++) {
		assert (testArray[i] == testArray2[i]);
	}
	cout << "Expected: 623 for testArray2[34]\n";
	cout << "Actual: " << testArray2[34] << endl;
	assert(623 == testArray2[34]);
	
	cout << "Expected: 0 for testArray2[97] (unset index value after given its initial 0 value earlier)\n";
	cout << "Actual: " << testArray2[97] << endl;
	assert(0 == testArray2[97]);
	
	cout << "Expected: 0 for testArray2[-101] (due to the array's scope focused on elements 0 - 99 only when copied from testArray)\n";
	cout << "Actual: " << testArray2[-101] << endl;
	assert(0 == testArray2[-101]);
	
	cout << "Expected: 0 for testArray2[384] (due to the array's scope focused on elements 0 - 99 only when copied from testArray)\n";
	cout << "Actual: " << testArray2[384] << endl;
	assert(0 == testArray2[384]);

	
	// Fifth test. Testing Capacity
	// Result: as the defined capacity, the last cout should return to the user
	cout << "\nTesting capacity\n";
	cout << "Excpecting: 100\n";	
	cout << "Actual: " << testArray.capacity() << endl;
	assert(100 == testArray.capacity());

	// Sixth test. const object test
	cout <<"\nConst object test\n";
	const Array testArray3; // when this complies, Array::Array 's main constructor exists
	assert (testArray3.capacity()); // when this complies, this confirms Array::capacity is a getter
	assert (testArray3[0] == testArray3[0]); // when this complies, confirms there is an Array::operator [] getter
	assert (testArray3[-1] == testArray3[-1]); // for getter range check
	
	cout <<"All tests are completed.\n";
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

