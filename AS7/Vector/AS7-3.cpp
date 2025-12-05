#include <iostream>
#include <vector>
using namespace std;

void largerThanN(const vector<int> &a, int n) {
    for (int x : a)
        if (x > n) cout << x << " ";
}

int main() {
    vector<int> a(10);
    for (int &x : a) cin >> x;

    int n; cin >> n;
    largerThanN(a, n);
}
