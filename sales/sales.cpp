#include <iostream>
#include <string>

using namespace std;

int main() {
    float sales, comission;

    cout << "Enter sales amount: ";
    cin >> sales;

    if (sales > 10000) {
        comission = 0.05 * sales;
    } else {
        comission = 0.03 * sales;
    }

    cout << "Comission is: RM" << comission;

    return 0;
}