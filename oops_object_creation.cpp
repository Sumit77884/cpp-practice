#include<iostream>
using namespace std;
#include<string>
class Student{
    public:
    //Attribute
    int id;
    int age;
    string name;
    int nos;
    //ctor: Default ctor
    Students(){
        cout<<"Student Default ctor called"<<endl;
    }
    // ctor:Parameterised Default ctor
    Student(int id,int age,string name,int nos){
        cout<<"Student Parameterised ctor called"<<endl;
        this->id=id;
        this->age=age;
        this->name=name;
        this->nos=nos;
        cout<<id<<endl<<age<<endl<<name<<endl<<nos<<endl;
    }
    Student(const Student &srcobj){
        cout<<"Copy constructor"<<endl;
        this->id=srcobj.id;
        this->age=srcobj.age;
        this->name=srcobj.name;
        this->nos=srcobj.nos;
    }
        
    //Behavoir /Methods/Functions
    void study(){
        cout<<this->name<<endl;
    }
    void sleep(){
        cout<<"Student is sleeping"<<endl;
    }
    void bunk(){
        cout<<"Student is bunking."<<endl;
    }
    //dtor:Student default dtor;
    ~ Student(){
        cout<<"Student Default dtor called"<<endl;
    }
};
int main(){
    // Student A(1,15,"Ranu",6);
    // Student B(2,16,"Ritu",7);
    // Student C(3,17,"Manashvi",8);
    // Student D(4,18,"Lakshita",9);
// Student A;
// A.id=1;
// A.age=15;
// A.name ="Renu";
// A.nos=6;
// A.study();
// Student B;
// B.id=1;
// B.age=15;
// B.name ="RITU";
// B.nos=6;
// B.study();
//Student E=A;
// Student E(A);
// cout<<E.name<<" "<<E.age<<" "<<E.id<<endl;
//Dynamic allocation or Student pointer
Student *A =new Student(1,14,"Babban",7);
cout<<A->name<<endl;
cout<<A->age<<endl;
A->study();
 delete A;
    return 0;
}