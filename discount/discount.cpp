#include <iostream>
#include <string>

using namespace std;

int main() {

    float price, discount, priceAfterDiscount;

    cout << "Enter the price of the item: ";
    cin >> price;

    if(price >= 300 && price <= 1000){
        discount = price * 0.055;
    }else if(price > 1000){
        discount = price * 0.065;
    }

    priceAfterDiscount = price - discount;

    cout << "Price of the item after discount: RM" << priceAfterDiscount << endl;

    return 0;

}