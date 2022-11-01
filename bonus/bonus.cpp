#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int mark;
    float bonus;
    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your performance mark: ";
    cin >> mark;

    if (mark >= 6 && mark <= 10) {
        bonus = 2500;
    } else if (mark < 6) {
        bonus = 1200;
    }

    // make name variable capitalize on every first word
    for (int i = 0; i < name.length(); i++) {
        if (i == 0) {
            name[i] = toupper(name[i]);
        } else if (name[i] == ' ') {
            name[i + 1] = toupper(name[i + 1]);
        }
    }

    cout << endl << fixed << setprecision(2) << name << " bonus is: RM" << bonus;

    return 0;
}