//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> myList = {10,20,30,40,50};

    //delete a single index
    // int idx = 2;
    // auto pos = next(myList.begin(), idx);   //pos as an iterator
    // myList.erase(pos);

    //delete a part of the list
    myList.erase(next(myList.begin(), 2), next(myList.begin(), 4));

    //print
    for(int n: myList){
        cout<< n <<endl;
    }

    return 0;
}