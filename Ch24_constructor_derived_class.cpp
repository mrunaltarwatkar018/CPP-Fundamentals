#include <iostream>

using namespace std;

/*
case 1:
class B: public A {
    // order of execution of constructor -> A() then B()
}

case 2:
class A: public B, public C {
    // order of execution of constructor -> B() then C() then A()
}

clase 3:
class A: public B, virtual public C {
    // order of execution of constructor -> C() then B() then A()
}
*/

class A {
    int a;
    public:
        A(int a) {
            this->a = a;
            cout << "Class A constructor is called" << endl;
        }
};

class B {
    int b;
    public:
        B(int b) {
            this->b = b;
            cout << "Class B constructor is called" << endl;
        }
};

class C: public A, public B {
    int c;
    public:
        C(int a, int b, int c) : A(a), B(b) {
            this->c = c;
        }
};

class D: public A, virtual public B {
    int d;
    public:
        D(int a, int b, int d) : A(a), B(b) {
            this->d = d;
        }
};


int main() {
    cout << "Class C object init" << endl;
    C obj(1,2,3);
    cout << "Class D object init" << endl;
    D obj2(4,5,6);

    return 0;
}