/*
1 2 3 4 5
2     5
3   5
4 5
5
*/
#include<iostream>
using namespace std;
void numerical_hollow_inverted_half_pyramid(int n){
    for(int i=1;i<=n;i++){
        if(i==1)
    for(int i=1;i<=n;i++){
    cout<<i<<" ";
    }
    else
        for(int j=n-1;j>=i;j--){
            if(i==j )
        cout<<i<<" ";
        else
        cout<<" ";
        }
        cout<<endl;
    }
    
}
int main(){
    cout<<"Enter Number of Row:";
    int n;
    cin>>n;
    numerical_hollow_inverted_half_pyramid(n);
    return 0;
}
