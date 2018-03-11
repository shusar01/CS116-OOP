// Lab Assignment 5 Header
// Programmer: Steven Husar
// Programmer's ID: 1702539

#ifndef MyDynamicArray_h
#define MyDynamicArray_h

#include <algorithm>
using namespace std;

template <typename V>
class MyDynamicArray {
  
  V* values;
  int cap;
  V dummy;

  public:
  MyDynamicArray(int=2);
  MyDynamicArray(const MyDynamicArray<V>&); // constructor
  MyDynamicArray<V>& operator=(const MyDynamicArray<V>& ); //Assignment Operator
  V operator [] (int) const; // getter
  V& operator [] (int); // setter
  int capacity () const; // getter
  void capacity (int); // setter
  ~MyDynamicArray () { delete [] values; }
};

// Proper dynamic structure to the Array class
template <typename V>
MyDynamicArray<V>::MyDynamicArray(int x) {
  cap = x;
  values = new V[cap];
  for (int index = 0; index < cap; index++) {
    values[index] = V();
  }
  dummy = V();
}

// Proper dynamic structure to the Array in equaling an old array to that of a new one
template <typename V>
MyDynamicArray<V>::MyDynamicArray(const MyDynamicArray<V>& original) {
  cap = original.cap;
  values = new V[cap];
  for (int index = 0; index < cap; index++) {
    values[index] = original.values[index];
   }
  dummy = original.dummy;
}

// a forced copy constructor of another array
template <typename V>
MyDynamicArray<V>& MyDynamicArray<V>::operator=(const MyDynamicArray<V>& original) {
  if (this != &original) {
    delete [] values;

    cap = original.cap;
    values = new V[cap];
    for (int index = 0; index < cap; index++) {
      values[index] = original.values[index];
    }
    dummy = original.dummy;
  }
  return *this;
}

// Getter operator of the values index
template <typename V>
V MyDynamicArray<V>::operator [ ](int i) const {
  if (i < 0 || i >= cap) {
    return V();
  }
  return values [i]; // the copied value present
}


// Setter operator of the values index
template <typename V>
V& MyDynamicArray<V>::operator [ ](int i) {
  if (i < 0) {
    return dummy;
  }
  if (i >= cap) {
  capacity (2 * i);
  }

  return values [i];
}

// Capacity limit established for the Array class
template <typename V>
int MyDynamicArray<V>::capacity () const {
  return cap;
}



// Capacity limit established for the Array class
template <typename V>
void MyDynamicArray<V>::capacity (int cap) {
  // allocate a new array with the new capacity
  V* temp = new V[cap];

  // get the lesser of the new and old capacities
  int limit = min(cap, this->cap);

  // copy the contents
  for (int index = 0; index < limit; index++) {
    temp[index] = values[index];
  }
 
  // set added values to their defaults
  for (int index = limit; index < cap; index++) {
    temp[index] = V ();  
  }

  // deallocate original array
  delete [] values;

  // switch newly allocated array into the object
  values = temp;

  // update the capacity
  this->cap = cap;
}


#endif
