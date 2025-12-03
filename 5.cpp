#include <iostream>
using namespace std;

class Car {
private:
    int speed;
    int fuel;

public:
    void setSpeed(int s) { speed = s; }

    void setFuel(int f) {
        if (f < 0)
            cout << "Fuel cannot be negative!" << endl;
        else
            fuel = f;
    }

    int getSpeed() { return speed; }
    int getFuel() { return fuel; }
};

int main() {

    Car c;
    c.setSpeed(120);
    c.setFuel(50);

    cout << "Car Speed: " << c.getSpeed() << " km/h" << endl;
    cout << "Car Fuel: " << c.getFuel() << " liters" << endl;

    return 0;
}
