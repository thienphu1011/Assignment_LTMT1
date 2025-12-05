#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;
    int tickets[SIZE] = {
        13579, 26791, 26792, 33445, 55555,
        62483, 77777, 79422, 85647, 93121 };

    int win;
    cout << "Enter this week's winning number: ";
    cin >> win;

    bool found = false;

    for (int i = 0; i < SIZE; i++) {
        if (tickets[i] == win) {
            found = true;
            break;
        }
    }

    if (found) cout << "You won!\n";
    else cout << "No winning ticket.\n";

    return 0;
}
