#include <iostream>
using namespace std;

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        int minValue = arr[i];

        for (int j = i + 1; j < size; j++) {
            if (arr[j] < minValue) {
                minValue = arr[j];
                minIndex = j;
            }
        }

        arr[minIndex] = arr[i];
        arr[i] = minValue;
    }
}

int binarySearch(int arr[], int size, int value) {
    int left = 0, right = size - 1, mid;

    while (left <= right) {
        mid = (left + right) / 2;

        if (arr[mid] == value) return mid;
        else if (arr[mid] > value) right = mid - 1;
        else left = mid + 1;
    }

    return -1;
}

int main() {
    const int SIZE = 18;
    int accounts[SIZE] = {
        5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
        8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
        1005231, 6545231, 3852085, 7576651, 7881200, 4581002
    };

    selectionSort(accounts, SIZE);

    int input;
    cout << "Enter account number: ";
    cin >> input;

    if (binarySearch(accounts, SIZE, input) != -1)
        cout << "Valid account\n";
    else
        cout << "Invalid account\n";

    return 0;
}
