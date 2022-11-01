#include <iostream>
#include <string>

using namespace std;

int main() {
    float salary, attendanceAllowance;

    attendanceAllowance = 0;

    cout << "Enter your salary: ";
    cin >> salary;

    cout << "Enter your current attendance allowance: ";
    cin >> attendanceAllowance;

    if (salary <= 1500) {
        attendanceAllowance *= 1.05;
        salary *= 1.12;
    }

    cout << "\nYour attendance allowance increase by " << attendanceAllowance << "%";
    cout << "\nYour new salary is RM" << salary;

    return 0;
}