#include <iostream>
#include <functional>
#include <algorithm>

using namespace std;

/*
    function objects (functor): Function wrapped in a class so that it available like an object
*/

int main() {
    int arr[] = {1,2,45,9,7,3};
    // sort(arr, arr+4);
    sort(arr, arr+6, greater<int>());
    
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}