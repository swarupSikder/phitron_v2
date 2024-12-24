//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a = {10,20,30};
    list<int> myList(a.begin(), a.end());
    
    for(int n: myList){
        cout<< n <<endl;
    }

    return 0;
}