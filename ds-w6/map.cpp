//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string, int> mp;
    mp["tamim"] = 2;
    mp["ramim"] = 5;
    mp["shamim"] = 50;

    for(auto it = mp.begin(); it!=mp.end() ;it++){
        cout<< it->first <<" "<< it->second <<endl;
    }
    return 0;
}