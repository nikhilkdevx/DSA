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

void preorder(Node* root){
    if(root == NULL){
        return;
    }
    cout << root->data << ",";
    preorder(root->left);
    preorder(root->right);
}

Node* BuildTree(int arr[] , int n){
    Node* root = NULL;
    for(int i = 0; i< n ; i++){
        root = insert(root,arr[i]);
    }
    return root;
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
        return;
        
    }
    rootToLeaf(root->left,path);
    rootToLeaf(root->right,path);
    path.pop_back();
    
    
}

bool validateBST(Node* root, Node* min ,Node* max){
    if (root == NULL){
        return true;
    }

    if(min != NULL && root->data <= min->data){
        return false;
    }

    if(max != NULL && root->data >= max->data){
        return false;
    }

    return validateBST(root->left,min,root) && validateBST(root->right,root,max);
    
}

// Balanced BST
    void inorderSeq(Node* root,vector<int> &SortedArr){
        if(root == NULL){
            return;
        }
        inorderSeq(root->left,SortedArr);
        SortedArr.push_back(root->data);
        inorderSeq(root->right,SortedArr);
    }

    Node* balancedBSTfromSortedArr(vector<int>SortedArr,int st,int end){
        if(st > end){
            return NULL;
        }
        int mid = st +  ( end - st ) / 2;
        Node* curr = new Node(SortedArr[mid]);
        curr->left = balancedBSTfromSortedArr(SortedArr,st,mid-1);
        curr->right = balancedBSTfromSortedArr(SortedArr,mid+1,end);
        return curr;
    }



int main(){
    int arr[9] = {8,5,3,1,4,6,10,11,14};
    Node* root = BuildTree(arr,9);
    vector<int>SortedArr;
    int n = SortedArr.size();
    inorderSeq(root,SortedArr);
    Node* root =  balancedBSTfromSortedArr(SortedArr,0,n-1);
    preorder(root);

    return 0;
}