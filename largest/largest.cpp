#include <iostream>
#include <string>

using namespace std;

int main() {

    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    if (num1 > num2) {
        cout << num1 << " is the largest number.";
    } else {
        cout << num2 << " is the largest number.";
    }

    return 0;

}
