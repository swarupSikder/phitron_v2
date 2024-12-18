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
    cin.getline(s1.name, 100);
    cin >> s1.roll >> s1.gpa;

    //to avoid the extra (enter)
    cin.ignore();

    cin.getline(s2.name, 100);
    cin >> s2.roll >> s2.gpa;
    
    cout<< s1.name <<" "<< s1.roll <<" "<< s1.gpa <<endl;
    cout<< s2.name <<" "<< s2.roll <<" "<< s2.gpa <<endl;

    return 0;
}