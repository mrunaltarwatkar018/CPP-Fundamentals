#include <iostream>

using namespace std;

/*
    1. Single Inheritance - one parent one child
    2. Multiple Inheritance - two parent one child
    3. Hierarchical inheritance - one parent two childs
    4. Multilevel inheritance - deriving a class from already derived class (A -> B -> C) child have father and also grandFather
    5. Hybrid inheritance - Hybrid inheritance is a combination of multiple inheritance and multilevel inheritance
*/

// Base Class
class Employee {
    float salary;
    
    protected: // Gives power to members to get securely inherited (behaves like internal variables)
        int companyCode;

    public:
        int id;
        Employee(int _id) {
            id = _id;
            salary = 56;
        }
        Employee () {}
};

// Derived class #(class {derived-class-name} : {visibility-mode} {base-class-name})
/* 
    1. Default visibilty mode is private
    2. Private visibilty mode: public members of base class becomes private members of derived class
    3. public visibility mode: public members of base class becomes (becomes) remains public members of derived class
*/

class Programmer : public Employee { // Single Inheritance
    public:
        int langCode = 9;
        Programmer(int _id) {
            id = _id;
        }
};

/* For a protected member
                     Public derivation      Private derivation      Protected derivation
    1. private:    |  Not Inherited     |   Not Inherited       |   Not Inherited
    2. protected:  |  protected         |   Private             |   Protected
    3. public:     |  Public            |   Private             |   Protected
*/

class Designer : protected Employee {
    public:
        int softCode = 8;
        Designer(int _id) {
            softCode = _id;
        }
};


int main() {
    Employee shubham(1), harry(2);
    cout << shubham.id << endl;
    Programmer suvi(3);
    cout << suvi.langCode;

    return 0;
}

/* 
Inheritance Ambiguity Resolution - colloision of two function with same name in inherited class, to resolve it you have to mention it in inherited class as below:

class Derived: public Base1, public Base2 {
    int a;
    public:
    void greet() {
        Base1::greet() or Base2::greet()
    }
}
*/