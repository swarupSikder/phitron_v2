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

int main(){
    Student* s1 = new Student(50, 5, 4.58);
    cout<< s1->roll <<" "<< s1->cls <<" "<< s1->gpa <<endl;
    
    return 0;
}