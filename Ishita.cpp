#include <iostream>
using namespace std;
int triangle (int n){
    for(int i=1; i<=n; i++){
        for(int j=1;j<=i;j++){
            if(i==1 || i==2 || i==n){
                cout<<j;
            }
            else{
                if(i==j || j==1){
                    cout<<j;
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter the value of n ";
    cin>>n;
    triangle(n);
}