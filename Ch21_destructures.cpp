#include <iostream>

using namespace std;

int count = 0;

class Num{
    // Destructor never takes arguments and nor return value
    public:
        Num() { // Constructor
            count++;
            cout << "Constructor is called: " << count << " time" << endl;
        }

        ~Num(){ // Destructure
            cout << "desstructor is called: " << count << " time" << endl;
            count--;
        }

};  

int main() {
    cout << "We are inside main function" << endl;
    cout << "Creating First object n1" << endl;
    Num n1;
    {
        cout << "Entering this block" << endl;
        cout << "Creating two more objects" << endl;
        Num n2, n3;
        cout << "Exiting this block" << endl;
    }
    cout << "Back to Main" << endl;
    return 0;
}