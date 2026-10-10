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
    } else {
        bool right = search(root->right,K);
    }
    return false;
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
    
    return 0;
}