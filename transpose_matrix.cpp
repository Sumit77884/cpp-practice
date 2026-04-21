#include<iostream>
#include<algorithm>
using namespace std;
void transpose_matrix(int arr[3][3],int row,int col,int times){
    int temp=0;
    for(int k=0;k<times;k++){
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(j>i){
                //temp =arr[i][j];
                //arr[i][j]=arr[j][i];
                //arr[j][i]=temp;
               swap(arr[i][j],arr[j][i]);
            }

        }
    }
        cout<<"Element of Array:"<<endl;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cout<<arr[i][j]<<" ";
                
            }
            cout<<endl;

        }
    }
    
}
int main(){
    int times;
    cout<<"Enter no. of times you wants to transpose a matrix:";
    cin>>times;
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Enter Element("<<i<<j<<"):";
            cin>>arr[i][j];
        }
    }
    transpose_matrix(arr,3,3,times);
    return 0;
}