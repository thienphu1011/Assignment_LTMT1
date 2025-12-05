#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<long> empId = {5658845,4520125,7895122,8777541,8451277,1302850,7580489};
    vector<int> hours(7);
    vector<double> rate(7), wage(7);

    for (int i = 0; i < 7; i++) {
        do cin >> hours[i]; while (hours[i] < 0);
        do cin >> rate[i]; while (rate[i] < 15.0);

        wage[i] = hours[i] * rate[i];
    }

    for (int i = 0; i < 7; i++)
        cout << empId[i] << " : " << wage[i] << endl;
}
