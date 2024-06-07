#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    cout << "Enter the value of num1: "; // << - Insertion operator 
    cin >> num1; // >> - Extraction operator

    cout << "";

    cout << "Enter the value of num1: ";
    cin >> num2;

    cout << endl; // Endl Will jump print in console to new line

    cout << "The sum of num1 and num2 is: "<< num1+num2;
    return 0;
}