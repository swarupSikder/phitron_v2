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

    // Student(int r, int c, double g){
    //     roll = r;
    //     cls = c;
    //     gpa = g;
    // }
};

int main(){
    Student s1;
    cin>> s1.roll >> s1.cls >> s1.gpa;
    cout<< s1.roll <<" "<< s1.cls <<" "<< s1.gpa <<endl;
    
    return 0;
}