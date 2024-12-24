//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> myList = {10,20,30,40};

    //before clear
    (myList.empty())? std::cout<< "Empty" <<endl : std::cout<< "Not empty" <<endl;
    cout<< "before clear, listSize = " << myList.size() <<endl;

    //clear
    myList.clear();

    //after clear
    (myList.empty())? std::cout<< "Empty" <<endl : std::cout<< "Not empty" <<endl;
    cout<< "after clear, listSize = " << myList.size() <<endl;

    return 0;
}