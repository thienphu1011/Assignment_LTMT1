#include <iostream>
#include <vector>
using namespace std;

bool isMagic(const vector<vector<int>> &a) {
    vector<bool> seen(10, false);

    for (auto &row : a)
        for (int v : row) {
            if (v < 1 || v > 9 || seen[v]) return false;
            seen[v] = true;
        }

    int sum = a[0][0] + a[0][1] + a[0][2];

    for (int i = 0; i < 3; i++)
        if (a[i][0] + a[i][1] + a[i][2] != sum) return false;

    for (int j = 0; j < 3; j++)
        if (a[0][j] + a[1][j] + a[2][j] != sum) return false;

    if (a[0][0] + a[1][1] + a[2][2] != sum) return false;
    if (a[0][2] + a[1][1] + a[2][0] != sum) return false;

    return true;
}

int main() {
    vector<vector<int>> a(3, vector<int>(3));

    for (auto &row : a)
        for (int &x : row)
            cin >> x;

    cout << (isMagic(a) ? "Magic" : "Not Magic");
}
