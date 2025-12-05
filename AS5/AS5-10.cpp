#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n=10;
    
        
    for (int  i=1; i <=n ; i++ ){
    for (int j=1; j<=i;j++){
        cout <<"+";
    }
        
    
    cout <<endl;
}
    cout<<endl;

    for (int i=n;i>=1;i--){
        for (int j=1;j<=i;j++){
            cout <<"+";
        }
        cout <<endl;
    }
}

int main() {
    solve();
    
    return 0;
}
