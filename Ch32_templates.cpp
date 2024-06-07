#include <iostream>

using namespace std;

/* 
Template is also known as parameterized classes
    - Templates follow DRY Rule
    - You can use same class for multiple data types
*/

// (T) can be int, float, char etc...
// template <class T> // Single Parameter template
template<class T1, class T2> // Multiple parameter template

class vector {
    T1 val;
    T2 val2;
    public:
        vector(T1 a, T2 b) {
            val = a;
            val2 = b;
        }
        void getData(void) {
            cout << "The First value is: " << val << endl;
            cout << "The Second value is: " << val2 << endl;
        }
};

int main() {
    vector<int, float> obj(4, 5.32);
    obj.getData();

    vector<string, int> obj2("Shubham Negi", 4);
    obj2.getData();

    vector<bool, int> obj3(true, 10);
    obj3.getData();

    return 0;
}