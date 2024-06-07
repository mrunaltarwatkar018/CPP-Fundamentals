#include <iostream>

using namespace std;

class Employee {
    // Count is the static data member of class employee
    static int count; // also called class variable
    int id;
    public:
        void setData(void) {
            cout << "Enter the id: ";
            cin >> id;
            count++;
        }
        void getData(void) {
            cout << "The id of the item is: " << id << " and this is employee no: " << count << endl;
        }
        static void getCount(void) { // static functions can only access the static variables and other static functions
            cout << "The value of count is: " << count << endl;
        }

};

int Employee :: count; // default value is 0 {this variable will hold value for all objects instead of single object}

int main() {
    Employee shubham;
    Employee harry;
    Employee rahul;

    shubham.setData();
    shubham.getData();
    Employee::getCount();

    harry.setData();
    harry.getData();
    Employee::getCount();

    rahul.setData();
    rahul.getData();
    Employee::getCount();

    return 0;
}