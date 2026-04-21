#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node *left;
    Node *right;
Node(int val){
    this->data=val;
    left =NULL;
    right =NULL;
}
};
//0(LOGN)->INSERT
Node* buildBST(int val,Node *root){
    if(root == NULL){
        root =new Node(val);
        return root;
    } else {
        if(val <root->data){
            //val -> left subtree
            root ->left =buildBST(val,root->left);
        }
        else {
            //val -> right subtree
            root ->right =buildBST(val,root->right);
        }
    }
    return root;
}
void preorderTraversal(Node* root){
    if(root == NULL)
    return;
    cout<< root->data<" ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}
void inorderTraversal(Node* root){
    if(root == NULL)
    return;
    inorderTraversal(root->left);
    cout<< root->data<<" ";
    inorderTraversal(root->right);
}
void postorderTraversal(Node* root){
    if(root == NULL)
    return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout<< root->data<<" ";
}
void  createTree(Node* &root){
    cout<<"Enter the value for Node:"<<endl;
    int val;
    cin>> val;
    while(val != -1){
        root = buildBST(val,root);
        cout<<"Enter the value for Node: "<< endl;
        cin >> val;
    }
}
void levelOrderTraversal(Node *root){
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node *front=q.front();
        q.pop();
        if(front ==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else {
            cout<<front->data<<" ";
            if(front->left){
            q.push(front->left);
        }
        if(front ->right){
            q.push(front->right);
        }
    }
}
}
int getMin(Node* root){
    if(root ==NULL){
        return -1;
    }
    while(root->left){
        root=root->left;
    }
    return root->data;
}
int getMax(Node* root){
    if(root ==NULL){
        return -1;
    }
    while(root->right){
        root=root->right;
    }
    return root->data;
}
bool searchBST(Node* root,int target){
    
}