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

    Student(int r, int c, double g){
        roll = r;
        cls = c;
        gpa = g;
    }
};

int main(){
    Student s1(45, 5, 3.36);
    Student s2(55, 5, 4.58);

    cout<< s1.roll <<" "<< s1.cls <<" "<< s1.gpa <<endl;
    cout<< s2.roll <<" "<< s2.cls <<" "<< s2.gpa <<endl;
    
    
    return 0;
}