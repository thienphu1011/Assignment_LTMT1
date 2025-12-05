#include <iostream>
using namespace std;

int main() {
const double price =99.0;
    cout <<"Enter a number of units  : \n";
    int units;
    double discount =0.0;
    cin >> units;

if (units <=0){
    cout <<"Error :Number of units is greater than 0.";
    return 1;
}

    
    switch(units/10)
    {
        case (0):
        discount =0.0;
        break;

        case(1):
        cout << "Discount 20%" << endl; 
        discount =0.2;
               
        break;
        case(2): case(3) :case(4):
        
        cout << "Discount 30%" << endl;
         discount =0.3;
          break;
        case(5):case(6):case(7):case(8):case(9):
        
         cout << "Discount 40%" << endl;
         discount =0.4;
          break;
        
        default: cout << "Discount 50%";
        discount =0.5;
    
}

cout <<"Total cost purchase :"<< units*discount<<endl;
return 0;
}