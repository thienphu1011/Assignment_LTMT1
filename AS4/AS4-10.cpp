#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int choice;
    const double PI = 3.14159;

    cout << "Geometry Calculator\n";
    cout << "1. Calculate the Area of a Circle\n";
    cout << "2. Calculate the Area of a Rectangle\n";
    cout << "3. Calculate the Area of a Triangle\n";
    cout << "4. Quit\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    if (choice == 1) {
        double radius;
        cout << "Enter the radius of the circle: ";
        cin >> radius;

        if (radius < 0) {
            cout << "Error: Radius cannot be negative." << endl;
        } else {
            double area = PI * radius * radius;
            cout << fixed << setprecision(2);
            cout << "The area of the circle is: " << area << endl;
        }
    }
    else if (choice == 2) {
        double length, width;
        cout << "Enter the length of the rectangle: ";
        cin >> length;
        cout << "Enter the width of the rectangle: ";
        cin >> width;

        if (length < 0 || width < 0) {
            cout << "Error: Length and width cannot be negative." << endl;
        } else {
            double area = length * width;
            cout << fixed << setprecision(2);
            cout << "The area of the rectangle is: " << area << endl;
        }
    }
    else if (choice == 3) {
        double basez, height;
        cout << "Enter the base of the triangle: ";
        cin >> basez;
        cout << "Enter the height of the triangle: ";
        cin >> height;

        if (basez < 0 || height < 0) {
            cout << "Error: Base and height cannot be negative." << endl;
        } else {
            double area = basez * height * 0.5;
            cout << fixed << setprecision(2);
            cout << "The area of the triangle is: " << area << endl;
        }
    }
    else if (choice == 4) {
        cout << "Exiting program. Goodbye!" << endl;
    }
    else {
        cout << "Error: Invalid menu choice. Please enter 1-4." << endl;
    }

    return 0;
}
