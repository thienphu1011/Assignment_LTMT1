#include <iostream>

using namespace std;

int main() {
    
   
    int a[12]; 
    double sum = 0;
    double average;

    cout << "Enter the total rainfall of each 12 months" << endl;

    for (int i = 0; i < 12; i++) {
        cout << "Enter month " << i + 1 << ": ";
        cin >> a[i];

        
        while (a[i] < 0) {
            cout << "Error: Rainfall cannot be negative." << endl;
            cout << "Enter month " << i + 1 << " again: ";
            cin >> a[i];
        }
         sum += a[i];
    }
    
   
    average = sum / 12.0; 
    double minVal = a[0];
    double maxVal = a[0];
    int minMonth = 1;
    int maxMonth = 1; 
    
    for (int i = 1; i < 12; i++) {
        if (a[i] < minVal) {
            minVal = a[i];
            minMonth = i + 1; 
        }
        if (a[i] > maxVal) {
            maxVal = a[i];
            maxMonth = i + 1; 
        }
    }

    cout << "\nThe total rainfall for the year is: " << sum << endl;
    cout << "The average monthly rainfall is: " << average << endl;       
    cout << "The highest monthly rainfall is Month " << maxMonth << " with: " << maxVal << endl;
    cout << "The lowest monthly rainfall is Month " << minMonth << " with: " << minVal << endl;

    return 0;
}