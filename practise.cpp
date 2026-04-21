/*
class Solution{
 public:
 void crtmap(TreeNode* root,unordered_map<TreeNode*,TreeNode*> &parentMap){
    if(!root) return;
    if(root->left){
        parentMap[root->left]=root;
        crtmap(root->left,parentMap);
    }
    if(root->right){
        parentMap[root->right]=root;
        crtmap(root->right,parentMap);
    }
 }
 vector<int> distanceK(TreeNode* root,TreeNode* target,int k){
    unordered_map<TreeNode*,TreeNode*>parentMap;
    parentMap[root]=NULL;
    crtmap(root,parentMap);
    unorder_map<TreeNode*,bool>visited;
    queue<TreeNode*>q;
    q.push(target);
    visited[target]=true;
    int count=0;
    while(!q.empty()){
        if(count ==k) break;
        count++;
        int size=q.size();
        for(int i=0;i<size;i++){
            TreeNode* cur=q.front();
            q.pop();
            if(cur->left && visited.find(cur->left)==visited.end()){
                q.push(cur->left);
                visited[cur->left]=true;
            }
            if(cur->right && visited.find(cur->right)==visited.end()){
                q.push(cur->right);
                visited[cur->right]=true;
            }
            TreeNode* parent=parentMap[cur];
            if(parent && visited.find(parent)==visited.end()){
                q.push(parent);
                visited[parent]=true;
            }
        }
    }
    vector<int>ans;
    int n=q.size();
    for(int i=0;i<n;i++){
        TreeNode* cur=q.front();
        q.pop();
        ans.push_back(cur->val);
    }
    return ans;
 }
}
 */
/*
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
bool isPossible(vector<int> cook,int np,int mid){
    int count=0;
    int n=cook.size();
    for(int i=0;i<n;i++){
        int j=1;
        int time=0;
        int cur=cook[i];
        while(true){
        if(time+cur*j<=mid){
            count++;
             time +=cur*j;
            j++;
        }
        else
        break;
        if(count>=np){
            return true;
        }
    }
    }
    return false;
}
int noOfCook(vector<int> cook,int np,int cL){
    int srt=1;
    int ans=-1;
    int maxi=*max_element(cook.begin(),cook.end());
    int end =maxi*((np*(np+1))/2);
    while(srt<=end){
        int mid=(srt+end)>>1;
        if(isPossible(cook,np,mid)){
           ans=mid;
           end=mid-1;
        }
        else {
         srt=mid+1;
        }
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int np;
        int cL;
        cin>>np>>cL;
        vector<int>cook;
        while(cL--){
            int element;
            cin>>element;
            cook.push_back(element);
        }
        cout<<noOfCook(cook,np,cL)<<endl;
    }
    return 0;
}
       */
      #include<iostream>
      #include<vector>
      #include<algorithm>
      using namespace std;
      int minBlade(vector<long long int> &tree,long long int M){
       long long int maxi=*max_element(tree.begin(),tree.end());
       long long  int mini=0;
       long long int ans=-1;
       long long int N=tree.size();
         while(mini<=maxi){
          long long  int mid =(mini+maxi)>>1;
          long long  int sum=0;
            
            for(long long int i=0;i<N;i++){
                if(tree[i]>mid){
                  long long  int size=tree[i]-mid;
                    sum +=size;
                }
            }
            if(sum>=M){
               ans=mid;
               mini=mid+1;
            }
            else{
                maxi=mid-1;
            }
         }
         return ans;
      }
      int main(){
        vector<long long int>heightTree;
        long long int N,M;
        cin>>N>>M;
        while(N--){
        long long int element;
        cin>>element;
        heightTree.push_back(element);
        }
        int ans=minBlade(heightTree,M);
  cout<<ans;
        return 0;
      }