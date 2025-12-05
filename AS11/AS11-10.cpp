#include <iostream>
using namespace std;

const int R = 3, C = 4;

int getTotal(int a[R][C]) {
    int sum = 0;
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            sum += a[i][j];
    return sum;
}

double getAverage(int a[R][C]) {
    return getTotal(a) / double(R * C);
}

int getRowTotal(int a[R][C], int row) {
    int sum = 0;
    for (int j = 0; j < C; j++){
        sum += a[row][j];
    }
    return sum;
}

int getColumnTotal(int a[R][C], int col) {
    int sum = 0;
    for (int i = 0; i < R; i++) {
        sum += a[i][col];
    }
    return sum;
}

int getHighestInRow(int a[R][C], int row) {
    int mx = a[row][0];
    for (int j = 1; j < C; j++){
        if (a[row][j] > mx){
         mx = a[row][j];
        }
    }
    return mx;
}

int getLowestInRow(int a[R][C], int row) {
    int mn = a[row][0];
    for (int j = 1; j < C; j++){
        if (a[row][j] < mn){
         mn = a[row][j];
        }
    }
    return mn;
}

int main() {
    int a[R][C] = {
        {1, 2, 3, 4},
        {4, 6, 1, 2},
        {7, 8, 9, 1}
    };

    cout << getTotal(a) << endl;
    cout << getAverage(a) << endl;
    cout << getRowTotal(a, 1) << endl;
    cout << getColumnTotal(a, 2) << endl;
    cout << getHighestInRow(a, 2) << endl;
    cout << getLowestInRow(a, 2) << endl;
}
