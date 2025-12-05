#include <iostream>
using namespace std;

void solve() {
    int a;
    cout <<"Enter a number within the range 1 to 10: \n";
    cin >> a;
    switch(a)
    {
        case(1): cout << "Roman Numeral Converter: I" << endl; break;
        case(2): cout << "Roman Numeral Converter: II" << endl; break;
        case(3): cout << "Roman Numeral Converter: III" << endl; break;
        case(4): cout << "Roman Numeral Converter: IV" << endl; break;
        case(5): cout << "Roman Numeral Converter: V" << endl; break;
        case(6): cout << "Roman Numeral Converter: VI" << endl; break;
        case(7): cout << "Roman Numeral Converter: VII" << endl; break;
        case(8): cout << "Roman Numeral Converter: VIII" << endl; break;
        case(9): cout << "Roman Numeral Converter: IX" << endl; break;
        case(10): cout << "Roman Numeral Converter: X" << endl; break;
        default: cout << "Error: Please enter a number between 1 and 10.";
    
}
}


int main() {

solve();
return 0;
}