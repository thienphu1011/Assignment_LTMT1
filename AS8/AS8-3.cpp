#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;
    int tickets[SIZE] = {
        13579, 26791, 26792, 33445, 55555,
        62483, 77777, 79422, 85647, 93121
    };

    int win;
    cout << "Enter winning number: ";
    cin >> win;

    int left = 0, right = SIZE - 1, mid;
    bool found = false;

    while (left <= right) {
        mid = (left + right) / 2;

        if (tickets[mid] == win) {
            found = true;
            break;
        } else if (tickets[mid] > win) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    if (found) cout << "Winner!\n";
    else cout << "Not a winning ticket.\n";

    return 0;
}
