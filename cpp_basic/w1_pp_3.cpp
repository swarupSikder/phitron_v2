//author:   Swarup Sikder
//judge:    ...
//problem:  ...
#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    char name[100];
	int roll;
	char section;
	double math_marks;
	int cls;

    Student(char name[], int roll, char section, double math_marks, int cls){
        strcpy(this->name, name);
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }

};

int main(){
    Student* s1 = new Student("Shahin Notir Pola", 12, 'a', 45.5, 10);
    Student* s2 = new Student("Opu Bhai", 13, 'a', 69, 10);
    Student* s3 = new Student("Ripon Vidu", 14, 'a', 100, 10);

    double mx = max(s1->math_marks, max(s2->math_marks, s3->math_marks));

    if(s1->math_marks==mx){
        cout<< s1->name <<endl;
    }
    else if(s2->math_marks==mx){
        cout<< s2->name <<endl;
    }
    else if(s3->math_marks==mx){
        cout<< s3->name <<endl;
    }
    
    
    return 0;
}