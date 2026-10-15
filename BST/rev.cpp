#include<iostream>
#include<vector>
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

void inorder(Node* root){
    if(root == NULL){
        return ;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

Node* insert(Node* root , int val){
    if(root == NULL){
        root = new Node(val);
        return root;
    }
    if(root->data > val){
        root->left = insert(root->left,val);
    } else {
        root->right = insert(root->right,val);
    }
    return root;
}

bool search(Node* root,int K){
    if(root == NULL){
        return false;
    }
    if(root->data == K){
        return true;
    }
    if(root->data > K){
        bool left = search(root->left,K);
        return left;
    } else {
        bool right = search(root->right,K);
        return right;
    }
    return false;
}

//GetInorderSuccesor
Node* getInorderSuccessor(Node* root){
    while(root->left != NULL){
        root = root->left;
    }
    return root;
}

// Deleting a node in BST
Node* deleteNode(Node* root,int k){
    if(root == NULL){
        return NULL;
    }
    if(root->data == k){
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        } else if(root->left == NULL || root->right == NULL){
            Node* child = root->left == NULL ? root->right : root->left;
            delete root;
            return child;
        } else {
            Node* IS = getInorderSuccessor(root->right);
            root->data = IS->data;
            root->right = deleteNode(root->right,IS->data);
            return root;
        }
    } else if(root->data > k){
        root->left = deleteNode(root->left,k);
    } else {
        root->right = deleteNode(root->right,k);
    }
    return root;
}

// Print in Range

// Root to Leaf Path
void printPath(vector<int> &path){
    cout << "Path : ";
    for(int i = 0;i<path.size();i++){
        cout << path[i] << " ";
    }
    cout << endl;
}

void rootToLeaf(Node* root,vector<int> &path){
    if(root == NULL){
        return ;
    }
    path.push_back(root->data);
    if(root->left == NULL && root->right == NULL){
        printPath(path);
        path.pop_back();
        
    }
    rootToLeaf(root->left,path);
    rootToLeaf(root->right,path);
    
    
}

Node* BuildTree(int arr[] , int n){
    Node* root = NULL;
    for(int i = 0; i< n ; i++){
        root = insert(root,arr[i]);
    }
    return root;
}

int main(){
    int arr[9] = {8,5,3,1,4,6,10,11,14};
    Node* root = BuildTree(arr,9);
    // inorder(root);
    // cout << search(root,5);
    vector<int> path;
    rootToLeaf(root,path);
    return 0;
}