//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> myList = {10,20,30,20,50};

    //find
    auto it = find(myList.begin(), myList.end(), 50);
    (it==myList.end())? std::cout<< "Not Found" <<endl : std::cout<< "Found" <<endl;

    return 0;
}