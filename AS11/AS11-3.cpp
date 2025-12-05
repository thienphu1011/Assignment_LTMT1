#include <iostream>
using namespace std;

struct Weather {
    double rainfall;
    double highTemp;
    double lowTemp;
    double avgTemp;
};

int main() {
    const int MONTHS = 12;
    Weather data[MONTHS];

    double totalRain = 0;
    double highest = -1000, lowest = 1000;
    int highMonth = 0, lowMonth = 0;

    for (int i = 0; i < MONTHS; i++) {
        cout << "Month " << i+1 << " rainfall: ";
        cin >> data[i].rainfall;

        do {
            cout << "High temp (-100 to 140): ";
            cin >> data[i].highTemp;
        } while (data[i].highTemp < -100 || data[i].highTemp > 140);

        do {
            cout << "Low temp (-100 to 140): ";
            cin >> data[i].lowTemp;
        } while (data[i].lowTemp < -100 || data[i].lowTemp > 140);

        data[i].avgTemp = (data[i].highTemp + data[i].lowTemp) / 2.0;

        totalRain += data[i].rainfall;

        if (data[i].highTemp > highest) {
            highest = data[i].highTemp;
            highMonth = i;
        }
        if (data[i].lowTemp < lowest) {
            lowest = data[i].lowTemp;
            lowMonth = i;
        }
    }

    cout << "\nTotal rainfall: " << totalRain << endl;
    cout << "Average rainfall: " << totalRain / MONTHS << endl;

    double sumAvg = 0;
    for (int i = 0; i < MONTHS; i++) sumAvg += data[i].avgTemp;

    cout << "Average of monthly temperatures: " << sumAvg / MONTHS << endl;
    cout << "Highest temperature month: " << highMonth+1 << endl;
    cout << "Lowest temperature month: " << lowMonth+1 << endl;

    return 0;
}
