#include<iostream>
using namespace std;
class Stack{
    public:
    int* arr;
    int size;
    int top1;
    int top2;
    Stack(int capacity){
    arr =new int[capacity];
        size =capacity;
        top1=-1;
        top2=size;
    }
    
    void push1(int value){
        if(top2-top1==1){
            cout<<"Stack Overflow"<<endl;
        }
        top1++;
        arr[top1]=value;
    }
    
    void push2(int value){
        if(top2-top1==1){
            cout<<"Stack Overflow."<<endl;
        }
        top2--;
        arr[top2]=value;
    }
    void pop1(){
        if(top1==-1){
            cout<<"Stack Underflow."<<endl;
        }
        else{
        arr[top1]=0;
        top1--;
        }
    }
    void pop2(){
        if(top2==size){
            cout<<"Stack underflow"<<endl;
        }
        else{
            arr[top2]=0;
            top2++;
        }
    }
    void print(){
        cout<<"Top1:"<<top1<<endl;
        cout<<"Top2:"<<top2<<endl;
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
Stack s(5);
s.push1(10);
// s.print();
s.push2(20);
// s.print();
 s.push1(30);
// s.print();
 s.push2(40);
// s.print();
s.push1(60);
s.print();
//s.push2(70);
//s.print();
s.pop2();
s.print();
// s.pop2();
// s.print();
// s.pop2();
// s.print();
    return 0;
}