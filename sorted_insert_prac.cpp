#include<iostream>
using namespace std;
#include<stack>
void insertSortedStack(stack<int> & st,int value){
    if(st.top()<value){
        st.push(value);
        return;
    }
    int topE=st.top();
    st.pop();
    insertSortedStack(st,value);
    st.push(topE);
}
void print(stack<int> st){
    while(!st.empty()){
    cout<<" "<<st.top();
    st.pop();
    }
    cout<<endl;
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
    int value=45;
    print(st);
    insertSortedStack(st,value);
    print(st);
    return 0;
}