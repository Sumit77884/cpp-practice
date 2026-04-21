#include<iostream>
#include<vector>
using namespace std;
void bubble_sort(vector<int> &nums){
    int n=nums.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
            }
        }
    }
    cout<<"After bubble shorting:";
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
}
void selection_sort(vector<int> &nums){
    int n=nums.size();
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(nums[j]<nums[minIndex]){
                minIndex=j;
            }
            swap(nums[i],nums[minIndex]);

        }
    }
    cout<<endl<<"After selection shorting:";
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
}
}
void insertion_sort(vector<int> &nums){
    int n=nums.size();
    for(int i=1;i<n; i++){
        int key=nums[i];
        int j=i-1;
        while(j>=0 && nums[j]>key){
            nums[j+1]=nums[j];
            j--;
        }
        nums[j+1]=key;
    }
    cout<<endl<<"After insertion shorting:";
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
}
}

int main(){
    vector<int> nums ={6,5,7,8,9,1};
    bubble_sort(nums);
    //for(auto i: nums){
     //cout<<endl<<i<<" ";
    //}
    selection_sort(nums);
    insertion_sort(nums);

    return 0;
}