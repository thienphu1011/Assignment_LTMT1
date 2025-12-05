#include <iostream>
using namespace std;

void solve() {
    
    double weight, height;
    cout << "Enter weight (in pounds) and height (in inches): " << endl;
    cin >> weight >> height;
    double BMI = weight * 703 / (height*height);
    if (BMI < 18.5)
       cout << "You are underweight." << endl;
    else if (BMI <= 25)
       cout << "You are optimal." << endl;
    else
       cout << "You are overweight." << endl;
    
}



int main() {

solve();
return 0;
}