#include<iostream>
using namespace std;
class Node{
    public:
    Node* prev;
    int data;
    Node* next;
    Node(int value){
        data =value;
        prev =NULL;
        next =NULL;
    }
};
void insertAtHead(int value,Node* &head,Node* &tail){
    //2 cases ->
}