#include <iostream>

using namespace std;

int main() {
    // Structures are used to hold variable of different data types

    typedef struct student // typedef (not required) 
    {
        int code;
        char symbol;
        float marks;
    } st;

    struct student shubham; // Can also use (st shubham) instead of (struct student shubham)
    shubham.code = 1;
    shubham.marks = 44.63;
    shubham.symbol = 'S';

    struct student rahul;
    rahul.code = 2;
    rahul.marks = 54.63;
    rahul.symbol = 'R';

    cout << "Shubham -> code: " << shubham.code << " symbol: " << shubham.symbol << " marks: " << shubham.marks << endl;
    cout << "Rahul -> code: " << rahul.code << " symbol: " << rahul.symbol << " marks: " << rahul.marks << endl;

    // Array of sturcts
    struct student students[2]; // // Can also use (st students[2]) instead of (struct student students[2])

    students[0].code = 1;
    students[0].marks = 44.63;
    students[0].symbol = 'S';

    students[1].code = 2;
    students[1].marks = 53.63;
    students[1].symbol = 'R';        

    cout << "Shubham -> code: " << students[0].code << " symbol: " << students[0].symbol << " marks: " << students[0].marks << endl;
    cout << "Rahul -> code: " << students[1].code << " symbol: " << students[1].symbol << " marks: " << students[1].marks << endl;


    // -------------------> Unions
    /*
        if we use struct all variable inside it will take memory;
        but in case of union only the variable which have max size(in bytes) will be allocated memory
        hence, we use union for better memory management
    */
    union loan {
        int cash; // 4 bytes
        float gold; // 4 bytes
        char other; // 1 byte
    } loan; 

    union loan l1;

    l1.cash = 3000;
    l1.gold = 2.5;

    cout << l1.cash  << endl; // will return garbage value of (l1.cash) because union can hold only 1 variable value hence, it will just take the memory for 1 variable
    cout << l1.gold  << endl;


    // ---------------> Enums (enums are used store predefined values with indexes)

    enum Meal{breakfast, lunch, dinner};

    Meal person1 = breakfast;

    cout << "The person1 needs " << person1 << endl; // we use it because we know which value holds which index

    cout << breakfast << endl; // will return 0
    cout << lunch << endl; // will return 1
    cout << dinner << endl; // will return 2


    return 0;
}