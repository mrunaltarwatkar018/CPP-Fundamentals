#include <iostream>

using namespace std;

class X {
    int a, b;

    public:
        // Constructor is a special member function with same name as of the class, it is used to initialize the object of its class
        // Constructor should be declared in public section of class
        // Constructor are invoked itself on creation of object of class

        // X(void) { // default constructor
        //     a = 1;
        //     b = 2;
        // }

        X(int n1, int n2) { // prameterized constructor
            a = n1;
            b = n2;
        }

        // Constructor Overloading : multiple constructors
        X(int n1) { // a class can have multiple constructor
            a = n1;
            b = 0;
        }

        // When no copy constructor is found, compiler supplies its own copy constructor
        X(X &obj) { // Copy Constructor
            cout << "Copy constructor called"<< endl;
            a = obj.a + 2;
            b = obj.b + 2;
        }

        void getValue(void) {
            cout << "The value of a is " << a << " and b is " << b << endl;
        } 
};

int main() {
    int n1, n2;
    cout << "Enter the n1: ";
    cin >> n1;
    cout << "Enter the n2: ";
    cin >> n2;

    X o1(n1,n2); // Implicit call
    // it will invoke constructor with 1 parameter
    X o2 = X(n1); // Explicit call

    o1.getValue();
    o2.getValue();

    // o3 should exactly resemble o1
    X o3(o1);
    o3.getValue();



    return 0;
}