#include<iostream>
using namespace std;
#include<stack>
void insertAtBottom(stack <int> &st,int topElement){
    if(st.empty()){
        st.push(topElement);
        return ;
    }
    int topE =st.top();
    st.pop();
    insertAtBottom(st,topElement);
    st.push(topE);

}
void reverseOrder(stack <int> &st){
if(st.empty()){
    return ;
}
int topElement=st.top();
st.pop();
reverseOrder(st);
insertAtBottom(st,topElement);

}
void printstack(stack<int> st){
while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
}
}
int main(){
stack<int>st;
st.push(10);
st.push(20);
st.push(30);
st.push(40);
st.push(50);
st.push(60);
cout<<"Stack before reversing order."<<endl;
 printstack(st);

reverseOrder(st);
cout<<endl<<"Stack After reversing order."<<endl;
while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
}
    return 0;
}