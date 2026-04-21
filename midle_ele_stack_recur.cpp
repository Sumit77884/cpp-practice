#include<iostream>
using namespace std;
#include<stack>
int  midle_element(stack<int> &st,int count){
    if(count==0){
        cout<<st.top()<<endl;
        return 0;
    }
    int topelement=st.top();
    st.pop();
    count--;
    midle_element(st,count);
    st.push(topelement);
    return 0;
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);
    int count=st.size()/2;
    midle_element(st,count);
    cout<<"stack"<<endl;
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}