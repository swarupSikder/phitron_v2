//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> myList(10,4);

    // for(auto it= myList.begin(); it!=myList.end() ;it++){
    //     cout<< *it <<endl;
    // }
    
    for(int n: myList){
        cout<< n <<endl;
    }

    return 0;
}