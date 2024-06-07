#include <iostream>

using namespace std;

int factorial(int n) {
    if(n == 1) {
        return 1;
    } else {
        return (n * factorial(n-1)); // recursion - function body calls the same function
    }
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int result = factorial(n); 
    cout << "The result is: " << result;
    return 0;
}