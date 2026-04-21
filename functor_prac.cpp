#include<iostream>
using namespace std;
class functorOne{
    public:
    bool operator()(int a,int b){
        ///descending order me cmp chahte ho
        //if a>b->ture,a should be placed before b
        //that's why decending order banata h
        return a>b;
    }

};
int main(){
    functorOne cmp;
    if(cmp(10,5)==true){
        cout<<"10 is greater than 5"<<endl;
    }
    else {
        cout<<"10 is greater than 5 "<<endl;
    }
    return 0;
}