#include <iostream>
#include <queue>
using namespace std;

Node* buildTreeLevelOrder(Node* root) {
    int data;
    cout << "Enter data for root: ";
    cin >> data;

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