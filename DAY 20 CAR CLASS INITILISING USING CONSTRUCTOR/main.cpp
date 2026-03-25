#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int price;

    Car(string b, int p) {
        brand = b;
        price = p;
    }

    void display() {
        cout << brand << " " << price;
    }
};

int main() {
    Car c1("Toyota", 1000000);
    c1.display();
}