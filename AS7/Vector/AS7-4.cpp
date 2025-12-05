#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<double>> food(3, vector<double>(5));

    for (auto &monkey : food)
        for (double &x : monkey) {
            do cin >> x;
            while (x < 0);
        }

    double total = 0, mn = food[0][0], mx = food[0][0];

    for (auto &monkey : food)
        for (double x : monkey) {
            total += x;
            if (x < mn) mn = x;
            if (x > mx) mx = x;
        }

    cout << "Average per day = " << total / 15 << endl;
    cout << "Least eaten = " << mn << endl;
    cout << "Most eaten = " << mx << endl;
}
