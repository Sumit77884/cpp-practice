#include<iostream>
using namespace std;
bool check_prime(int n){
    for(int i=2;i<n;i++){
        if(i%n==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    for(int i=2;i<=n;i++){
    bool primeno=check_prime(i);
    if(primeno){
        cout<<i<<" ,";
    }
    }
    return 0;
}