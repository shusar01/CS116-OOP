// Lab Assignment 4 Part 1
// Programmer: Steven Husar
// Programmer's ID: 1702539

#include <iostream>
#include <string>
using namespace std;

#include <cassert>
#include "MyStaticArray.h"


int main () {
  
  // programmer's identification
  cout << "Programmer: Steven Husar\n";
  cout << "Programmer's ID: 1702539\n";
  cout << "File: " << __FILE__ << endl;
  
  MyStaticArray <float, 100> testArray;
  MyStaticArray <string, 200> testStringArray;
  // First test. Testing total failure of the program. Comment out before moving to the next test.
  // Result: It failed as the core dumped right then and there.
  //cout << "Testing total failure of the program" << endl;
  //assert (false);
  
  // Second test. Testing Capacity
  // Result: as the defined capacity, the last cout should return to the user
  cout << "\nTesting capacity\n";
  cout << "Excpecting: 100\n";	
  cout << "Actual: " << testArray.capacity() << endl;
  assert(100 == testArray.capacity());
  
  
  // Third test. Testing testArray::MyStaticArray 
  // Result: as the defined capacity will account for the length of the intended array,
  //         the success message should show once this assert is evaluated.
  cout << "\nTesting constructor testArray::MyStaticArray\n";
  for (int i = 0; i < testArray.capacity(); i++) {
    // cout << "For " << i << " the value is should be 0. It actually is " << testArray[i] <<endl;
    assert(testArray[i] == 0.0);
  }
  cout << "The third test for all values present in the array are initialized to the value 0" <<endl; 
  
  
  // Fourth Test. Testing the Setter function
  // Result: this will verify values are being stored into the array
  //         and should result in a dummy if the expected outcome isn't in range
  cout << "\nTesting the MyStaticArray::operator[] setter\n";
  testArray[34] = 623.4;
  testArray[-101] = 35.7;	
  cout << "\nExpected: 623.4 for testArray[34]\n";
  cout << "Actual: " << testArray[34] << endl;
  assert(623.4f == testArray[34]);
  
  cout << "\nExpected: 0 for testArray[97] (unset index value after given its initial 0 value earlier)\n";
  cout << "Actual: " << testArray[97] << endl;
  assert(0.0 == testArray[97]);
  
  cout << "\nExpected: 35.7 for testArray[-101]\n";
  cout << "Actual: " << testArray[-101] << endl;
  assert(35.7f == testArray[-101]);
  
  cout << "\nExpected: 35.7 for testArray[384] (unset index value to test carrying dummy field)\n";
  cout << "Actual: " << testArray[384] << endl;
  assert(35.7f == testArray[384]);
  
  
  
  // Fifth Test. Testing the Getter function
  // Result: as values are placed into the array from the third test, this test should
  //         retrieve those values and reference them successfully by its last success message.
  cout << "\nTesting Getter function for Array" << endl;
  MyStaticArray <float, 100>  const testArray2  = testArray;
  for (int i = 0; i < 100; i++) {
    assert (testArray[i] == testArray2[i]);
  }
  cout << "\nExpected: 623.4 for testArray2[34]\n";
  cout << "Actual: " << testArray2[34] << endl;
  assert(623.4f == testArray2[34]);
  
  cout << "\nExpected: 0 for testArray2[97] (unset index value after given its initial 0 value earlier)\n";
  cout << "Actual: " << testArray2[97] << endl;
  assert(0 == testArray2[97]);
  
  cout << "\nExpected: 0 for testArray2[-101] (due to the array's scope focused on elements 0 - 99 only when copied from testArray)\n";
  cout << "Actual: " << testArray2[-101] << endl;
  assert(0 == testArray2[-101]);
  
  cout << "\nExpected: 0 for testArray2[384] (due to the array's scope focused on elements 0 - 99 only when copied from testArray)\n";
  cout << "Actual: " << testArray2[384] << endl;
  assert(0 == testArray2[384]);

  // Sixth test. const object test
  cout <<"\nConst object test\n";
  MyStaticArray <float, 100>  const testArray3; // when this complies, Array::Array 's main constructor exists
  assert (testArray3.capacity()); // when this complies, this confirms Array::capacity is a getter
  assert (testArray3[0] == testArray3[0]); // when this complies, confirms there is an Array::operator [] getter
  assert (testArray3[-1] == testArray3[-1]); // for getter range check
  
  //Seventh test. Initialize a string (to test functionality of the Template, just performing a this for a string)
  cout << "\nTesting constructor testStringArray::MyStaticArray\n";
  for (int i = 0; i < testStringArray.capacity(); i++) {
      //cout << "For index value " << i << " the value is should be ''. It actually is" << testStringArray[i] <<endl;
      assert(testStringArray[i] == "");
  }
  
    cout <<"All tests are completed.\n";
}  
