#include<iostream>
using namespace std;
int reverse_number(int n){
    int revern=0;
    while(n>0){
       int rever=n%10;
        revern=revern*10+rever;
       n= n/10;
    }
    return revern;
}
    int main(){
        cout<<"Enter the number:";
        int n;
        cin>>n;
        cout<<"Reverse of number = "<<reverse_number(n);
        return 0;
    }