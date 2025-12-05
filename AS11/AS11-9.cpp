#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool findName(string arr[], int size, string name) {
    for (int i = 0; i < size; i++)
        if (arr[i] == name) return true;
    return false;
}

int main() {
    const int SIZE = 200;
    string boys[SIZE], girls[SIZE];

    ifstream b("BoyNames.txt"), g("GirlNames.txt");

    for (int i = 0; i < SIZE; i++) b >> boys[i];
    for (int i = 0; i < SIZE; i++) g >> girls[i];

    string boy, girl;
    cin >> boy >> girl;

    if (findName(boys, SIZE, boy)) cout << boy << " is popular\n";
    else cout << boy << " is NOT popular\n";

    if (findName(girls, SIZE, girl)) cout << girl << " is popular\n";
    else cout << girl << " is NOT popular\n";
}
