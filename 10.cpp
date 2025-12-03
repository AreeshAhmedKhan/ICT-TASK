#include <iostream>
using namespace std;

class Employee {
public:
    int salary;

    void displaySalary() {
        cout << "Salary: " << salary << endl;
    }
};

class Manager : public Employee {
public:
    void bonus() {
        cout << "Bonus is 5000" << endl;
    }
};

int main() {

    Manager m;
    m.salary = 60000;

    m.displaySalary();
    m.bonus();

    return 0;
}
