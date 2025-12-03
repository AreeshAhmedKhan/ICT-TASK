#include <iostream>
using namespace std;

class Vehicle {
public:
    int speed;

    void showSpeed() {
        cout << "Speed: " << speed << endl;
    }
};

class Car : public Vehicle {
public:
    void fuelType() {
        cout << "Petrol" << endl;
    }
};

int main() {

    Car c;
    c.speed = 100;
    c.showSpeed();
    c.fuelType();

    return 0;
}
