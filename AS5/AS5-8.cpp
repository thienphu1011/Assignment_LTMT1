#include <iostream>
#include <limits>
using namespace std;

int main() {
    int number;
    int largest = numeric_limits<int>::min(); // khởi tạo số lớn nhất rất nhỏ
    int smallest = numeric_limits<int>::max(); // khởi tạo số nhỏ nhất rất lớn

    cout << "Enter a series of integers (-99 to end):\n";

    while (true) {
        cin >> number;
        if (number == -99) {
            break; // thoát vòng lặp
        }

        if (number > largest) {
            largest = number;
        }
        if (number < smallest) {
            smallest = number;
        }
    }

    if (largest == numeric_limits<int>::min() && smallest == numeric_limits<int>::max()) {
        cout << "No numbers were entered.\n";
    } else {
        cout << "The largest number entered: " << largest << endl;
        cout << "The smallest number entered: " << smallest << endl;
    }

    return 0;
}
