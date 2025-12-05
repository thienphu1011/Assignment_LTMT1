#include <iostream>
using namespace std;

struct Weather {
    double rainfall;
    double highTemp;
    double lowTemp;
    double avgTemp;
};


void getData(Weather &w) {
    cout << "Rainfall: ";
    cin >> w.rainfall;

    do {
        cout << "High temperature (-100 to 140): ";
        cin >> w.highTemp;
    } while (w.highTemp < -100 || w.highTemp > 140);

    do {
        cout << "Low temperature (-100 to 140): ";
        cin >> w.lowTemp;
    } while (w.lowTemp < -100 || w.lowTemp > 140);

    w.avgTemp = (w.highTemp + w.lowTemp) / 2.0;
}

int main() {
    const int SIZE = 12;
    Weather data[SIZE];

    // Input data
    for (int i = 0; i < SIZE; i++) {
        cout << "\n--- Month " << i + 1 << " ---\n";
        getData(data[i]);
    }

    double totalRain = 0;
    double highest = -1000;
    double lowest = 1000;
    int highMonth = 0, lowMonth = 0;

    // Calculations
    for (int i = 0; i < SIZE; i++) {
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

    cout << "\nTotal rainfall: " << totalRain;
    cout << "\nAverage rainfall: " << totalRain / SIZE;

    double sumAvg = 0;
    for (int i = 0; i < SIZE; i++)
        sumAvg += data[i].avgTemp;

    cout << "\nAverage monthly temperature: " << sumAvg / SIZE;
    cout << "\nHighest temp: " << highest << " (Month " << highMonth + 1 << ")";
    cout << "\nLowest temp : " << lowest << " (Month " << lowMonth + 1 << ")\n";

    return 0;
}
