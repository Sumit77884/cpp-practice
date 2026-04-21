#include<iostream>
#include<string>
using namespace std;
class Student{
    private:
    //Attributes
    int id;
    int age;
    string name;
    int nos;
    float *gpa;
    string gf;
    public:
    
    void sumitGpa(float a){
        //layer of authentication;
        *this-> gpa=a;
    }
    float ajitGpa() const{
        return *this->gpa;
    }
    float ajitAge() const {
        return this->age;
    }

    //All constructor are public
    Student(){
        cout<<"Student Default ctor called"<<endl;
    }
    Student(int id,int age,string name,int nos,float gpa,string gf){
        cout<<"Student Parameterised ctor called"<<endl;
        this->id=id;
        this->age=age;
        this->name=name;
        this->gpa=new float(gpa);
        this->gf=gf;
    }
    public:
    void gfchatting(){
        cout<<this->name<<" chatting with gf"<<endl;
    }
};
int main(){
    Student A(1,12,"Ranu",5,7.8,"Menu");
    A.gfchatting();
  // A.gpa=new float(8.9);
    
   cout<< A.ajitGpa()<<endl;
   A.sumitGpa(6.7);
   cout<<A.ajitGpa()<<endl;
   
   return 0;
}