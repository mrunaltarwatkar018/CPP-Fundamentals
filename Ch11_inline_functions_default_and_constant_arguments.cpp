#include <iostream>

using namespace std;

inline int sum(int a, int b, int d = 2, const int e = 4) { // inline function, default argument
    static int c = 0; // important concept (static variables) 
    c++;
    return (a + b + c + d + e);
}

int main() {
    int a, b;
    cout << "Enter the value of a and b: ";
    cin >> a >> b;
    cout << endl << "The sum of a and b is: " << sum(a,b);
    cout << endl << "The sum of a and b is: " << sum(a,b);
    return 0;
}