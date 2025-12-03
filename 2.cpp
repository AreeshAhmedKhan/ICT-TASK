#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, width;

public:
    void setLength(int l) { length = l; }
    void setWidth(int w) { width = w; }

    int getLength() { return length; }
    int getWidth() { return width; }

    int area() {
        return length * width;
    }
};

int main() {

    Rectangle r;
    r.setLength(5);
    r.setWidth(3);

    cout << "Length: " << r.getLength() << endl;
    cout << "Width: " << r.getWidth() << endl;
    cout << "Area: " << r.area() << endl;

    return 0;
}
