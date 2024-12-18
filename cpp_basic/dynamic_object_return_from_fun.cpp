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

    Student(int roll, int cls, double gpa){
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student* fun(){
    Student* s1 = new Student(55, 5, 4.58);
    return s1;
}

int main(){
    Student* s1 = fun();
    cout<< s1->roll <<" "<< s1->cls <<" "<< s1->gpa <<endl;
    
    return 0;
}