#include <iostream>
#include <string>

using namespace std;

int main() {
    float investment, dividend, total;

    cout << "Enter the amount of investment: ";
    cin >> investment;

    if (investment > 75000) {
        dividend = 0.013 * investment;
    } else if (investment <= 7500 && investment > 50000) {
        dividend = 0.011 * investment;
    } else if (investment <= 50000 && investment > 30000) {
        dividend = 0.01 * investment;
    } else if (investment <= 30000 && investment > 10000) {
        dividend = 0.003 * investment;
    } else {
        dividend = 0.002 * investment;
    }

    cout << "\nThe dividend is: RM" << dividend << endl;
    return 0;
}