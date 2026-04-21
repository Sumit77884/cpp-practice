#include<iostream>
#include<vector>
using namespace std; 
#include<stack>
#include<algorithm>
void findNextSmaller(vector<int> nums,vector<int> &ans){
    stack<int> st;
    st.push(-1);
    for(int i=8;i>=0;i--){
        while(st.top()>nums[i]){
            st.pop();
        }
        ans[i]=st.top();
        st.push(nums[i]);
    }
}
void findPrevSmaller(vector<int> nums,vector<int> &ans){
    stack<int> st;
    st.push(-1);
    for(int i=0;i<9;i++){
        while(st.top()>nums[i]){
            st.pop();
        }
        ans[i]=st.top();
        st.push(nums[i]);
    }
}

int main(){
 vector<int> nums={2,4,1,3,9,6,8,7,5};
 vector<int> ans(9);
 findNextSmaller(nums,ans);
 cout<<"Ans After NextSmaller:"<<endl;
for(int i=0;i<9;i++){
    cout<<ans[i]<<" ";
}
cout<<endl;
findPrevSmaller(nums,ans);
cout<<"Ans After PrevSmaller:"<<endl;
for(int i=0;i<9;i++){
    cout<<ans[i]<<" ";
}
    return 0;
}