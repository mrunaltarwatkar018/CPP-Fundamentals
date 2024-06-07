#include <iostream>

using namespace std;

int add(int a, int b) { // a1 (take 2 arguments)
    return a + b;
}

int add(int a, int b, int c) { // a2 (take 3 arguments)
    return a + b + c;
}

int main() {
    // Function overloading
    cout << "The sum of 1 and 2 is: " << add(1,2) << endl; // it will automaticly pick a1
    cout << "The sum of 1, 2 and 3 is: " << add(1,2,3) << endl; // it will automaticly pick a2
    return 0;
}