#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int SIZE = 5;
    int lottery[SIZE], user[SIZE];

    srand(time(0));

    for (int i = 0; i < SIZE; i++)
        lottery[i] = rand() % 10;

    for (int i = 0; i < SIZE; i++)
        cin >> user[i];

    int match = 0;
    for (int i = 0; i < SIZE; i++)
        if (lottery[i] == user[i]) match++;

    for (int i = 0; i < SIZE; i++) cout << lottery[i] << " ";
    cout << "\nMatches = " << match << endl;

    if (match == SIZE) cout << "Grand Prize Winner!";
}
