#include<iostream>
using namespace std;
class CircularQueue{
    public:
    int *arr;
    int n;
    int front;
    int rear;
    CircularQueue(int size){
        this->n=size;
        arr =new int[size];
        front=-1;
        rear=-1;
    }
    void push(int val){
        //4 cases:Overflow,first element,circular, normal flow
        if((front ==0 && rear ==n-1)||(rear ==front-1)){
            cout<<"Overflow"<<endl;
        }
        else if(rear == n-1 && front !=0){
            //circular nature
            rear=0;
            arr[rear]=val;
        }
        else if(front== -1 && rear == -1){
            front++;
            rear++;
            arr[rear]=val;
        }
        else{
            rear++;
            arr[rear]=val;
        }
    }
    void pop(){
        if(front==-1 &&  rear==-1){
            cout<<"Element is Empty."<<endl;
        }
        else if(rear==front){
            arr[front]=-1;
            rear=-1;
            front=-1;
        }
        else if(front==n-1){
            //circular nature
            arr[front]=-1;
            front=0;
        }
        else{
            arr[front]=-1;
            front++;
        }
    }
    void getsize(){
        if(front ==-1 && rear ==-1){
            cout<<"0";
        }
        else if(rear >=front){
            cout<<rear-front+1<<endl;
        }
        else {
            cout<< n-front+rear+1<<endl;
        }
    }
    void getFront(){
        if(front==-1){
            cout<<"Queue is empty"<<endl;
        }
        else{
            cout<<arr[front]<<endl;
        }
    }
    void getBack(){
        if(rear ==-1){
            cout<<"Queue is Empty."<<endl;
        }
        else{
            cout<<arr[rear]<<endl;
        }
    }
    bool isEmpty(){
        if(front == -1 && rear == -1){
            return true;
        }
        else{
            return false;
        }
    }
    void print(){
        for(int i=0; i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    CircularQueue q(5);
    q.push(10);
    q.print();
    q.push(20);
    q.print();
    q.push(30);
    q.print();
    q.push(40);
    q.print();
    q.push(50);
    q.print();
    q.push(60);
    q.print();
    q.pop();
    q.print();
    q.push(70);
    q.print();
    q.push(80);
    q.pop();
    q.print();
    q.push(90);
    q.print();
    q.getsize();
   cout<< q.isEmpty()<<endl;
    q.getFront();

  return 0;  
}