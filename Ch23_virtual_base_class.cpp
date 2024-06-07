#include <iostream>

using namespace std;

/*
    student -> Test
    student -> Sports
    test -> result
    sports -> result
*/

class student {
    protected:
        int roll_no;
    public:
        void set_number(int a) {
            roll_no = a;
        }
        void print_number() {
            cout << "You roll no is: " << roll_no << endl;
        }
};

class test : virtual public student {
    protected:
        float maths, physics;
        public:
            void set_marks(float m1, float m2) {
                maths = m1;
                physics = m2;
            }

            void print_marks(void) {
                cout << "Your result is here: "
                    << "Maths: " << maths
                    << " Physics: " << physics << endl;
            }
};

class sports : virtual public student {
    protected:
        float score;
        public:
            void set_score(float sc) {
                score = sc;
            }

            void print_score(void) {
                cout << "Your PT score is: " << score << endl;
            }
};

class result : public test, public sports {
    private:
        float total;
    public:
        void display(void) {
            total = maths + physics + score;
            print_number();
            print_marks();
            print_score();
            cout << "Your total marks are: " << total;
        }
};


int main() {
    result shubham;
    shubham.set_marks(34, 64);
    shubham.set_number(101);
    shubham.set_score(49);
    shubham.display();

    return 0;
}