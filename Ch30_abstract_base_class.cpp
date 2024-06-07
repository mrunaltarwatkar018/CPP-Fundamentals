#include <iostream>

using namespace std;

// Abstract base class and pure virtual functions

class Complex { // abstract base class - the class only defined to derive other classes not to create objects and it must contain atleast one pure virtual function
    protected:
        int real,imagenary;
    public:
    // pure virtual function make it mandatory to derived class to define a function (in this case getData())
        virtual void getData()=0; // Do-nothing function (pure virtual function)

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

    Complex *base_class_pointer;
    complexForm obj_derived;
    base_class_pointer = &obj_derived; // pointing base class pointer to derived class

    base_class_pointer->setData(7,4);
    base_class_pointer->getData();


    return 0;
}