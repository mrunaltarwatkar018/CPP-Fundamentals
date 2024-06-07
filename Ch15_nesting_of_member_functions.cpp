#include <iostream>
#include <string>

using namespace std;

// -----------------> Nesting in member function
  class binary {
    string s; // by default variables in classes are treated as private

    public:
        void read(void);
        void chk_bin(void);
        void change(void);
        void display(void);
  };

    void binary :: read(void) {
        cout << "Enter a binary number: ";
        cin >> s;
    }

    void binary :: chk_bin(void) {
        for (int i = 0; i < s.length(); i++)
        {
            if(s.at(i) != '0' && s.at(i) != '1') {
                cout << endl << "Incorret binary format";
                exit(0);
            }
        }
        
    }

    void binary :: change(void) {
        chk_bin(); // ---------------> Nesting of Member Functions

        for (int i = 0; i < s.length(); i++)
        {
            if(s.at(i) == '0') {
                s.at(i) = '1';
            }
            else if(s.at(i) == '1') {
                s.at(i) = '0';
            }
        }
    }

    void binary :: display(void) {
        cout << endl << "Displaying your binary number..." << endl;
        for (int i = 0; i < s.length(); i++)
        {
            cout << s.at(i);
        }
    }


int main() {
    binary b;
    b.read();
    // b.chk_bin();
    b.display();
    b.change();
    b.display();

    return 0;
}

  