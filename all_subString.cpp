#include<iostream>
#include<vector>
using namespace std;
#include<string>
int main(){
   string s="Sumit";
   int m= s.size();
   int count=0;
   for(int i=0;i<m;i++){
    string ch="";
    for(int j=i;j<m;j++){
        ch+=s[j];
        count++;
        cout<<ch<<" ";
    }
   }
   cout<<endl<<count<<endl;
   vector <int>nums={1,2,3,4,5};
   int n=s.size();
   int i=0;
   vector<vector<int>>ans;
   vector<int>temp;
   for(int i=0;i<n;i++){
    temp.clear();
    for(int j=i;j<n;j++){
        temp.push_back(nums[j]);
        ans.push_back(temp);
    }
    
   }
   cout<<"Substring of interger"<<endl;
   int count2=0;
    for(int i=0;i<ans.size();i++){
        cout<<ans.size()<<endl;
        int col=ans[i].size();
        cout<<col<<endl;
    for(int j=0;j<col;j++){
       // cout<<ans[i][j]<<",";
        count2++;
    }
   // cout<<endl;
    }
    return 0;
}