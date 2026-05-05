#include <iostream>
using namespace std;

class Shape {
public:
    virtual void show() {
        cout << "Shape" << endl;
    }
};

class Circle : public Shape {
public:
    void display() {
        cout << "Circle class function" << endl;
    }
};

int main() {

    Shape* ptr = new Circle();

    Circle* cptr = dynamic_cast<Circle*>(ptr);

    if (cptr != nullptr) {
        cptr->display();   // derived function
    } else {
        cout << "Cast failed" << endl;
    }

    delete ptr;

    return 0;
}