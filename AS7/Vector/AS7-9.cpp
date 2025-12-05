#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

bool findName(const vector<string> &a, const string &name) {
    for (const string &s : a)
        if (s == name) return true;
    return false;
}

int main() {
    const int SIZE = 200;
    vector<string> boys(SIZE), girls(SIZE);

    ifstream fb("BoyNames.txt"), fg("GirlNames.txt");

    for (string &s : boys) fb >> s;
    for (string &s : girls) fg >> s;

    string n;
    cin >> n;

    if (findName(boys, n)) cout << n << " is a popular boy name\n";
    else if (findName(girls, n)) cout << n << " is a popular girl name\n";
    else cout << n << " is NOT popular\n";
}
