#include <iostream>

using namespace std;

  /* ------------- Object oriented Programming --------------- */

class Employee { // classes (private, public access modifiers)
    private: // private functions and variables cannot be called or implemented outside of class
        int a, b, c;

    public: // public functions and variables can be called or implemented outside of class
        int x, y, z;

        void setData(int a,int b,int c); // Declaration

        void getData() {
            cout << "The value of a is: " << a << endl;
            cout << "The value of b is: " << b << endl;
            cout << "The value of c is: " << c << endl;
            cout << "The value of x is: " << x << endl;
            cout << "The value of y is: " << y << endl;
            cout << "The value of z is: " << z << endl;
        }
};

void Employee :: setData(int a1, int b1, int c1) { // implementation
    a = a1;
    b = b1;
    c = c1;
}

int main() {
    Employee shubham;
    shubham.setData(1,2,3);
    shubham.x = 4;
    shubham.y = 5;
    shubham.z = 6;
    shubham.getData();

    return 0;
}
