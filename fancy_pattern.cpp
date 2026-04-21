#include<iostream>
using namespace std;
int fancy_pattern(int n){
    for(int i=0;i<=n;i++){
        int start_num_index=9-i;
        int num=i+1;
        int count_num = num;
        for(int j=1;j<=17;j++){
            if(j==start_num_index && count_num>0){
                    cout<<num;
                    start_num_index+=2;
                    count_num--;
                }
            
            else{
            cout<<"*";
        }
        }
        cout<<endl;
    }
    return 0;
}
int main(){
    int n;
    cout<<"Enter the no. of row:";
    cin>>n;
    fancy_pattern(n);
    return 0;
}