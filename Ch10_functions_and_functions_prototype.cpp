#include <iostream>

using namespace std;

// it will tell compiler the these function will be defined in code (required)
int add(int num1, int num2); // it is called function prototype
int addByRef(int *num1, int *num2);
int addByRefVar(int &num1, int &num2);

int main() {
    // Function is used to decomposition of code so that we can use it multiple times without writing again
    int num1;
    int num2;
    int *ptr1 = &num1, *ptr2 = &num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;


    cout << endl << "***** Call By value (will provide copy of variables) ******"  << endl;
    int sum = add(num1, num2); // function call by value (means copy of int a,b will be provided to function)
    cout << endl << "The sum is: " << sum << endl;
    cout << "a: " << num1 << ", b: " << num2 << endl;
    

    cout << endl << "***** Call by reference (will provide address of variables) ******"  << endl;
    int sum2 = addByRef(ptr1, ptr2);
    cout << endl << "The sum by ref is: " << sum2 << endl;
    cout << "a: " << num1 << ", b: " << num2 << endl;


    cout << endl << "***** Call by reference using c++ reference variables ******"  << endl;
    int sum3 = addByRefVar(num1, num2);
    cout << endl << "The sum by ref var is: " << sum3 << endl;
    cout << "a: " << num1 << ", b: " << num2;

    return 0;
}

int add(int num1, int num2) {
    num1 += 1; // will not affect the num1 of main()
    num2 += 1;

    return num1 + num2;
}

int addByRef(int *num1, int *num2) {
    *num1 += 1; // will change actual num1 of main()
    *num2 += 1;

    return (*num1 + *num2);
}

int addByRefVar(int &num1, int &num2) {
    num1 += 1;
    num2 += 1;

    return num1 + num2;
}