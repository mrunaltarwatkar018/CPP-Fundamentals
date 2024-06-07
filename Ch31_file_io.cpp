#include <iostream>
#include <fstream>
#include <string>

/*
 1. fstreambase
 2. ifstream -> derived from fstreambase
 3. ofstream -> derived from fstreambase

 In orderr to work with files in C++, you will have to open it. Primarily there are 2 ways to open a file:
 1. Using a constructor
 2. Using the member function open() of a class
*/

using namespace std;

int main() {
    // Open file using constructor and Writing it
    string st = "shubham Negi";
    // ofstream out("Ch31_fileio.txt");
    ofstream out;
    out.open("Ch31_fileio.txt");
    out<<st;
    out.close();

    // Open file using constructor and reading it
    string st2;
    // ifstream in("Ch31_fileio.txt"); 
    ifstream in;
    in.open("Ch31_fileio.txt");
    // in>>st2;
    // getline(in, st2);
    while (in.eof() == 0) 
    {
        getline(in, st2);
        cout << st2 << endl;
    }
    
    cout<<st2;
    in.close();

    return 0;
}