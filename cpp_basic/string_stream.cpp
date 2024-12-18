//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    cout<< s <<endl;

    stringstream ss(s);
    string word;
    // ss >> word;
    // cout<< word << endl;


    //word Count
    int countWord=0;

    while(ss >> word){
        cout<< word << endl;
        countWord++;
    }

    cout<< countWord <<endl;
    
    return 0;
}