#include <bits/stdc++.h>
using namespace std;

void getJudgeData(double &x){
    do {
         cout<<"Score (0-10): ";
          if(!(cin>>x))
           return; 
    }
     while(x<0||x>10);
}
double findLowest(const array<double,5>& a){
     return *min_element(a.begin(),a.end());
     }
double findHighest(const array<double,5>& a){ 
    return *max_element(a.begin(),a.end()); 
}

void calcScore(const array<double,5>& a){
    double low=findLowest(a), high=findHighest(a), sum=accumulate(a.begin(),a.end(),0.0);
    double avg = (sum - low - high) / 3.0;
    cout << "Final score: " << fixed << setprecision(3) << avg << "\n";
}
int main(){
    array<double,5> s; 
    for(double& x: s) 
    getJudgeData(x);
    calcScore(s);
}
