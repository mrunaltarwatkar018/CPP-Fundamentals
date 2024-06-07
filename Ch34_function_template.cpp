#include <iostream>

using namespace std;

// Function Template & Function Template with Parameter


template <class T1, class T2>
float funAvg(T1 a, T2 b) {
    float avg= (a+b)/2.0;
    return avg;
}

template <class T>
void swapp(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    float a;
    // a = funAvg<int, int>(5,2);
    a = funAvg(5,2);
    cout << "The average is: "<< a << endl;

    // Swap
    int x=10;
    int y=24;
    cout << "Before Swap->" << endl;
    cout << "A: " << x << ", B: " << y << endl;
    swapp(x,y);
    cout << "A: " << x << ", B: " << y << endl;


    return 0;
}