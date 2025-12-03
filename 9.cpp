#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() {
        cout << "Area of shape" << endl;
    }
};

class Rectangle : public Shape {
public:
    int length, width;

    void area() override {
        cout << "Rectangle Area: " << length * width << endl;
    }
};

int main() {

    Rectangle r;
    r.length = 5;
    r.width = 4;

    r.area();

    return 0;
}
