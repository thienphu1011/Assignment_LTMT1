// speakers_bureau.cpp
// Problem 8: Speakers Bureau

#include <iostream>
#include <string>
using namespace std;

struct Speaker {
    string name;
    string phone;
    string topic;
    double fee;
};

int main() {
    const int SIZE = 10;
    Speaker s[SIZE];

    int choice;

    do {
        cout << "\n1. Enter info\n2. Display all\n3. Exit\nChoice: ";
        cin >> choice;

        if (choice == 1) {
            int i;
            cout << "Enter speaker index (0-9): ";
            cin >> i;
            if (i < 0 || i >= SIZE) continue;

            cout << "Name: ";
            cin >> s[i].name;
            cout << "Phone: ";
            cin >> s[i].phone;
            cout << "Topic: ";
            cin >> s[i].topic;
            do {
                cout << "Fee (>=0): ";
                cin >> s[i].fee;
            } while (s[i].fee < 0);
        }

        else if (choice == 2) {
            for (int i = 0; i < SIZE; i++) {
                cout << "\nSpeaker " << i << ": "
                     << s[i].name << ", " << s[i].topic
                     << ", Fee $" << s[i].fee;
            }
            cout << endl;
        }

    } while (choice != 3);

    return 0;
}
