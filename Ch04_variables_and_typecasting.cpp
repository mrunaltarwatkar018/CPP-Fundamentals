#include <iostream>

using namespace std;

int a = 5; // Global variable

int main() {
    // ************** Float, double and long double Literals *****************

    int a = 4;
    float b = 4.5f; 
    long double c = 4.5l; 

    cout << a << endl; // Will always return local variable
    cout << ::a; // Will take value from global Variable (:: scope resolution operator)

    cout << endl << "The size of 34.4f is " << sizeof(b); // sizeof() size of var in byte
    cout << endl << "The size of 34.4l is " << sizeof(c);


    // ********* Reference Variables ***********

    int x = 455;
    int &y = x; // Y referencing to X 

    cout << endl << x << endl;
    cout << y << endl; 


    // ********** Typecasting *************

    int num = 54;
    float num2 = 4.5f;

    cout << "The value of num in float is " << (float)num << endl; // can also use float(num)
    cout << "The value of num2 in int is " << (int)num2 << endl; // can also use int(num2)

    return 0;
}