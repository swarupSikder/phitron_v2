//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[] = {10,20,30};
    list<int> myList(a,a+3);
    
    for(int n: myList){
        cout<< n <<endl;
    }

    return 0;
}