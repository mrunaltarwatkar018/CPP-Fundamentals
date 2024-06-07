#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec1;
    int element, size;
    cout << "Enter the size of your vector: " << endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Element you want to add: ";
        cin>>element;
        vec1.push_back(element);
    }

    for (int i = 0; i < vec1.size(); i++)
    {
        cout << vec1[i] << " ";
    }

    cout << endl;
    
    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter, 56);
    vec1.insert(iter+1, 93);

    for (int i = 0; i < vec1.size(); i++)
    {
        cout << vec1[i] << " ";
    }

    return 0;
}