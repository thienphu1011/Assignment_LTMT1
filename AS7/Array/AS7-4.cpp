#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    const int R = 3, C = 5;
    double food[R][C]; 
   
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++) {
            do {
            cin >> food[i][j];
            }
            while (food[i][j] < 0);
        }

    double total = 0;
    double mn = food[0][0], mx = food[0][0];

    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++) {
            total += food[i][j];
            if (food[i][j] < mn) mn = food[i][j];
            if (food[i][j] > mx) mx = food[i][j];
        }

    cout << "Average per day = " << total / (R * C) << endl;
    cout << "Min = " << mn << endl;
    cout << "Max = " << mx << endl;


    
   
    
}
