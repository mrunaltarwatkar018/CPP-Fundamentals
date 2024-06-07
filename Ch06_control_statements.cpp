#include <iostream>

using namespace std;

int main() {
    /* 
    Three type of Contol Structure in C++
        1. Sequence Structure -> normal procedure
        2. Selection Structures -> IF else, switch case
        3. Loop Structures -> while loop, for loop
    */


    int age;

    cout << "Enter Your age: ";
    cin >> age;

    // IF else Ladder
    if(age<18) {
        cout << "Less than eighteen";
    } else if (age>18)
    {
        cout << "Greater than eighteen";
    } else {
        cout << "Equal to eighteen";
    }
    
    cout << endl;

    // Switch Case Statement
    switch (age)
    {
    case 18:
        cout << "Age is eighteen";
        break;
    case 10:
        cout << "Age is Ten";
        break;
    default:
        cout << "No Special Case";
        break;
    }


    // Loop Statements - For Loop, while loop, do-while loop
    for(int i=0; i<=age; i++) {
        cout << endl << i;
    }

    while (age<=18)
    {
        cout << endl << "You are " << 18-age << " years left for being adult";
        age++;
    }

    do {
        cout << endl << "You have lived " << age - 18 << " years as adult";  
        age++;
    } while (age<25);
    

    return 0;
}