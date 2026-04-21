#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
void sort_0_1(vector <int> &nums){
    int n=nums.size();
    int f=0;
    int l=n-1;
    while(f<l){
        if(nums[f]==1 && nums[l]==0){
            swap(nums[f],nums[l]);
            f++;
            l--;
        }
        /*
        else if(nums[f]==0 && nums[l]==1){
            f++;
            l--;
        }
        else if(nums[f]==0 && nums[l]==0){
            f++;
        }
        else if(nums[f]==1 && nums[l]==1){
            l--;
        }
            */
           if(nums[f]==0)
           f++;
           if(nums[l]==1)
           l--;

    }

}
int main(){
    int n;
    cout<<"Enter no. of Element:";
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cout<<"Enter 0 or 1:";
        cin>>nums[i];
    }
    sort_0_1(nums);
for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
        
    }
    return 0;
}