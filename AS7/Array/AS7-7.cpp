#include <iostream>
#include <string>
using namespace std;

char getGrade(double avg) {
    if (avg >= 90) return 'A';
    if (avg >= 80) return 'B';
    if (avg >= 70) return 'C';
    if (avg >= 60) return 'D';
    return 'F';
}

int main() {
    string name[5];
    double score[5][4];
    char grade[5];

    for (int i = 0; i < 5; i++) {
        cin >> name[i];
        double sum = 0;

        for (int j = 0; j < 4; j++) {
            do cin >> score[i][j];
            while (score[i][j] < 0 || score[i][j] > 100);
            sum += score[i][j];
        }

        double avg = sum / 4;
        grade[i] = getGrade(avg);
        cout << name[i] << " avg = " << avg << " grade = " << grade[i] << endl;
    }
}
