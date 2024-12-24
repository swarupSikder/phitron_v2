//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> myList1 = {1,2,3,4,5};
    list<int> myList2 = {10,50};

    myList1 = myList2;
    
    for(int n: myList1){
        cout<< n <<endl;
    }

    return 0;
}