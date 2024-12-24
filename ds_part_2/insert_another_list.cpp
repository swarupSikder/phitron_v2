//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> myList = {10,20,30,40};
    list<int> myList2 = {100, 200};

    //insert
    int idx = 2;
    auto pos = next(myList.begin(), idx);   //pos as an iterator
    
    myList.insert(pos, myList2.begin(), myList2.end());

    //print
    for(int n: myList){
        cout<< n <<endl;
    }

    return 0;
}