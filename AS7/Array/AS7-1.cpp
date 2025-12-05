#include <iostream>
#include <vector>
using namespace std;



int main() {
    
    // Your code here
    int  a[10];
    int  min,max ;
    cout <<"Enter the 10 number of elements" << endl; 
    for (int i = 0; i < 10; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> a[i];
    
    }
    
    min= a[0];
    max= a[0];

    for (int x:a){
        if (x < min) {
            min = x;
        }
        if (x > max) {
            max = x;
        }

    }
    cout << "The minimum value is: " << min << endl;
    cout << "The maximum value is: " << max << endl;
    return 0;
}