#include <iostream>
#include <string>

using namespace std;

int main() {
    int performanceMark, bonus;

    cout << "Enter performance mark: ";
    cin >> performanceMark;

    if (performanceMark >= 6 && performanceMark <= 10) {
        bonus = 2500;
    } else if (performanceMark < 6) {
        bonus = 1200;
    }

    cout << "Bonus: " << bonus;

    return 0;
}