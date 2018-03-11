// Lab Assignment 5 Part 1
// Programmer: Steven Husar
// Programmer's ID: 1702539

#include <iostream>
#include <string>
using namespace std;

#include <cassert>
#include "MyDynamicArray.h"
#include "MyDynamicArray.h" //ifndef test

int main () {
  
  MyDynamicArray<float> testArray(403);
  MyDynamicArray<string> testArrayString (32);
  
  // First test. Testing total failure of the program. Comment out before moving to the next test.
  // Result: It failed as the core dumped right then and there.
  //cout << "Testing total failure of the program" << endl;
  //assert (false);

  
  // Second test. Testing Capacity
  // Result: as the defined capacity, the last cout should return to the user
  
  cout << "\nTesting capacity\n";
  cout << "Excpecting: 403\n";	
  cout << "Actual: " << testArray.capacity() << endl;
  assert(403 == testArray.capacity());
    
  
  
  
  // Third test. Testing testArray::MyDynamicArray 
  // Result: as the defined capacity will account for the length of the intended array,
  //         the success message should show once this assert is evaluated.
  cout << "\nTesting constructor testArray::MyDynamicArray\n";
  for (int i = 0; i < testArray.capacity(); i++) {
    //cout << "For " << i << " the value is should be 0. It actually is " << testArray[i] <<endl;
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
  
  
  
  
  
  // Fifth Test. Testing the Copy and Capacity setter and getter functions
  // Result: as values are placed into the array from the third test, this test should
  //         retrieve those values and reference them successfully by its last success message.
  //         It should also expand its capacity when it is tested as such by two at the end of tests
  cout << "\nTesting Getter function for Array" << endl;
  MyDynamicArray <float> testArray2 = testArray;
  assert (testArray.capacity() == testArray2.capacity());
  
  cout << "\nFirst capacity test "<<endl;
  cout << "\ncapacity of testArray2.capacity() is " << testArray2.capacity() << "and capacity of testArray.capacity() is "  << testArray.capacity();
  
  //test of setting the values
  for (int index = 0; index < testArray.capacity(); index++)
  { 
    assert(testArray2[index] == testArray[index]);
  }
  
  cout << "\nExpected: 623.4 for testArray2[34]\n";
  cout << "Actual: " << testArray2[34] << endl;
  assert(623.4f == testArray2[34]);
  
  cout << "\nExpected: 0 for testArray2[97] (unset index value after given its initial 0 value earlier)\n";
  cout << "Actual: " << testArray2[97] << endl;
  assert(0 == testArray2[97]);
  
  cout << "\nExpected: 35.7 for testArray2[-101] (Since the array is copied exactly how it is assigned from before)\n";
  cout << "Actual: " << testArray2[-101] << endl;
  assert(35.7f == testArray2[-101]);
  
  cout << "\nExpected: 0 for testArray2[543] (due to the array's scope focused within its original scope)\n";
  cout << "Actual: " << testArray2[543] << endl;
  assert(0 == testArray2[543]);
  
  //Testing the capacity expansion
    cout << "\ncapacity of testArray2.capacity() is now " << testArray2.capacity() << " up from its original: "  << testArray.capacity() << endl;
 
 
 
 
 
   // Sixth test. const object test
  cout <<"\nConst object test\n";
  MyDynamicArray <float> const testArray3; // when this complies, Array::Array 's main constructor exists
  cout << "\n capacity to this new array should be 2: " << testArray3.capacity() << endl;
  assert (testArray3.capacity()); // when this complies, this confirms Array::capacity is a getter
  assert (testArray3[0] == testArray3[0]); // when this complies, confirms there is an Array::operator [] getter
  assert (testArray3[-1] == testArray3[-1]); // for getter range check
  
  
  
  
  
  //Seventh test. Initialize a string (to test functionality of the Template, just performing a this for a string)
  cout << "\nTesting constructor testStringArray::MyStaticArray\n";
  for (int i = 0; i < testArrayString.capacity(); i++) {
      //cout << "For index value " << i << " the value is should be ''. It actually is" << testStringArray[i] <<endl;
      assert(testArrayString[i] == "");
  }
  
  
  // Eigth Test: Object Assignment Test
  cout << "\nObject assignment test\n";
  MyDynamicArray<float> testArray4;
  testArray4 = testArray;
  assert(testArray.capacity() == testArray4.capacity());
  for (int index = 0; index < testArray.capacity(); index++)
    assert(testArray[index] == testArray4[index]);
  
  cout <<"All tests are completed.\n";
  
  return 0;  
}
