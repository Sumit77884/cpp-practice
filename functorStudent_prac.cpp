#include<iostream>
using namespace std;
class Student{
    public:
    int marks;
    string name;
    Student(){

    }
    Student(int m,string n){
        this->marks=m;
        this->name=n;
    }
};
//functor
class StudentCompar