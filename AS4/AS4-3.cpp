#include <iostream>
using namespace std;

void solve() {
    double a,b,c,d;
    cout <<"Length and width of rectangle 1 \n";

    cin >> a>>b;
    cout <<"Length and width of rectangle 2 \n";
    cin >>c>>d;
    if ((a*b)>(c*d)) cout <<"Rectangle 1 > Rectangle 2"<<endl;
    else if (((a*b)<(c*d))){
        cout <<"Rectangle 2 > Rectangle 1"<<endl;
    }
    else   {
        cout <<"Rectangle 1=Rectangle 2"<<endl;

    }
}



int main() {

solve();
return 0;
}