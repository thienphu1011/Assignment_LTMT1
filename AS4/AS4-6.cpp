#include <iostream>
using namespace std;

int main (){
    const double charges =10;
    double balance;
    cout << "Balance :"<<endl;
    cin >>balance;
    int checks;
    double plus;
    cin >> checks;
    switch (checks /10){
        case (0):case(1):
        cout <<"$.10"<<endl;
        plus =charges + checks*0.10;
        break;
        case(2):case(3):
        cout <<"$.08"<<endl;
        plus =charges +checks*0.08;
        break;
         case(4):case(5):
        cout <<"$.06"<<endl;
        plus =charges +checks*0.06;
        break;
         default :
        cout <<"$.04"<<endl;
        plus =charges +checks*0.04;
        
        
    }
    if (balance<0) {
        cout << "The account is overdrawn "<<endl;
    }
    else if (balance <400){
        cout <<"Bank's service fees for the month "<<plus+15<<endl;
    }
    else {
        cout <<"bank's service fees for the month :"<<plus<<endl;
    }
    


    return 0;
}
