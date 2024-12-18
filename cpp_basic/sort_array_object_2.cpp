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

//compare function
bool cmp(Student l, Student r){
    if(l.marks < r.marks){
        return true;
    }
    else if(l.marks > r.marks){
        return false;
    }
    //when marks become equal sort by roll
    else{
        if(l.roll < r.roll){
            return true;
        }
        else{
            return false;
        }
    }
}

int main(){
    int n;
    cin>> n;

    Student student[n];
    for(int i=0; i<n ;i++){
        cin>> student[i].name >> student[i].roll >> student[i].marks;
    }

    //sort with custom compare function
    sort(student, student+n, cmp);

    //output
    for(int i=0; i<n ;i++){
        cout<< student[i].name <<" "<< student[i].roll <<" "<<student[i].marks <<endl;
    }
    
    return 0;
}