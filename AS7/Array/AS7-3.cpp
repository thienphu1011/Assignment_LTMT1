#include <iostream>
using namespace std;


void displayLargerThanN(int arr[], int size, int n) {
    cout << "Elements larger than " << n << ": ";
    for (int i = 0; i < size; i++) {
        if (arr[i] > n) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}
int main() {
    int size; 
    int arr[size];
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin >> size;
    cout <<"Enter "<<size<<" integers:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Enter the number n: "; cin >> n;
    displayLargerThanN(arr, size, n);
    

    return 0;
}