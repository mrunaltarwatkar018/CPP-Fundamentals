#include <iostream>
#include <list>

using namespace std;

// STL Lists

void display(list<int> &lst) {
    list<int> :: iterator itr;
    for(itr = lst.begin(); itr!=lst.end(); itr++) {
        cout << *itr << " ";
    }
    cout << endl;
};

int main() {
    list<int> ls;
    list<int> ls2(3);

    ls.push_back(5);
    ls.push_back(7);
    ls.push_back(1);
    ls.push_back(65);
    ls.push_back(72);

    display(ls);

    // Sorting the list
    ls.sort();

    // Removing Element From list
    // ls.pop_back();
    // ls.pop_front();
    // ls.remove(1);

    display(ls);

    list<int> :: iterator itr;
    itr = ls2.begin();

    *itr = 33;
    itr++;
    *itr = 64;
    itr++;
    *itr  = 82;

    display(ls2);

    // Merging
    ls.merge(ls2);
    display(ls);

    ls.reverse();
    display(ls);

    return 0;
}