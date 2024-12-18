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

    //actual reverse using swap (data manipulation)
    for(int i=0, j=n-1; i<j ;i++, j--){
        Student temp = student[i];
        student[i] = student[j];
        student[j] = temp;
    }

    //output
    for(int i=0; i<n ;i++){
        cout<< student[i].name <<" "<< student[i].roll <<" "<< student[i].marks <<endl;;
    }
    
    return 0;
}