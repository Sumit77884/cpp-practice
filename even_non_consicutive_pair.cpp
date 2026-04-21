#include<iostream>
using namespace std;
#include<vector>
int unpair_element(vector<int>& nums){
int s=0;
int e=nums.size()-1;
int mid=s+(e-s)/2;
while(s<=e){
    if(nums[mid]==nums[mid-1]||nums[mid]==nums[mid+1]){
        if(mid%2==0){
            e=mid-1;
            cout<<"First ";
        }
        else{
        s=mid+1;
        cout<<"Second ";
        }
        
    }
    else{
        cout<<"Third ";
    return nums[mid];
    }

    mid=s+(e-s)/2;
    cout<<"Forth ";

}
    return -1;
}
int main(){
    vector<int>nums={4,4,3,6,6,3,3,8,8,66,66};
    int ans=unpair_element(nums);
    cout<<ans;
    return 0;
}