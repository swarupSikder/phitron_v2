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

bool cmp(Student l, Student r){
    if(l.marks==r.marks){
        return (l.roll < r.roll);
    }
    else{
        return (l.marks > r.marks);
    }
}

int main(){
    int n;
    cin>> n;

    Student student[n];
    for(int i=0; i<n ;i++){
        cin>> student[i].name >> student[i].roll >> student[i].marks;
    }

    //sort
    sort(student, student+n, cmp);

    //output
    for(int i=0; i<n ;i++){
        cout<< student[i].name <<" "<< student[i].roll <<" "<< student[i].marks <<endl;;
    }
    
    return 0;
}