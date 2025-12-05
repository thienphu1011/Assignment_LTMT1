#include <iostream>
#include <string>
using namespace std;

void selectionSort(string arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIdx = i;
        string minVal = arr[i];

        for (int j = i + 1; j < size; j++) {
            if (arr[j] < minVal) {
                minVal = arr[j];
                minIdx = j;
            }
        }
        arr[minIdx] = arr[i];
        arr[i] = minVal;
    }
}

void showArray(const string arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << endl;
}

int main() {
    const int NUM_NAMES = 20;
    string names[NUM_NAMES] = {
        "Collins, Bill", "Smith, Bart", "Allen, Jim",
        "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
        "Taylor, Terri", "Johnson, Jill",
        "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
        "James, Jean", "Weaver, Jim", "Pore, Bob",
        "Rutherford, Greg", "Javens, Renee",
        "Harrison, Rose", "Setzer, Cathy",
        "Pike, Gordon", "Holland, Beth"
    };

    selectionSort(names, NUM_NAMES);

    cout << "Sorted names:\n";
    showArray(names, NUM_NAMES);

    return 0;
}
