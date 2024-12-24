//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> myList = {10,20,30,40};

    //insert
    int idx = 2;
    auto pos = next(myList.begin(), idx);   //pos as an iterator
    int val = 100;
    myList.insert(pos, val);

    //print
    for(int n: myList){
        cout<< n <<endl;
    }

    return 0;
}