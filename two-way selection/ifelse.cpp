#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int magazine;
    float price;

    cout << "Enter the number of magazines that you bought: ";
    cin >> magazine;

    if (magazine >= 5) {
        price = 5.0 * magazine;
    } else {
        price = 7.0 * magazine;
    }

    cout << fixed << setprecision(2) << "\nThe final price is: RM" << price << endl;

    return 0;
}