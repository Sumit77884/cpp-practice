#include<iostream>
#include<stack>
#include<limits.h>
using namespace std;
bool checkStackSorted(stack<int> &st,int min){
    
    if(st.empty()){
        return true;
    }
    
    int topelement=st.top();
    if(topelement<=min){
        min=topelement;
        st.pop();
        checkStackSorted(st,min);
    }
    else
   return false;
}
int main(){
stack<int>st;
st.push(10);
st.push(20);
st.push(30);
st.push(40);
st.push(50);
st.push(55);
st.push(60);
st.push(40);
int min= INT_MAX;
cout<<checkStackSorted(st,min);
    return 0;
}