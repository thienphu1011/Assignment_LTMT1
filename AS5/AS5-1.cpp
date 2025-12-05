#include <bits/stdc++.h>
using namespace std;

void solve(int n ){
    cin >>n;
    int s;
    s=0;
    for (int  i=1; i <=n ; i++ ){
        s+=i;
    }
    cout <<s<<endl;
}
    

int main() {
    solve(50);
    
    return 0;
}
