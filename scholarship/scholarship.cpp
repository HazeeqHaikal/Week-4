#include <iostream>
#include <string>

using namespace std;

int main() {
    char program;
    float cgpa, amount;

    cout << "What is your program?\nA. Diploma\nB. Bachelor\n\nYour program: ";
    cin >> program;
    // uppercase char for program variable
    program = toupper(program);

    cout << "What is your CGPA: ";
    cin >> cgpa;

    if (program == 'A' && cgpa >= 3.0) {
        amount = 5000;
    } else if (program == 'A' && cgpa < 3.0) {
        amount = 7000;
    } else if (program == 'B' && cgpa >= 3.0) {
        amount = 10000;
    } else if (program == 'B' && cgpa < 3.0) {
        amount = 6000;
    } else {
        cout << endl
             << "Invalid program" << endl;
        return 1;
    }

    cout << "Your scholarship amount (per year) is RM" << amount << endl;

    return 0;
}