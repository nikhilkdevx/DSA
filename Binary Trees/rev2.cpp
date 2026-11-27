#include<iostream>
#include<vector>
#include<queue>
#include<map>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;
    
    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

static int idx = -1;
Node* BuildTree(vector<int> &nodes){
    idx++;
    if(nodes[idx] == -1){
        return NULL;
    }
    Node* currNode = new Node(nodes[idx]);
    currNode->left = BuildTree(nodes);
    currNode->right = BuildTree(nodes);
    return currNode;
}

void preorder(Node* root){ // root -> left -> right
    if(root == NULL){
        return;
    }
    cout << root->data<< " ";
    preorder(root->left);
    preorder(root->right);

}

void inorder(Node* root){ // left -> root -> right
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder(Node* root){ // left -> right -> root
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void levelOrder(Node* root){
    if(root == NULL){
        return;
    }
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node* curr = q.front();
        q.pop();
        cout << curr->data << " ";
        if(curr->left != NULL){
            q.push(curr->left);
        } if(curr->right != NULL){
            q.push(curr->right);
        }
    }

}

int heightofTree(Node* root){
    if(root == NULL){
        return -1;
    }
}

int main(){
    vector<int>nodes = {1,2,4,-1,-1,-1,3,-1,5,-1,-1};
    Node* root = BuildTree(nodes);
    levelOrder(root);
    return 0;
}