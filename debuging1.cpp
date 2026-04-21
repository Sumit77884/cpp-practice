#include <iostream>
#include <queue>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        this->data=val;
        left=NULL;
        right=NULL;
    }
};

Node* buildTreeLevelOrder(Node* root) {
    int data=root->data;
  //  cout << "Enter data for root: ";
   // cin >> data;

    if (data == -1) return NULL; // Assuming -1 means NULL/Empty

    root = new Node(data);
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();

        int leftData, rightData;

        // Input for Left Child
        cout << "Enter left child of " << curr->data << ": ";
        cin >> leftData;
        if (leftData != -1) {
            curr->left = new Node(leftData);
            q.push(curr->left);
        }

        // Input for Right Child
        cout << "Enter right child of " << curr->data << ": ";
        cin >> rightData;
        if (rightData != -1) {
            curr->right = new Node(rightData);
            q.push(curr->right);
        }
    }
    return root;
}
Node* lowestCommonAncestor(Node* root, Node* p, Node* q) {
        if(root==NULL){
            return NULL;
        }
        if(root==p){
            return p;
        }
        if(root==q){
            return q;
        }
        Node* left=lowestCommonAncestor(root->left,p,q);
        Node* right=lowestCommonAncestor(root->right,p,q);
        if(left==NULL && right==NULL){
            return NULL;
        }
       else if(left !=NULL && right==NULL){
            return left;
        }
       else if(left ==NULL && right !=NULL){
            return right;
        }
        else 
        return root;
    }

int main(){
    int data;
    cout << "Enter data for root: ";
    cin>>data;
    Node* root=new Node(data);
   root=  buildTreeLevelOrder(root);
   int data1;
   cout << "Enter data for p: ";
    cin>>data1;
    Node* p=new Node(data);
    int data2;
    cout << "Enter data for q: ";
    cin>>data2;
    Node* q=new Node(data2);
  Node* root1=lowestCommonAncestor(root,p,q);
  if(root1 !=NULL){
   cout<<root1->data;
  }
  else
  cout<<"No value:";
        return 0;
}