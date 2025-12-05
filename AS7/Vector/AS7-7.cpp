#include <iostream>
#include <vector>
#include <string>
using namespace std;

char grade(double avg) {
    if (avg >= 90) return 'A';
    if (avg >= 80) return 'B';
    if (avg >= 70) return 'C';
    if (avg >= 60) return 'D';
    return 'F';
}

int main() {
    vector<string> name(5);
    vector<vector<double>> score(5, vector<double>(4));
    vector<char> letter(5);

    for (int i = 0; i < 5; i++) {
        cin >> name[i];
        double sum = 0;

        for (int j = 0; j < 4; j++) {
            do cin >> score[i][j];
            while (score[i][j] < 0 || score[i][j] > 100);
            sum += score[i][j];
        }

        letter[i] = grade(sum / 4);
        cout << name[i] << " avg=" << sum/4 << " grade=" << letter[i] << endl;
    }
}
