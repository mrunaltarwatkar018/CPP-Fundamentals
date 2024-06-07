#include <iostream>
#include <map>
#include <string>

using namespace std;

// STL Maps

int main() {
    map<int, string> name;
    name[1] = "shubham";
    name[2] = "rahul";

    name.insert({{3, "Aman"}, {4, "harry"}});

    map<int, string> :: iterator itr;

    cout << "The size is: " << name.size() << endl;

    for (itr = name.begin(); itr != name.end(); itr++)
    {
        cout << (*itr).first << " : " << (*itr).second << endl;
    }
    

    return 0;
}