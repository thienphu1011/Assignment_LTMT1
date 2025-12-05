#include <iostream>
using namespace std;

int main() {
    const int NUM_STORES = 5;
    int sales[NUM_STORES];

    // Nhập dữ liệu bán hàng
    for (int i = 0; i < NUM_STORES; i++) {
        cout << "Enter today's sales for store " << (i + 1) << ": ";
        cin >> sales[i];
    }

    cout << "\nSALES BAR CHART\n";
    cout << "(Each * = $100)\n";

    // In biểu đồ
    for (int i = 0; i < NUM_STORES; i++) {
        cout << "Store " << (i + 1) << ": ";
        int stars = sales[i] / 100; // Mỗi * đại diện $100
        for (int j = 0; j < stars; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
