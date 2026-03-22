# Day 18 – Friend Function in C++

## Overview

Today I learned about **friend functions** in C++. A friend function is not a member of a class, but it can access the class’s private and protected data.

## Key Concepts

* Declared using the `friend` keyword inside a class
* Defined outside the class
* Can access private members of one or more classes
* Called like a normal function (not using objects)
* Does not use the `this` pointer

## Syntax

```cpp
class A {
    friend void func(A obj);
};
```

## Example

```cpp
#include <iostream>
using namespace std;

class B;

class A {
    int a;
    friend void add(A, B);

public:
    void setnumber() {
        cin >> a;
    }
};

class B {
    int b;
    friend void add(A, B);

public:
    void setnumber() {
        cin >> b;
    }
};

void add(A o1, B o2) {
    cout << o1.a + o2.b;
}
```

## Key Learning

* Friend functions help when multiple classes need shared access
* Forward declaration (`class B;`) is required when using a class before defining it
* They break encapsulation, so should be used carefully

## Conclusion

Friend functions provide controlled access to private data and are especially useful when working with multiple classes.
