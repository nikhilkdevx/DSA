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
        left = right = NULL; 
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
};

int heightOfTree(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftHt = heightOfTree(root->left);
    int rightHt = heightOfTree(root->right);
    int currHt = max(leftHt,rightHt) + 1;
    return currHt;
}
// // Diameter of a Tree
// int diam1(Node* root){ // [O(n^2)]
//     if(root == NULL){
//         return 0;
//     }
//     int currDiam = heightOfTree(root->left) + heightOfTree(root->right) + 1 ;
//     int leftDiam = diam1(root->left);
//     int rightDiam = diam1(root->right);

//     return max(currDiam,max(leftDiam,rightDiam));

// }

// // Diameter of Tree [O(n)]
// pair<int,int> diam2(Node* root){
//     if(root == NULL){
//         return make_pair(0,0);
//     }
//     //(diameter , Height)
//     pair<int,int> leftInfo = diam2(root->left); //(LD,LH)
//     pair<int,int> rightInfo = diam2(root->right); //(RD,RH)
//     int currDiam = leftInfo.second + rightInfo.second + 1;
//     int finalDiam = max(currDiam, max(leftInfo.first,rightInfo.first));
//     int finalHt = max(leftInfo.second,rightInfo.second) + 1;
//     return make_pair(finalDiam,finalHt);
// };

// Subtree of a Tree 

bool isIdentical(Node* root1 , Node* root2){
    if(root1 == NULL && root2 == NULL){
        return true;
    }
    
    if(root1 == NULL || root2 == NULL){
        return false;
    }
    if(root1->data != root2->data){
        return false;
    }
    
    bool LeftIdentical = isIdentical(root1->left,root2->left);
    if(!LeftIdentical){
        return false;
    }
    bool rightIdentical = isIdentical(root1->right,root2->right);
    if(!rightIdentical){
        return false;
    }

    return true;
}

bool isSubTree(Node* root , Node* subRoot){

    if(root == NULL && subRoot == NULL){
        return true;
    } else if(root == NULL || subRoot == NULL){
        return false;
    }

    if(subRoot->data == root->data){
        // Identical Check  
        if(isIdentical(root,subRoot)){
            return true;
        };
    }

    bool isLeftSubTree = isSubTree(root->left,subRoot);
    
    if(!isLeftSubTree){
        return isSubTree(root->right,subRoot);
    }
    return true;

}

int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    vector<int> node2 = {2,4,-1,-1,6,-1,-1};
    Node* root = buildTree(nodes);
    idx = -1;
    Node* subRoot = buildTree(node2);
    cout << isSubTree(root,subRoot);
    return 0;
};