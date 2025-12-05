#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<double> rain(12);

    for (double &x : rain) {
        do cin >> x;
        while (x < 0);
    }

    double sum = 0;
    int mn = 0, mx = 0;

    for (int i = 0; i < 12; i++) {
        sum += rain[i];
        if (rain[i] < rain[mn]) mn = i;
        if (rain[i] > rain[mx]) mx = i;
    }

    cout << "Total = " << sum << endl;
    cout << "Average = " << sum / 12 << endl;
    cout << "Lowest month = " << mn + 1 << endl;
    cout << "Highest month = " << mx + 1 << endl;
}
