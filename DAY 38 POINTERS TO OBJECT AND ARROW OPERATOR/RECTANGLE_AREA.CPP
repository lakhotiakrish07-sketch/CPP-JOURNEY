#include <iostream>
using namespace std;

class Rectangle {
public:
    int length, breadth;

    void area() {
        cout << "Area: " << length * breadth << endl;
    }
};

int main() {
    Rectangle r;
    Rectangle *ptr = &r;

    ptr->length = 5;
    ptr->breadth = 7;

    ptr->area();

    return 0;
}