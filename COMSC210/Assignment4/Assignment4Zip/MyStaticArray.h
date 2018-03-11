// Lab Assignment 4 Header
// Programmer: Steven Husar
// Programmer's ID: 1702539

#ifndef MyStaticArray_h
#define MyStaticArray_h

template <typename V, int CAP>
class MyStaticArray {
  V values [CAP];
  V dummy;

  public:
  MyStaticArray(); // constructor
  V operator [ ] (int) const; // getter
  V& operator [ ] (int); // setter
  int capacity () const; // getter
};

// Proper dynamic structure to the Array class
template <typename V, int CAP>
MyStaticArray<V, CAP>::MyStaticArray () {
  for (int index = 0; index < CAP; index++) {
    values[index] = V();
  }
}


// Getter operator of the values index
template <typename V, int CAP>
V MyStaticArray<V, CAP>::operator [ ](int i) const {
  if (i < 0 || i >= CAP) {
    return V();
  }
  return values [i]; // the copied value present
}


// Setter operator of the values index
template <typename V, int CAP>
V& MyStaticArray<V, CAP>::operator [ ](int i) {
  if (i < 0 || i >= 100) {
    return dummy;
  }
  return values [i];
}



// Capacity limit established for the Array class
template <typename V, int CAP>
int MyStaticArray<V, CAP>::capacity () const {
  return CAP;
}


#endif
