#include<iostream>
using namespace std;
void rotate_array(int arr[],int n,int shift){
    int temp[shift];
    for(int i=0;i<shift;i++){
        temp[i]=arr[n-i];
    }
    int j=0;
    for(int i=shift-1;i<n;i++){
        arr[shift-1+i]=arr[j];
        j++;
    }
    for(int i=0;i<shift;i++){
        arr[i]=temp[i];
    }
}
/*

void rotateArray(int arr[], int size, int n) {
    //size -> size of array
    //n -> refers to the number of elemnts by which we have to shift
    n = n % size;
    
    if(n == 0) {
        //no need to do anything
        return ;
    }

    //step1: copy last n elements into a temp array
    int temp[10000];
    int index = 0;
    for(int i = size-n; i<size; i++) {
        temp[index] = arr[i];
        index++;
    }

    //step2: shift array elemnts by finalShift places

    for(int i=size-1; i>=0; i--) {
        if(i-n >= 0 ) {
            arr[i] = arr[i-n];
        }
    }

    //step3: copy temp elements into original array 
    for(int i=0; i<n; i++) {
        arr[i] = temp[i];
    }

}
    */
int main(){
    int n;
    cout<<"Enter no. of element in array:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array:"<<endl;
    for(int i=0; i<n; i++) {
        cout<<"Enter element("<<i<<"):";
        cin>>arr[i];
    }
    int d;
    cout<<"Enter no. of rotations:";
    cin>>d;
 rotate_array(arr,n,d);
 cout<<"Array after rotation:"<<endl;
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
