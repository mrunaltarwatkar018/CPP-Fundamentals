#include <iostream>

using namespace std;

// Pointer to Object & Arrow Operator

class Complex {
    protected:
        int real,imagenary;
    public:
        void getData() {
            cout << "The Real Part is: " << real << endl;
            cout << "The Imagenary Part is: " << imagenary << endl;
        }
        void setData(int a, int b) {
            real = a;
            imagenary = b;
        }
};

class complexForm : public Complex {
    public:
        void getData(void) {
            cout << "Real: " << real << ", imagenary: " << imagenary << endl;
        }

        void getForm(void) {
            cout << "The Complex Form is: " << real << " + i" << imagenary << endl;
        }
};

int main() {
    Complex c1;
    Complex *ptr = &c1;
    // Complex *ptr = new Complex;
    (*ptr).setData(4,7);
    (*ptr).getData(); 

    // arrow operator works same as (*ptr) dereference
    Complex *ptr2 = new Complex;
    ptr2->setData(8,2);
    ptr2->getData();

    // Array of Objects
    Complex *arr = new Complex[3];
    arr->setData(3,2);
    arr->getData();
    arr++;
    arr->setData(11,22);
    arr->getData();

    // Pointer to derived class
    cout << "****************Pointer to derived class************************" << endl;
    Complex *base_class_pointer;
    complexForm obj_derived;
    base_class_pointer = &obj_derived; // pointing base class pointer to derived class

    base_class_pointer->setData(7,4);
    base_class_pointer->getData();

    // Note- We can't access derived class properties from base class pointer

    complexForm *derived_class_pointer;
    derived_class_pointer = &obj_derived;

    derived_class_pointer->setData(80,43);
    derived_class_pointer->getForm();
    derived_class_pointer->getData();
    

    return 0;
}