// Lab Assignment 5 Header
// Programmer: Steven Husar
// Programmer's ID: 1702539

#ifndef MyDynamicArray_h
#define MyDynamicArray_h

template <typename V>
class MyDynamicArray {
  V* values;
  int cap;
  V dummy;

  public:
  MyDynamicArray(); // constructor
  V operator [ ] (int) const; // getter
  V& operator [ ] (int); // setter
  int capacity () const; // getter
};

// Proper dynamic structure to the Array class
template <typename V>
MyDynamicArray<V>::MyDynamicArray (const MyDynamicArray<V>& original) {
  cap = original.cap;
  values = new V[cap];
  for (int index = 0; index < cap; index++) {
    values[index] = original.values[index];
  dummy = original.dummy
  }
}

MyDynamicArray<V>& operator=(const MyDynamicArray<V>& original) {
  if (this != &original) {
    delete [ ] values;

    cap = original.cap;
    values = new V[cap];
    for (int index = 0; index < cap; index++) {
     values[index] = original.values[index];
    }
    dummy = original.dummy
  }
  return *this;
}

// Getter operator of the values index
template <typename V>
V MyDynamicArray<V, CAP>::operator [ ](int i) const {
  if (i < 0 || i >= CAP) {
    return V();
  }
  return values [i]; // the copied value present
}


// Setter operator of the values index
template <typename V>
V& MyDynamicArray<V, CAP>::operator [ ](int i) {
  if (i < 0 || i >= 100) {
    return dummy;
  }
  return values [i];
}



// Capacity limit established for the Array class
template <typename V>
int MyDynamicArray<V, CAP>::capacity () const {
  return CAP;
}


#endif
