#include <bits/stdc++.h>
using namespace std;


double caculateRetail(double wholesale , double markuppercent){
    if (wholesale<0 || markuppercent <0){
        cout <<"Input Validation";
    }
    return wholesale*(1+ markuppercent/100);
}




int main() {
    double w,m;
    if (!(cin >>w>>m)) return 0;
    try{
    cout <<fixed <<setprecision(2)<<caculateRetail(w,m)<<endl;
    return 0;}
    catch(...){
        cout <<"Error"<<endl;
    }
}