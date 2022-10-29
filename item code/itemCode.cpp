#include <iostream>
#include <string>

using namespace std;

int main() {
    char itemCode[7] = {'A', 'B', 'C', 'D', 'E', 'F', 'G'};
    float price[7] = {54.00, 65.00, 82.00, 103.00, 150.00, 245.00, 250};
    float charge[7] = {0.05,
                       0.05,
                       0.05,
                       0.07,
                       0.07,
                       0.1,
                       0.1};

    char choice;
    float chargeOuput;
    float priceOutput;
    cout << "Enter the item code: ";
    cin >> choice;

    choice = toupper(choice);

    bool found = false;
    for (int i = 0; i < sizeof(itemCode); i++) {
        if (choice == itemCode[i]) {
            chargeOuput = price[i] * charge[i];
            priceOutput = price[i] + chargeOuput;
            found = true;
        }
    }

    if (!found) {
        cout << "Error, this is not in the list";
    }

    cout << "Final price: RM" << priceOutput;

    return 0;
}