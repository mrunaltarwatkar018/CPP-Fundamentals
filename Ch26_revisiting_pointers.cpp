#include <iostream>

using namespace std;

// Dynamic Memory Allocation

int main() {
    // New, Delete Keywords

    int *p = new int(4); // 4 is stored in Heap Memory
    cout << p << endl;

    int *arr = new int[3];
    cout << arr << endl;

    for(int i=0;i<3;i++) {
        arr[i] = i*i;
    }

    for(int i=0;i<3;i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    // Delete

    delete[] arr;
    delete(p);

    return 0;
}