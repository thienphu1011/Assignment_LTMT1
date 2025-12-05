#include <iostream>
using namespace std;

bool isMagic(int a[3][3]) {
    int sum = a[0][0] + a[0][1] + a[0][2];

    for (int i = 0; i < 3; i++)
        if (a[i][0] + a[i][1] + a[i][2] != sum) return false;  // check rows

    for (int j = 0; j < 3; j++)
        if (a[0][j] + a[1][j] + a[2][j] != sum) return false; // check columns

    if (a[0][0] + a[1][1] + a[2][2] != sum) return false; // check main diagonal
    if (a[0][2] + a[1][1] + a[2][0] != sum) return false; // check secondary diagonal

    return true;
}

int main() {
    int a[3][3];
   cout << "Enter the 3x3 matrix elements :\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];

    if (isMagic(a)) cout << "Magic Square";
    else cout << "Not Magic";
}
