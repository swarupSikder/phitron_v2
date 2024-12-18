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
    Student s1(55, 5, 4.58);
    Student *p = &s1;
    return p;
}

int main(){
    Student* s1 = fun();
    //this is indicating a static memory
    //when the fun() is over, the values are automatically deleted
    //it may show exact value for somewhile
    //but actually it will show garbage value 
    //so we need dynamic object

    //cout<< (*s1).roll <<" "<< (*s1).cls <<" "<< (*s1).gpa <<endl;
    cout<< s1->roll <<" "<< s1->cls <<" "<< s1->gpa <<endl;
    
    return 0;
}