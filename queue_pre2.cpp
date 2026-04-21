#include<iostream>
using namespace std;
class Deque{
    private:
    int *arr;
    int n;
    int front;
    int rear;
    public:
    Deque(int size){
        this ->n =size;
        arr =new int[size];
        front =-1;
        rear =-1;
    }
    void push_front(int val){
        if(front==0){
            cout<<"Queue is overflow:"<<endl;
        }
        else if(front==-1 && rear==-1){
            front++;
            rear++;
            arr[front]=val;
        }
        else{
            front--;
            arr[front]=val;
        }
    }
    void popBack(){
        if(front== -1 && rear==-1){
            cout<<"Queue is Empty."<<endl;
        }
        else if(rear==front){
            arr[rear]=-1;
            front=-1;
            rear=-1;
        }
        else {
            arr[rear]=-1;
            rear--;
        }
    }
    void pushBack(int val){
        if(rear==n-1){
            cout<<"Queue is overflow."<<endl;
        }
        else if(front==-1 && rear==-1){
          front++;
          rear++;
          arr[rear]=val;
        }
        else{
            rear++;
            arr[rear]=val;
        }
    }
    void popFront(){
        if(front==-1 & rear==-1){
            cout<<"Queue is empty."<<endl;
        }
        else if(front==rear){
            arr[front]=-1;
            front=-1;
            rear=-1;
        }
        else{
            arr[front]=-1;
            front++;
        }
    }
    void print(){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;

    }
};
int main(){
    Deque dq(5);
    dq.push_front(10);
    //dq.print();
    dq.push_front(20);
    //dq.print();
    dq.pushBack(15);
   // dq.print();
    dq.pushBack(35);
   // dq.print();
    dq.pushBack(100);
    dq.print();
    dq.pushBack(200);
    dq.print();
    dq.popFront();
    dq.print();
    dq.popBack();
    dq.print();
    
    return 0;
}