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

Node* buildBST(int arr[],int n){
    Node* root = NULL;
    for(int i = 0; i<n; i++){
        root = insert(root,arr[i]);
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
            Node* child = root->left == NULL ? root->right : root->left;
            delete root;
            return child;
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
void PrintInRange(Node* root,int st,int end){
    if(root == NULL){
        return;
    }
    if(st <= root->data && root->data <= end){
        PrintInRange(root->left,st,end);
        cout << root->data << " ";
        PrintInRange(root->right,st,end);
    } else if (root->data < st){
        PrintInRange(root->right,st,end);
    } else {
        PrintInRange(root->left,st,end);
    }
}

void printPath(vector<int>path){
    for(int i = 0;i<path.size();i++){
        cout << "Path : " << path[i] << " ";
    }
    cout  << endl;
}

// Root to Leaf Path
void RootToLeaf(Node* root,vector<int> &path){
    path.push_back(root->data);
    if(root->left != NULL && root->right != NULL){
        printPath(path);
        path.pop_back();
        return;

    }
    RootToLeaf(root->left,path);
    RootToLeaf(root->right,path);
    path.pop_back();
}

// Validate BST
bool validateHelper(Node* root , Node* min,Node* max){
    if(root == NULL){
        return true;
    }
    if(min != NULL && root->data <= min->data){
        return false;
    }
    if(max != NULL && root->data >= max->data){
        return false;
    }
    return validateHelper(root->left,min,root) && 
    validateHelper(root->right,root,max);
}
bool validateBST(Node* root){
    return validateHelper(root,NULL,NULL);
    
}

// Balanced BST [Topic Started]

//-------> For Balanced BST
Node* buildBSTfromSorted(int arr[],int st,int end){
    if(st > end){
        return NULL;
    }
    int mid = st + (end - st) / 2;
    Node* curr = new Node(arr[mid]);
    curr->left = buildBSTfromSorted(arr,st,mid-1);
    curr->right = buildBSTfromSorted(arr,mid+1,end);
    return curr;
}

void preorder(Node* root){
    if(root == NULL){
        return ;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

//-------> BST to Balanced BST
void inorderSeq(Node* root,vector<int>&v){
    if(root == NULL){
        return;
    }
    inorderSeq(root->left,v);
    v.push_back(root->data);
    inorderSeq(root->right,v);
}

Node* buildBSTfromSortedVector(vector<int>arr,int st,int end){
    if(st > end){
        return NULL;
    }
    int mid = st + (end - st) / 2;
    Node* curr = new Node(arr[mid]);
    curr->left = buildBSTfromSortedVector(arr,st,mid-1);
    curr->right = buildBSTfromSortedVector(arr,mid+1,end);
    return curr;
}

Node* BSTtoBalanced(Node* root){
    vector<int>v;
    if(root == NULL){
        return NULL;
    }
    inorderSeq(root,v);
    root = buildBSTfromSortedVector(v,0,v.size()-1);

    return root;
    
};

// Size of Largest BST in BT
class Info{
public:
    bool isBST;
    int min;
    int max;
    int sz;
    Info(bool isBST,int min, int max , int sz){
        this->isBST = isBST;
        this->min = min;
        this->max = max;
        this->sz = sz;
    }
};

static int maxSize;
static Node* largestroot;
Info* largestBST(Node* root) {
    // if(root == NULL){
    //     return new Info(true,INT_MAX,INT_MIN,0);
    // }
    if(root == NULL){
        return NULL;
    }
    if(root->left == NULL && root->right == NULL){
        return new Info(true , root->data,root->data,1);
    }
    Info* leftInfo =  largestBST(root->left);
    Info* rightInfo =  largestBST(root->right);

    int currMin = min(root->data,min(leftInfo->min,rightInfo->min));
    int currMax = max(root->data,max(leftInfo->max,rightInfo->max));
    int currSz = leftInfo->sz + rightInfo->sz + 1;
    if(leftInfo->isBST && rightInfo->isBST 
    && root->data > leftInfo->max
    && root->data < rightInfo->min) {
        maxSize = max(maxSize,currSz);
        return new Info(true,currMin,currMax,currSz);
    }

    return new Info(false,currMin,currMax,currSz);
}

// Merge 2 BSTs
Node* mergeBST(Node* root1 , Node* root2){
    vector<int>nodes1;
    vector<int>nodes2;
    vector<int>merged;
    inorderSeq(root1,nodes1);
    inorderSeq(root2,nodes2);

    int i = 0 , j = 0;
    while(i<nodes1.size() && j < nodes2.size()){
        if(nodes1[i] < nodes2[j]){
            merged.push_back(nodes1[i++]);
        } else {
            merged.push_back(nodes2[j++]);
        }
    } 

    while(i < nodes1.size()){
        merged.push_back(nodes1[i++]);

    }

    while(j < nodes2.size()){
        merged.push_back(nodes2[j++]);
    }

    return buildBSTfromSortedVector(merged,0,merged.size()-1);


}
int main(){
    // int arr[6] = {5,1,3,4,2,7};
    // int arr[9] = {8,5,3,1,4,6,10,11,14}; 
    // int arr[7] = {3,4,5,6,7,8,9}; 
    // int arr[7] = {6,5,4,3,7,8,9};
    // int arr[9] = {50,30,60,5,20,45,70,65,80}; 
    int arr1[3] = {1,2,4};
    int arr2[3] = {9,3,12};
    Node* root1 = buildBST(arr1,3);
    Node* root2 = buildBST(arr2,3); 
    // root = BSTtoBalanced(root);
    // preorder(root);
    // largestBST(root);
    // cout << "Max Size : " << maxSize;
    Node* root = mergeBST(root1,root2);
    preorder(root);
    cout << endl;
    return 0;

}