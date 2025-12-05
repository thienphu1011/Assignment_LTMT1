#include <bits/stdc++.h>
using namespace std;

void solve(){
    ifstream inputFile("People.txt");
    if (!inputFile){
        cerr<<"Can't open People.txt"<<endl;
        
    }
     cout << "PRAIRIEVILLE POPULATION GROWTH\n";
    cout << "(each * represents 1,000 people)\n";
    int year=1900;
    int population;
    while (inputFile >>population){
        cout <<year<<" " ;
        
    
    for (int i=1 ; i<population /1000 ;i++){
        cout <<"*";

    }
    cout <<endl;
    year+=20;
}
inputFile.close();
}
    

int main() {
    solve();
    
    return 0;
}
