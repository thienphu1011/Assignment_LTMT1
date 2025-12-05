#include <iostream>
#include <string>
using namespace std;

int main (){
    
    string name1,name2,name3;
    cout <<"Name of runner 1 :";
    getline(cin,name1);
    cout <<"Name of runner 2 :";
    getline(cin,name2);
    cout <<"Name of runner 3 :";
    getline(cin,name3);
    unsigned long long  time1,time2,time3 ;
    
    cout <<"Time of runner 1 :";
    cin>>time1;
    cout <<"Time of runner 2 :";
    cin>>time2;
    cout <<"Time of runner 3 :";
    cin>>time3;
    if (time1 >= time2 && time1 >= time3) {
        cout << "Rank 3: " << name1 << endl;
        if (time2 >= time3) {
            cout << "Rank 2: " << name2 << endl;
            cout << "Rank 1: " << name3 << endl;
        } else {
            cout << "Rank 2: " << name3 << endl;
            cout << "Rank 1: " << name2 << endl;
        }
    }
    else if (time2 >= time1 && time2 >= time3) {
        cout << "Rank 3: " << time2 << endl;
        if (time1 >= time3) {
            cout << "Rank 2: " << name1 << endl;
            cout << "Rank 1: " << name3 << endl;
        } else {
            cout << "Rank 2: " << name3 << endl;
            cout << "Rank 1: " << name1 << endl;
        }
    }
    else { // c is largest
        cout << "Rank 3: " << name3 << endl;
        if (time1 >= time2) {
            cout << "Rank 2: " << name1 << endl;
            cout << "Rank 1: " << name2 << endl;
        } else {
            cout << "Rank 2: " << name2 << endl;
            cout << "Rank 1: " << name1 << endl;
        }
    } 
    return 0;
}
