#include <iostream>
#include <vector>
using namespace std;

int getTotal(const vector<vector<int>> &a) {
    int sum = 0;
    for (auto &row : a)
        for (int x : row)
            sum += x;
    return sum;
}

double getAverage(const vector<vector<int>> &a) {
    int r = a.size(), c = a[0].size();
    return getTotal(a) / (double)(r * c);
}

int getRowTotal(const vector<vector<int>> &a, int row) {
    int s = 0;
    for (int x : a[row]) s += x;
    return s;
}

int getColumnTotal(const vector<vector<int>> &a, int col) {
    int s = 0;
    for (auto &row : a) s += row[col];
    return s;
}

int getHighestInRow(const vector<vector<int>> &a, int row) {
    int mx = a[row][0];
    for (int x : a[row]) mx = max(mx, x);
    return mx;
}

int getLowestInRow(const vector<vector<int>> &a, int row) {
    int mn = a[row][0];
    for (int x : a[row]) mn = min(mn, x);
    return mn;
}

int main() {
    vector<vector<int>> a = {
        {2,7,9,6},
        {6,1,8,9},
        {4,3,7,2}
    };

    cout << getTotal(a) << endl;
    cout << getAverage(a) << endl;
    cout << getRowTotal(a,1) << endl;
    cout << getColumnTotal(a,2) << endl;
    cout << getHighestInRow(a,2) << endl;
    cout << getLowestInRow(a,2) << endl;
}
