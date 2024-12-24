//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> myList = {10,20,30,20,50};

    //sort ASC list
    // myList.sort();

    //sort DESC list
    myList.sort(greater<int>());

    //print
    for(int n: myList){
        cout<< n <<" ";
    }

    return 0;
}