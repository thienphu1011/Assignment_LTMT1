#include <iostream>
using namespace std;

int main() {
    const int SIZE = 7;
    long empId[SIZE] = {5658845,4520125,7895122,8777541,8451277,1302850,7580489};
    int hours[SIZE];
    double rate[SIZE], wages[SIZE];

    for (int i = 0; i < SIZE; i++) {
        do cin >> hours[i]; while (hours[i] < 0);
        do cin >> rate[i]; while (rate[i] < 15.0);
        wages[i] = hours[i] * rate[i];
    }

    for (int i = 0; i < SIZE; i++)
        cout << empId[i] << " : " << wages[i] << endl;
}
