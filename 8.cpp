#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
public:
    int rollNo;

    void displayRollNo() {
        cout << "Roll No: " << rollNo << endl;
    }
};

int main() {

    Student s;
    s.name = "Ali";
    s.age = 20;
    s.rollNo = 101;

    s.displayInfo();
    s.displayRollNo();

    return 0;
}
