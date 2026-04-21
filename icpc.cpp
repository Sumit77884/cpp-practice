#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

void print(vector<int> &nums){
  int  n=nums.size();
  cout<<"Size:"<<n<<endl;
    for(int i=1;i<=n;i++){
        cout<<nums[i]<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    
    print(nums);
}