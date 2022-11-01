#include <iostream>
#include <string>

using namespace std;

int main() {
    float price, discount, priceAfterDiscount;

    discount = 0;

    cout << "Enter the price of the item: ";
    cin >> price;

    if (price >= 300 && price <= 1000) {
        discount = price * 5.5 / 100;
    }

    if (price > 1000) {
        discount = price * 6.5 / 100;
    }

    priceAfterDiscount = price - discount;

    cout << endl << "Price of the item after discount: RM" << priceAfterDiscount << endl;

    return 0;
}