#include <iostream>

using namespace std;

class Complex {
    protected:
        int real,imagenary;
    public:
        virtual void getData() {
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
    // Pointer to derived class

    cout << "****************Pointer to derived class************************" << endl;

    // Note- We can't access derived class properties from base class pointer if the function is not set to be virtual

    Complex *base_class_pointer;
    complexForm obj_derived;
    base_class_pointer = &obj_derived; // pointing base class pointer to derived class

    base_class_pointer->setData(7,4);
    base_class_pointer->getData();


    return 0;
}