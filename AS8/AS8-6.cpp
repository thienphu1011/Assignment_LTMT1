#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int value, int &count) {
    count = 0;
    for (int i = 0; i < size; i++) {
        count++;
        if (arr[i] == value) return i;
    }
    return -1;
}

int binarySearch(int arr[], int size, int value, int &count) {
    int left = 0, right = size - 1, mid;
    count = 0;

    while (left <= right) {
        count++;
        mid = (left + right) / 2;

        if (arr[mid] == value) return mid;
        else if (arr[mid] > value) right = mid - 1;
        else left = mid + 1;
    }
    return -1;
}

int main() {
    const int SIZE = 20;
    int arr[SIZE] = {
        3, 7, 12, 19, 25, 31, 45, 46, 52, 60,
        61, 72, 74, 80, 83, 90, 92, 95, 97, 100
    };

    int value;
    cout << "Enter value to search: ";
    cin >> value;

    int linearCount, binaryCount;

    linearSearch(arr, SIZE, value, linearCount);
    binarySearch(arr, SIZE, value, binaryCount);

    cout << "Linear search comparisons: " << linearCount << endl;
    cout << "Binary search comparisons: " << binaryCount << endl;

    return 0;
}
