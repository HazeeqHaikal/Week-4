#include <iostream>
#include <string>

using namespace std;

int main() {

    float investment, profit;

    cout << "Enter investment amount: ";
    cin >> investment;

    cout << "Enter profit amount: ";
    cin >> profit;

    if(investment >= 50000 && profit >= 20000){
        cout << "The investment is worthy to continue";
    }else{
        cout << "The investment is a waste of money";
    }

    return 0;

}