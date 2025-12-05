#include <iostream>
#include <string>
using namespace std;

struct Speaker {
    string name;
    string phone;
    string topic;
    double fee;
};

// Display one speaker
void display(const Speaker &s, int index) {
    cout << "\nSpeaker " << index << ":\n";
    cout << "Name: " << s.name << "\n";
    cout << "Phone: " << s.phone << "\n";
    cout << "Topic: " << s.topic << "\n";
    cout << "Fee: $" << s.fee << "\n";
}

// Search function (Problem 7)
void searchTopic(Speaker s[], int size) {
    string key;
    cout << "Enter topic keyword to search: ";
    cin >> key;

    bool found = false;

    for (int i = 0; i < size; i++) {
        // match if keyword is substring of topic
        if (s[i].topic.find(key) != string::npos) {
            display(s[i], i);
            found = true;
        }
    }

    if (!found) {
        cout << "No speaker found with topic containing: " << key << endl;
    }
}

int main() {
    const int SIZE = 10;
    Speaker s[SIZE];

    int choice;

    do {
        cout << "\n=== SPEAKERS BUREAU MENU ===\n";
        cout << "1. Enter / Edit speaker info\n";
        cout << "2. Display all speakers\n";
        cout << "3. Search speakers by topic\n";  // <-- added
        cout << "4. Exit\n";
        cout << "Choice: ";
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
                if (s[i].name != "")  // only display filled entries
                    display(s[i], i);
            }
        }

        else if (choice == 3) {
            searchTopic(s, SIZE);
        }

    } while (choice != 4);

    return 0;
}
