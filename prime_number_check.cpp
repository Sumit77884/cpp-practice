#include<iostream>
using namespace std;
bool check_prime(int n){
    for(int i=2;i<n-1;i++){
        if(n%i==0){
            return false;
        }
        
    }
        return true;
    }

int main(){
    int n;
    cout<<"Enter the number to check wheather no. is prime or not: ";
    cin>>n;
    bool prime=check_prime(n);
    if(prime){
        cout<<"The number is prime";
    }
    else{
        cout<<"The number is not prime";
    }
    return 0;
}