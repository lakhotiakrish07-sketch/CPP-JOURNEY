# Day 8 - Call by Reference in C++

## Concept

In this program, I learned how Call by Reference works in C++.

When we pass a variable using `&`, the function directly modifies the original variable instead of creating a copy.

---

## Code

```cpp
#include <iostream>
using namespace std;

void change(int &x){
   cout << "How many marks you got: ";
   cin >> x;
   cout << "New marks: " << x << endl;
}

int main(){
    int marks = 0;

    change(marks);
    change(marks);

    cout << "Final marks: " << marks << endl;

    return 0;
}
```

---

## What I Learned

- `int &x` is a reference parameter.
- No copy of the variable is created.
- Changes inside the function affect the original variable.
- Reference is useful when we want to update values directly.

---

## Output Example

```
How many marks you got: 70
New marks: 70
How many marks you got: 85
New marks: 85
Final marks: 85
```