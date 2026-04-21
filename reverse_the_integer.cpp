#include<iostream>
using namespace std;
int reverseTheNumber(int num){
    int reverse = 0;
    while(num>0){
        int lastDigit = num%10;
        reverse = reverse*10 + lastDigit;
        num = num/10;
    }
    return reverse;
}
int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    cout<<"The reverse of the number is:"<<reverseTheNumber(num);
    return 0;
}