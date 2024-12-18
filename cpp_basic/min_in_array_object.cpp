//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    int marks;
};

int main(){
    int n;
    cin>> n;

    Student student[n];
    for(int i=0; i<n ;i++){
        cin>> student[i].name >> student[i].roll >> student[i].marks;
    }

    //new empty object
    Student mn;
    mn.marks = INT_MAX;
    for(int i=0; i<n ;i++){
        if(student[i].marks < mn.marks){
            mn = student[i];
        }
    }

    //output
    cout<< mn.name <<" "<< mn.roll <<" "<<mn.marks <<endl;
    
    return 0;
}