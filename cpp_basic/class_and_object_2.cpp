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
    Student s1, s2;
    cin>> s1.name >> s1.roll >> s1.gpa;
    cin>> s2.name >> s2.roll >> s2.gpa;
    
    cout<< s1.name <<" "<< s1.roll <<" "<< s1.gpa <<endl;
    cout<< s2.name <<" "<< s2.roll <<" "<< s2.gpa <<endl;

    return 0;
}