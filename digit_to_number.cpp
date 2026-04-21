#include<iostream>
using namespace std;
    int createNumberUsingDigits(int numofDigits){
    int num =0;
    for(int i=0;i<numofDigits;i++){
        cout<<"Enter the digit: ";
        int digit;
        cin>>digit;
        num = num*10 + digit;
    }
    return num;
}
int main(){
    int numofDigits;
    cout<<"Enter the number of digits: ";
    cin>>numofDigits;
    cout<<"The number is: "<<createNumberUsingDigits(numofDigits);
    return 0;
}