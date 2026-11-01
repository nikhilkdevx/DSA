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

Node* BuildTree(int arr[] , int n){
    Node* root = NULL;
    for(int i = 0; i< n ; i++){
        root = insert(root,arr[i]);
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
// Largest BST in a BT
// class Info{
//     public:
//     bool isBST;
//     int min;
//     int max;
//     int sz;

//     Info(bool isBST,int min,int max,int sz){
//         this->isBST = isBST;
//         this->min = min;
//         this->max = max;
//         this->sz = sz;
//     }
// };

// static int maxSize;
// static Node* largestroot;

// Info* largestBST(Node* root){
//     if(root == NULL){
//         return;
//     }
//     if(root->left == NULL && root->right == NULL){
//         return new Info(true,root->data,root->data,1);
//     }
//     Info* leftInfo = largestBST(root->left);
//     Info* rightInfo = largestBST(root->right);

//     int currMin = min(root->data,min(leftInfo->min,rightInfo->min));
//     int currMax = min(root->data,max(leftInfo->max,rightInfo->max));
//     int currsz = leftInfo->sz + rightInfo->sz + 1;

//     if(leftInfo->isBST && rightInfo->isBST && root->data > leftInfo->max && root->data < rightInfo->min){
//         maxSize = max(currsz,maxSize);
//         return new Info(true,currMin,currMax,maxSize);
//     }

//     return new Info(false,currMin,currMax,currsz);

// }

void InorderForVector(Node* root,vector<int>& arr){
    if(root == NULL){
        return;
    }
    InorderForVector(root->left,arr);
    arr.push_back(root->data);
    InorderForVector(root->right,arr);

}

// Merge 2 BSTs
Node* merge2BSTs(Node* root1,Node* root2){
    vector<int>arr1;
    vector<int>arr2;
    vector<int>mergedBST;
    InorderForVector(root1,arr1);
    InorderForVector(root2,arr2);
    int i = 0 , j = 0;
    while( i < arr1.size() && j < arr2.size()){
        if(arr1[i] < arr2[j]){
            mergedBST.push_back(arr1[i++]);
        } else {
            mergedBST.push_back(arr2[j++]);
        }
    }

    while(i < arr1.size()){
        mergedBST.push_back(arr1[i++]);
    }
    
    while(j < arr2.size()){
        mergedBST.push_back(arr2[j++]);
    }
    int n = mergedBST.size();
    int arr[n] = {0};
    for(int i = 0 ;i<n;i++){
        arr[i] = mergedBST[i];
    }

    Node* mergedBSTRoot = BuildTree(arr,n);
    return mergedBSTRoot;
}

int main(){
    int arr[3] = {1,2,3};
    int arr2[3] = {9,3,12};
    Node* root1 = BuildTree(arr,3);
    Node* root2 = BuildTree(arr2,3);
    Node* mergedRoot = merge2BSTs(root1,root2);
    preorder(mergedRoot);
    
    return 0;
}