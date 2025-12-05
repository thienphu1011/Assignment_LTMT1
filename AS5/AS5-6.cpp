#include <bits/stdc++.h>
using namespace std;

void solve(){
int guess;int n; int count;
srand(static_cast<unsigned>(time(nullptr)));
int h=rand()%100+1 ;
cout <<h;
do {
cout <<"Guess what the number is: "; 
cin >>guess;
count++;

    if (h>guess){
        cout <<"Too low ,try again"<<endl;
        
    }
        else if (h<guess){
            cout <<"To high, try again"<<endl;
            
        }
        else{
            cout<<"That right"<<endl;
            cout <<"The number is :"<<h;
            
        }
    }
    while (guess!=h);
}


int main() {
    solve();
    
    return 0;
}
