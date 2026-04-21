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
    }
}