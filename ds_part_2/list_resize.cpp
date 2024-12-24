//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> myList = {10,20,30,40};

    //myList.resize(5);
    myList.resize(5, 50);

    for(int n: myList){
        cout<< n <<endl;
    }

    return 0;
}