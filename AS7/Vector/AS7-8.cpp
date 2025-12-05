#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    vector<int> lottery(5), user(5);

    srand(time(0));
    for (int &x : lottery) x = rand() % 10;

    for (int &x : user) cin >> x;

    int match = 0;
    for (int i = 0; i < 5; i++)
        if (lottery[i] == user[i]) match++;

    for (int x : lottery) cout << x << " ";
    cout << "\nMatches = " << match << endl;

    if (match == 5) cout << "Grand Prize Winner!";
}
