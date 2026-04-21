#include<iostream>
using namespace std;
void rotate_array(int arr[],int n,int times){
    times=times%n;
    int temp[times];
    int last_index=n-1;
    for(int i=times-1;i>=0;i--){
        temp[i]=arr[last_index];
        last_index--;
    }
    for(int i=n-1;i>=times;i--){
        arr[i]=arr[i-times];
    }
    for(int i=0;i<times;i++){
        arr[i]=temp[i];
    }
    cout<<"Shifted Elements of Array:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
    int main(){
        cout<<"Enter no. of element in array:";
        int n;
        cin>>n;
        int arr[n];
        cout<<"Enter for Element:";
        for(int i=0;i<n;i++){
            cout<<"Enter element:("<<i<<"):";
            cin>>arr[i];
        }
cout<<"Enter no. of times wants to shift:";
int times;
cin>>times;
rotate_array(arr,n,times);
return 0;
    }

