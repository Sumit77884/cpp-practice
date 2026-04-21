#include<iostream>
using namespace std;

int main(){
    int m;
 int n;
    cout<<"Enter no. of row:";
cin>>m;
cout<<"Enter no. of coloumn:";
cin>>n;
int arr[m][n];
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<"Enter element:"<<i<<j<<":";
        cin>>arr[i][j];
    }
}
cout<<"Elements rowwise:"<<endl;
for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
cout<<"Element columnwise:"<<endl;
        for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }


return 0;

}