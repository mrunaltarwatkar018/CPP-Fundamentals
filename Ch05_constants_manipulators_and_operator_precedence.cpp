#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // ********* constants **************

    const int a = 5; // This will be constant value
    int b = 34;
    int c = 2342;

    // a = 7; // Not valid for constants

    // ******** Manipulators ***********
    // Manipultors used to format the data

    cout << a << endl; // endl is a manipulator
    cout << "Format without setw: " << a << endl;
    cout << "Format without setw: " << b << endl;
    cout << "Format without setw: " << c << endl;

    cout << "Format with setw: " << setw(4) << a << endl; // setw() is a minpulator
    cout << "Format with setw: " << setw(4) << b << endl;
    cout << "Format with setw: " << setw(4) << c << endl;


    // ************* Operator Precedence and Associativity *************
    // Take online reference https://en.cppreference.com/w/cpp/language/operator_precedence

    return 0;
}