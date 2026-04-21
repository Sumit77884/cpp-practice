#include<iostream>
using namespace std;
pair<int,int> checkTwo(int arr[],int n, int target){
    pair<int,int> ans=make_pair(-1,-1);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]+arr[j]==target){
                ans.first=i;
                ans.second=j;
                return ans;
            }
        }
    }
}
    int main(){
        cout<<"Enter no. of element:";
        int n,target;
        cin>>n;
        cout<<"Enter target sum:";
        cin>>target;
        int arr[n];
        for(int i=0;i<n;i++){
            cout<<"Enter element("<<i<<"):";
            cin>>arr[i];
        }
        pair<int,int> result = checkTwo(arr,n, target);
        if(result.first != -1 && result.second !=-1){
            cout<<"pair found at indices: ("<< result.first << ", "<< result.second << ")";
        }
        else{
            cout<<"No pair found with the given target sum.";
        }
        return 0;
    }
    
