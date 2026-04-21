#include<iostream>
using namespace std;
#include<array>
#include<algorithm>
int main(){
    int arr[7]={10,20,30,40,50,60,70};
    for(int a:arr){
        cout<<a<<endl;
    }
    cout<<sizeof(arr)/sizeof(arr[0]);
    return 0;
}