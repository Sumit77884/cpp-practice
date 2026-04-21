#include<iostream>
using namespace std;
int last_first_seq_of_elem(int arr[],int n){
    while(i<j){
        
    }
    return 0;
}

int reverse_element(int arr[],int n){
    //arr[7]={10,20,30,40,50,60,70}
  // this code is for reversing the element of array
    for(int i=0;i<n/2;i++){
     int temp=0;
    temp=arr[i];
    arr[i]=arr[n-1-i];
    arr[n-1-i]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;


}
int main(){
    cout<<"Enter no. of element:";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element("<<i<<"):";
        cin>>arr[i];
    }
reverse_element(arr,n);
    return 0;

}