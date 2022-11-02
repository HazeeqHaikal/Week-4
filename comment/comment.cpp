#include <iostream>
#include <string>
using namespace std;

int main() {
    // 1) input 2 names
    string name1, name2;

    cout << "Enter name 1: ";
    getline(cin, name1);

    cout << "Enter name 2: ";
    getline(cin, name2);

    // 2) input 2 integer numbers to represent the age of the 2 individuals
    int age1, age2;

    cout << "Enter age 1: ";
    cin >> age1;

    cout << "Enter age 2: ";
    cin >> age2;

    // 3) determine who is older
    if (age1 < age2) {
        cout << name1 << " is older than " << name2 << endl;
    } else if (age1 > age2) {
        cout << name2 << " is older than " << name1 << endl;
    } else {
        cout << name1 << " and " << name2 << " are the same age" << endl;
    }
    cout << endl;

    // 4) determine whether the names entered are the same or not
    // if the names are not the same, display the longer name
    if (name1 == name2) {
        cout << "\nThe names are the same" << endl;
    } else {
        if (name1.length() > name2.length()) {
            cout << "\nThe longer name is " << name1 << endl;
        } else if (name1.length() < name2.length()) {
            cout << "\nThe longer name is " << name2 << endl;
        } else {
            cout << "\nThe names are the same length" << endl;
        }
    }
    cout << endl;

    cout << endl;

    system("pause");

    return 0;
}