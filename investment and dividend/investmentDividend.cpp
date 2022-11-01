#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {
    float investment, dividend, total;

    cout << "Enter the amount of investment: ";
    cin >> investment;

    if (investment > 75000) {
        dividend = 1.3 / 100 * investment;
    } else if (investment > 50000) {
        dividend = 1.1 / 100 * investment;
    } else if (investment > 30000) {
        dividend = 1.0 / 100 * investment;
    } else if (investment > 10000) {
        dividend = 0.8 / 100 * investment;
    } else if (investment > 5000) {
        dividend = 0.3 / 100 * investment;
    } else {
        dividend = 0.2 / 100 * investment;
    }

    cout << fixed << setprecision(2) << "\nThe dividend is: RM" << dividend << endl;
    return 0;
}