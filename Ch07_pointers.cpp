#include <iostream>

using namespace std;

int main() {
    // Pointers holds the memory address of other variables in C++ 
    // & ----> Address of operator
    // * ----> Dereference Operator

    int a = 4;
    int *b = &a; 

    cout << "The address of variable a is " << b << endl;
    cout << "The value of variable a associated to b is " << *b << endl;

    b++; // airthmetic in pointers

    cout << "The address of variable a is " << b << endl;

    int **c = &b; // Pointer to pointer 
    cout << "The address of pointer b is " << c << endl;
    cout << "The value of pointer b associated to c is " << *c << endl; // will return address of a


    return 0;
}