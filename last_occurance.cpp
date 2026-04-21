#include<iostream>
using namespace std;
void swapstring(int s,int e,string &s){
    if(s>=e){
        return;
    }
    swap(s[s],s[e]);
    swapstring(s+1,e-1,s);
}

void lastOccLTR(string&s,char x,int i,int &ans){
    //base case
    if(i>=s.size()){
        return;
    }
    // ek case solution
    if(s[i]==x){
        ans=i;
    }
    lastOccLTR(s,x,i+1,ans);
}
    
   void lastOccLTL(string&s,char x,int i,int &ans){
    //base case
    if(i>=s.size()){
        return;
    }
    // ek case solution
    if(s[i]==x){
        ans=i;
        return;
    }
    lastOccLTL(s,x,i+1,ans);
}
int  main(){
    string s;
    cin>>s;
    char x;
    cin>>x;
    int i=0;
    int ans1=-1;
    int ans2=-1;
    lastOccLTR(s,x,i,ans1);
    lastOccLTL(s,x,i,ans2);
    cout<<ans1<<endl;
    cout<<ans2<<endl;
    swapstring
    return 0;
}