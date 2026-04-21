#include<iostream>
using namespace std;
#include<vector>
int mountain_peak(vector<int> &nums){
    int s=0;
    int e=nums.size()-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
  cout<<"first"<<endl;
            return nums[mid];
        }
        else if(nums[mid]<nums[mid+1] && mid+1<nums.size()){
            s=mid+1;
            cout<<"Second"<<endl;
        }
        else {
            e=mid-1;
            cout<<"third"<<endl;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int main(){
    vector<int> nums={6};
    cout<<mountain_peak(nums);
    return 0;
}