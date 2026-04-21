#include<iostream>
using namespace std;
#include<vector>
int find_pivot(vector<int>&nums){
  int s=0;
  int e=nums.size()-1;
  int mid=s+(e-s)/2;
  while(s<=e){
    
    if(nums[mid]>nums[mid+1] && mid+1<nums.size()){
        return nums[mid];
    }
    else if(nums[mid]>nums[nums.size()-1]){
        s=mid+1;
    }
    else{
        e=mid-1;
        
    }
    mid=s+(e-s)/2;
  }
    return -1;
}

int main(){
    vector<int>nums={6};
    int ans=find_pivot(nums);
    cout<<"Pivot Found:"<<ans;
    return 0;
}