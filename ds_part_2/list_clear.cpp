//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> myList = {10,20,30,40};

    //before clear
    cout<< "before clear, listSize = " << myList.size() <<endl;

    //clear
    myList.clear();

    //after clear
    cout<< "after clear, listSize = " << myList.size() <<endl;

    return 0;
}