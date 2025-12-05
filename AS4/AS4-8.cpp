#include <iostream>
using namespace std;

int main() {
    double calories, fatGrams;

    cout << "Enter the number of calories: ";
    cin >> calories;
    cout << "Enter the number of fat grams: ";
    cin >> fatGrams;

    // Input validation
    if (calories <= 0 || fatGrams < 0) {
        cout << "Error: Calories must be > 0 and fat grams >= 0." << endl;
        return 1;
    }

    double fatCalories = fatGrams * 9;

    if (fatCalories > calories) {
        cout << "Error: Calories from fat cannot exceed total calories." << endl;
        return 1;
    }

    double percentage = (fatCalories / calories) * 100;

    cout << "Percentage of calories from fat: " << percentage << "%" << endl;

    if (percentage < 30) {
        cout << "This food is low in fat." << endl;
    }

    return 0;
}
