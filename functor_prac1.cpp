#include<iostream>
using namespace std;
class functorOne{
    public:
    bool operator()(int a,int b){
        return a>b;
    }
};
int main(){
    functorOne cmp;
    if(cmp(10,15)==true){
        cout<<"10 is greater than 5";
    }
        else{
            cout<<"10 is less than 5";
        }
        return 0;
    }
