#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int magazine;
    float pricePerUnit, finalPrice;

    cout << "Enter the number of magazines that you bought: ";
    cin >> magazine;

    if (magazine >= 5) {
        pricePerUnit = 5;
    } else {
        pricePerUnit = 7;
    }

    finalPrice = magazine * pricePerUnit;

    cout << fixed << setprecision(2) << "\nThe final price is: RM" << finalPrice << endl;

    return 0;
}