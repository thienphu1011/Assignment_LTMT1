#include <iostream>
using namespace std;

void solve() {
    int a,b;
    cin >>a>>b;
    int max= (a>b) ? a:b;
    int min =(a<b) ? a:b;
    cout << max <<" is larger "<<endl;
    cout << min<< " is smaller" << endl;

}



int main() {

solve();
return 0;
}