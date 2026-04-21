#include<iostream>
using namespace std;

void hallow_half_pyramid(int n)
{
    for(int i=1;i<n;i++){
        if(i==1)
        cout<<i;
        else
        for(int j=1;j<=i;j++){
            
            if (j==i){
            
            cout<<j<<" ";
        }
            if(j==1 )
            cout<<j<<" ";
            else
            cout<<"  ";
        }
cout<<endl;
        }
        for(int i=1;i<=n;i++)
cout<<i<<" ";
        
    }
   
int main(){
    cout<<"Enter number of row:";
    int n;
    cin>>n;
    hallow_half_pyramid(n);
    return 0;
}