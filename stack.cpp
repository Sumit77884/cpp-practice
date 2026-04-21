#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<st.size()<<endl;
    //There is no iterator memeber function in stack
    /*
    stack <int>::iterator it1=st.begin();
    while(it1!=st.end()){
        cout<<*it1<<" ";
        it1++;
    }
    cout<<endl;
    */
   while(st.size()>=0){
    cout<<st.top()<<endl;
    st.pop();
   }
   // stack<int> st;
   if(st.empty()==true){
    cout<<"Stack is empty:"<<endl;
   }
   else{
    cout<<"Stack has some element.";
   }
    return 0;
}