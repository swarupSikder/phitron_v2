//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> myList = {10,20,30,20,50};

    //replace
    replace(myList.begin(), myList.end(), 20, 100);

    //print
    for(int n: myList){
        cout<< n <<endl;
    }

    return 0;
}