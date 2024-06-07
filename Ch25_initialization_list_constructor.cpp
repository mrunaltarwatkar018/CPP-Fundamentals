#include <iostream>

using namespace std;

class Initialization {
    int i,j;
    public:
        Initialization(int a, int b) : i(a), j(b) { // Initialization List in Constructor
            cout << "Value of i is: " << i << endl;
            cout << "Value of j is: " << j << endl;
        }; 
};

int main() {
    Initialization obj(4,7);
    return 0;
}