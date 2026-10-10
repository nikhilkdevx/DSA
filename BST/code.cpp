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
        left  = NULL;
        right = NULL;
    }
};
// INORDER WILL ALWAYS GIVE SORTED IN BST
void inorder(Node* root ){
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
    if(val < root->data){
        root->left = insert(root->left,val);
    } else {
        root->right = insert(root->right,val);
    }
    return root;
}
// Search In a BST
bool search(Node* root , int key){
    if(root == NULL){
        return false;
    }
    if(root->data == key){
        return true;
    }
    if(root->data > key){
       return  search(root->left,key);
    }else {
       return search(root->right,key);
    };
}

Node* getInorderSuccessor(Node* root){
    while(root->left != NULL){
        root = root->left;
    }
    return root;
}

// Deleting Node in BST
Node* deleteNode(Node* root , int val){
    if(root == NULL){
        return NULL;
    }
    if(val < root->data){
        root->left = deleteNode(root->left,val);
    } else if(val > root->data) {
        root->right = deleteNode(root->right,val);
    } else {
        // case 1  : 0 child
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        } 

        // case 2 : 1 child
        if(root->left == NULL || root->right == NULL){
            return root->left == NULL ? root->right : root->left;
        }

        // case 3 : 2 child
        Node* IS = getInorderSuccessor(root->right);
        root->data = IS->data;
        root->right = deleteNode(root->right,IS->data);
        return root;
    }
    return root;
    
}

//Print in Range

Node* buildBST(int arr[],int n){
    Node* root = NULL;
    for(int i = 0; i<n; i++){
        root = insert(root,arr[i]);
    }
    return root;
    
}

int main(){
    // int arr[6] = {5,1,3,4,2,7};
    int arr[9] = {8,5,3,1,4,6,10,11,14};  
    
    Node* root = buildBST(arr,9);
    inorder(root);
    deleteNode(root,5);
    cout << endl;
    inorder(root);
    return 0;

}