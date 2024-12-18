//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    int math;
    int eng;

    Student (string name, int roll, int math, int eng) {
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->eng  = eng;
    }

    void hello(){
        cout<< "Hello from " << name <<endl; 
    }

    void total() {
        cout<< "total marks of " << name << " = " << math+eng <<endl;
    }

};

int main(){
    Student* s1 = new Student("Sarah Islam", 23, 85, 92);
    s1->total();
    delete s1;

    Student* s2 = new Student("Abdullah", 10, 65, 95);
    s2->total();
    delete s2;
    
    return 0;
}