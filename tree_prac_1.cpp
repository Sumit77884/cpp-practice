#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        this->data=val;
        left =NULL;
        right =NULL;
    }
};
Node* createTree(){
    cout<<"Enter the value for Node:-"<<endl;
    int value;
    cin>>value;
    if(value ==-1){
        return NULL;
    }
    else {
        Node* root =new Node(value);
        cout<<"adding left child for:-"<<value<<endl;
        root->left =createTree();
        cout<<"Adding right child for:-"<<value<<endl;
        root->right=createTree();
        return root;
    }
}
void preOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    //NLR
    //N
    cout<<root->data<<" ";
    //L -> left subtree
    preOrderTraversal(root->left);
    //R->right subtree
    preOrderTraversal(root->right);
}
void InOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    //LNR
    //L
    InOrderTraversal(root->left);
    //N
    cout<<root->data<<" ";
    //R
    InOrderTraversal(root->right);
}
void postOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    //LRN
    //L
    postOrderTraversal(root->left);
    //R
    postOrderTraversal(root->right);
    //N
    cout<<root->data<<" ";
}
void levelOrderTraversal(Node* root){
    if(root==NULL){
        cout<<endl<<"1";
        return ;
    }
    queue<Node *>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* front=q.front();
        q.pop();
        if(front==NULL){
            //q.pop();
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
        cout<<front->data<<" ";
        //q.pop();
        if(front->left!=NULL){
            q.push(front->left);
        }
        if(front->right !=NULL){
            q.push(front->right);
        }
    }
}
}
int main(){
    Node* root;
    root=createTree(); 
    //levelOrderTraversal(root);
    //cout<<"printint root:-"<<root->data<<endl;
    cout<<"Output for preOrder:"<<endl;
    preOrderTraversal(root);
    cout<<endl<<"Output for InOrder:"<<endl;
    InOrderTraversal(root);
    cout<<endl<<"Output for postOrder:"<<endl;
    postOrderTraversal(root);
    cout<<endl<<"Output for LevelOrder:"<<endl;
    levelOrderTraversal(root);
    return 0;
}