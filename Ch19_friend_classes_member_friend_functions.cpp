#include <iostream>

using namespace std;

class complex;

class Calculator {
    public:
        int add(int a, int b) {
            return a + b;
        }

        int sumRealComplex(complex o1, complex o2);
};


class complex {
    int a, b;
    // indivisually declaring function as friend
    friend int Calculator :: sumRealComplex(complex, complex); // frined function can access private members of a class object

    // declaring entire class as friend
    friend class Calculator; // any function of calculator class can access private members


    public:
        void setNumber(int n1, int n2) {
            a = n1;
            b = n2;
        }

        void printNumber(complex o1, complex o2) {
            cout << "Your number is " << a << "+" << b << "i" << endl; 
        }
};

int Calculator :: sumRealComplex(complex o1, complex o2) {
    return o1.a + o2.a;
}


int main() {
    complex o1, o2;
    o1.setNumber(1,4);
    o2.setNumber(5,7);

    Calculator calc;
    int res = calc.sumRealComplex(o1,o2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;
    return 0;
}