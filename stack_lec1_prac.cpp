#include<iostream>
using namespace std;
class Stack{
    public:
    int* arr;
    int size;
    int top;
Stack(int capacity){
    arr =new int[capacity];
    size =capacity;
    top=-1;
}
void push(int val){
    if(top == size-1){
        cout<<"Stack Overflow."<<endl;
    }
    else {
        top++;
        arr[top]=val;
    }
}
void pop(){
    if(top==-1){
        cout<<"Stack is underflow."<<endl;
    }
    else {
        arr[top]=0;
        top--;
    }
}
int getSize(){
    return top+1;
}
bool isEmpty(){
    if(top ==-1){
        return true;
    }
    else{
        return false;
    }
}
int getTop(){
    if(top ==-1){
        cout<<"There is no element at the top of stack."<<endl;
        return -1;
    }
    else {
        return arr[top];
    }
}
void print(){
    cout<<"Printing Stack"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
};
int main(){
    Stack s(5);
    s.print();
    s.push(20);
    s.print();
    s.push(30);
    s.push(40);
    s.print();
    s.push(50);
    s.push(60);
    s.print();
    s.push(70);
    s.print();
    cout<<s.getTop()<<endl;
    cout<<s.getSize()<<endl;
    cout<<s.isEmpty()<<endl;

  s.pop();
  s.print();
  s.pop();
  s.print();
  s.pop();
  s.print();
  s.pop();
  s.print();
  s.pop();
  s.print();
  s.pop();
  cout<<s.getSize();


return 0;
}

