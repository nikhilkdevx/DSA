#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        this->data = val;
        left = NULL;
        right = NULL;
    }
};

static int idx = -1;
Node* buildTree(vector<int>nodes){
    idx++;
    if(nodes[idx] == -1){
        return NULL;
    }
    Node* currNode = new Node(nodes[idx]);
    currNode->left = buildTree(nodes);
    currNode->right = buildTree(nodes);
    return currNode;
}

// Traversals
void preOrder(Node* root){
    if(root == NULL){
        return ;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder(Node* root){
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
    queue<Node*> Q;
    Q.push(root);
    Q.push(NULL);
    while(!Q.empty()){
        Node* curr = Q.front();
        Q.pop();
        if(curr == NULL){
            cout << endl;
            if(Q.empty()){
                break;
            }
            Q.push(NULL);
        } else {
            cout << curr->data << " ";

            if(curr->left != NULL){
                Q.push(curr->left);
            }

            if(curr->right != NULL){
                Q.push(curr->right);
            }
        }
    }

}


int main(){
vector<int> nodes = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
Node* root = buildTree(nodes);
// preOrder(root);
// inorder(root);
// postorder(root);
levelOrder(root);
return 0;
}