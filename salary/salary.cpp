#include <iostream>
#include <string>

using namespace std;

int main() {
    float salary, attendanceAllowance, salaryIncrease;

    attendanceAllowance = 0;
    salaryIncrease = 100;

    cout << "Enter your salary: ";
    cin >> salary;

    if (salary < 1500) {
        attendanceAllowance += 5;
        salary *= 112 / salaryIncrease;
    }

    cout << "\nYour attendance allowance increase by " << attendanceAllowance << "%";
    cout << "\nYour new salary is RM" << salary;

    return 0;
}