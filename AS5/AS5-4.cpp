#include <bits/stdc++.h>
using namespace std;

void solve( double speed , double time ){
    double distance;

    
    cout <<"What is the speed of the vehicle in mph ?"; cin >> speed;
    cout <<"How many hours has it traveled ?"; cin >> time;
    cout <<"Hour Distance traveled"<<endl;
    cout<<"---------------------------"<<endl;
    for(int i=1; i<=time ;i++){
        distance=speed*i;
        cout <<distance<<endl;
    }
}
    

int main() {
    solve(40,3);
    
    return 0;
}
