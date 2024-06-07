#include <iostream>

using namespace std;

int num = 5; // Global Variable

int main() {
    std::cout << "Hello World\n"; // std:: not required if using namespace std
    int a = 5;
    float b = 4;

    cout << "The Sum of a and b is: "<< a + b;

    /*
    Data Types
    1. int
    2. Float 
    3. Char 
    4. Double --> decimal number of high procedure
    5. Boolean

    Variable Scopes 
    1. Local Variable -> local variables are declared outside any function and can be accessed only from there and local variable have high precedence than global variable

    2. Global Variable -> Global Variables are declared outside any function and can be accessed from anywhere

    ---> User Defined data types
    1. Struct
    2. Union
    3. Enum
    */

    return 0;
}