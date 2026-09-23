#include <iostream>
#include<vector>
#include<queue>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};

static int idx = -1;

Node* buildTree(vector<int>nodes){
    idx++;
    if( nodes[idx] == -1 ){
        return NULL;
    }
    Node* currNode = new Node(nodes[idx]);
    currNode->left = buildTree(nodes);
    currNode->right = buildTree(nodes);
    return currNode;
}

// PreOrder Traversal
void preorder(Node* root){
    if(root == NULL){
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// Inorder Traversal
// void inorder(Node* root){
//     if(root == NULL){
//         return;
//     }

//     inorder(root->left);
//     cout << root->data << " ";
//     inorder(root->right);
// }

// PostOrder Traversal
// void postorder(Node* root){
//     if(root == NULL){
//         return;
//     }
//     postorder(root->left);
//     postorder(root->right);
//     cout << root->data << " ";
// }

// Level Order Traversal
void levelOrder(Node* root){
    if(root == NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* curr = q.front();
        q.pop();

        if(curr == NULL){
            cout << endl;
            if(q.empty()){
                break;
            }
            q.push(NULL);
        } else{
            cout << curr->data << " ";
        
            if(curr->left != NULL){
                q.push(curr->left);
            }
            if(curr->right != NULL){
                q.push(curr->right);
            }
        }
        
    }
}

// Height of Tree
int height(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftHt = height(root->left);
    int rightHt = height(root->right);

    int currHt = max(leftHt,rightHt) + 1;
    
    return currHt;
}

// Count of Nodes
int countNode(Node* root){
    if(root == NULL){
        return 0;
    }
    int count = 0;
    int leftCount = countNode(root->left);
    int rightCount = countNode(root->right);
    return leftCount + rightCount + 1;


}

// Sum Of Nodes
int sumOfTree(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftSum = sumOfTree(root->left);
    int rightSum = sumOfTree(root->right);
    return leftSum + rightSum + root->data;
}

int main(){
    vector<int>nodes = {1,2,4,-1,-1,5,-1,6,-1,7,-1,-1,3,-1,-1};
    Node* root = buildTree(nodes);

    // preorder(root);
    // cout << endl;
    // inorder(root);
    // postorder(root);
    // levelOrder(root);
    // cout << endl;
    // cout << "Height of The tree is = " << height(root);
    cout << "Count of The tree is = " << countNode(root);
    return 0;
}