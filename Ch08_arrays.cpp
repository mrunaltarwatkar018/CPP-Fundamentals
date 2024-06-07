#include <iostream>

using namespace std;

int main() {
    // Array is collection of items of similiar type
    int marks[] = {2,4,6,8,10};

    for(int i=0; i<5; i++) {
        cout << "The item in " << i+1 << " index is " << marks[i] << endl;
    }


    cout << "*************** Using Pointer *******************" << endl;

    int *ptr = marks; // or int *ptr = &marks[0]

    for (int i=0; i<5; i++) {
        cout << "The address of " << i+1 << " index is " << ptr << endl;
        cout << "The value in " << i+1 << " index is " << *ptr << endl;
        ptr++; // (p += 1) will behave same as ptr++. ex- for int it will increase 4 byte
    }

    return 0;
}