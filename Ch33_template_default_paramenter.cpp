#include <iostream>

using namespace std;

// Passing Default parameter in Templates

template<class T1, class T2=int> // Default Parameter

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
    vector<int, float> obj(4, 5.34);
    obj.getData();

    vector<string> obj2("Shubham Negi", 4);
    obj2.getData();

    vector<bool> obj3(true, 10);
    obj3.getData();

    return 0;
}