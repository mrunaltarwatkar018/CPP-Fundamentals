#include <iostream>

using namespace std;

class Employee {
    int id;
    int salary;
    public:
        void setId(void) {
            salary = 150;
            cout << "Enter id of Employee: ";
            cin >> id;
        }

        void getId(void) {
            cout << "The id of this employee is: " << id << endl;
        }
};

int main() {
    Employee facebook[3];
    for (int i = 0; i < 3; i++) {
        facebook[i].setId();
        facebook[i].getId();
    }
    return 0;
}