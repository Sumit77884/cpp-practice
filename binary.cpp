#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int binary_search(vector <int>& arr,int target){
    int n=arr.size();
    int s=0;
    int l=n-1;
    int mid=(s+l)/2;
    while(s<=l){
if(arr[mid]==target){
    return mid;
}
if(mid<target){
    s=mid+1;
}
else if(mid>target){
    l=mid-1;
}
mid=(s+l)/2;
    }
return -1;
}
int main(){
    
    int size;
    cout<<"Enter size:";
    cin>>size;
    vector <int> arr(size);
    cout<<"Enter Elements of array:"<<endl;
    for(int i=0;i<size;i++){
        cout<<"Enter Element:";
        cin>>arr[i];
    }
    cout<<"Enter target:";
    int target;
    cin>>target;
    int ans=binary_search(arr,target);
    if(ans!=-1)
    cout<<"Found at index:"<<ans;
    else
    cout<<"Element Not Found";
    return 0;
}

