#include <iostream>
using namespace std;

int main() {
    const int SIZE = 18;
    int accounts[SIZE] = {
        5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
        8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
        1005231, 6545231, 3852085, 7576651, 7881200, 4581002 };

    int input;
    cout << "Enter account number: ";
    cin >> input;

    bool found = false;
    for (int i = 0; i < SIZE; i++) {
        if (accounts[i] == input) {
            found = true;
            break;
        }
    }

    if (found) cout << "Valid account\n";
    else cout << "Invalid account\n";

    return 0;
}
