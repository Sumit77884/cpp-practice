#include<iostream>
using namespace std;
class Queue{
    private:
    int *arr;
    int n;
    int front;
    int rear;
    public:
    Queue(int size){
        arr =new int[size];
        n=size;
        front=-1;
        rear =-1;
    }
    void push(int val){
        if(rear == n-1){
            cout<<"Queue overflow."<<endl;
        }
        else if(rear ==-1 && front ==-1){
            rear=1;
            front=1;
            arr[rear]=val;
        }
        else {
            rear++;
            arr[rear]=val;
        }
    }
    void pop(){
        if(rear==-1 && front ==-1){
            cout<<"No element in the Queue to delete."<<endl;
        }
        else if(rear==front){
            arr[front]=-1;
            front=-1;
            rear=-1;
        }
        else{
            arr[front]=-1;
            front++;
        }
    }
    void getfront(){
        if(front==-1){
            cout<<"Empty queue."<<endl;
        }
        else{
            cout<<arr[front]<<endl;
        }
    }
    void getRear(){
        if(rear==-1){
            cout<<"Empty queue."<<endl;
        }
        else{
            cout<<arr[rear]<<endl;
        }
    }
    void getSize(){
        if(rear==-1 && front==-1){
            cout<<"0"<<endl;
        }
        else
        cout<<"Size is:"<<rear-front+1<<endl;
    }
    bool isEmpty(){
        if(rear==-1 && front ==-1){
            return true;
        }
        else
        return false;
    }
};
int main(){
    Queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.getfront();
    q.getSize();
    q.pop();
    q.push(40);
    q.getfront();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.getSize();
    return 0;
}