#include <iostream>

using namespace std;

class shop {
    int itemId[100];
    int itemPrice[100];
    int counter;

 public:
    void initCounter(void) { counter = 0; }
    void getPrice(void);
    void setPrice(void);
};

 void shop :: setPrice(void) {
    cout << "Enter Id of your Item: ";
    cin >> itemId[counter];
    cout << "Enter Price of your Item: ";
    cin >> itemPrice[counter];
    counter++;
 }

 void shop :: getPrice(void) {
    for (int i=0; i < counter; i++) {
        cout << "The price of item with id[" << itemId[i] << "] is: " << itemPrice[i] << endl;
    }
 }



int main() {
    shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.getPrice();

    return 0;
}