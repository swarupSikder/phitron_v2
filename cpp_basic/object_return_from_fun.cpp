//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    int roll;
    int cls;
    double gpa;

    // Student(int roll, int cls, double gpa){
    //     (*this).roll = roll;
    //     (*this).cls = cls;
    //     (*this).gpa = gpa;
    // }

    Student(int roll, int cls, double gpa){
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student fun(){
    Student s2(55, 5, 4.58);
    return s2;
}

int main(){
    Student s1(45, 5, 3.36);
    Student s2 = fun();

    cout<< s1.roll <<" "<< s1.cls <<" "<< s1.gpa <<endl;
    cout<< s2.roll <<" "<< s2.cls <<" "<< s2.gpa <<endl;
    
    
    return 0;
}