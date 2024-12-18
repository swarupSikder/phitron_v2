//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    char name[100];
    int roll;
    double gpa;
};

int main(){
    Student student;
    student.roll = 76;
    student.gpa = 3.26;
    char temp[100] = "Swarup";
    strcpy(student.name, temp);

    cout<< student.name <<" "<< student.roll <<" "<< student.gpa <<endl;
    
    return 0;
}