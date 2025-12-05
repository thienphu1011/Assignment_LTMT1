#include <bits/stdc++.h>
using namespace std;

double getSales(const string& name){
    double s;
    do {
        cout << "Enter sales for "<<name<<": ";
        if (!(cin>>s)) return 0;
    }
    while (s<0);
    return s;


}

void findHighest(double ne, double se,double nw,double sw){
    vector<pair<string,double>> v={{"Northeast",ne},{"Southeast",se},{"Northwest",nw},{"Southwest",sw}};
    auto best=max_element(v.begin(),v.end(),[](auto&a,auto&b){return a.second<b.second;});
 cout << best->first << " has the highest sales: $" << fixed << setprecision(2) << best->second << "\n";
}


int main() {
    double ne=getSales("Northeast"), se=getSales("Southeast"), nw=getSales("Northwest"), sw=getSales("Southwest");
    findHighest(ne,se,nw,sw);
    return 0;
}