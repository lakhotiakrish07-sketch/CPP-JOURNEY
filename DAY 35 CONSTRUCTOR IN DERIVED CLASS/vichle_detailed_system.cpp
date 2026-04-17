#include <iostream>
using namespace std;

class Vehicle {
public:
    string brand;

    Vehicle(string b) {
        brand = b;
    }
};

class Car : public Vehicle {
public:
    int speed;

    Car(string b, int s) : Vehicle(b) {
        speed = s;
    }

    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Speed: " << speed << endl;
    }
};

int main() {
    Car c("Tata", 180);
    c.display();
}