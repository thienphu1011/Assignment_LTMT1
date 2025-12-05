#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a(10);
    for (int &x : a) cin >> x;

    int mn = a[0], mx = a[0];
    for (int x : a) {
        if (x < mn) mn = x;
        if (x > mx) mx = x;
    }

    cout << "Smallest = " << mn << "\nLargest = " << mx;
}
