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

// bool isIdentical(Node* root1 , Node* root2){
//     if(root1 == NULL && root2 == NULL){
//         return true;
//     }
    
//     if(root1 == NULL || root2 == NULL){
//         return false;
//     }
//     if(root1->data != root2->data){
//         return false;
//     }
    
//     bool LeftIdentical = isIdentical(root1->left,root2->left);
//     if(!LeftIdentical){
//         return false;
//     }
//     bool rightIdentical = isIdentical(root1->right,root2->right);
//     if(!rightIdentical){
//         return false;
//     }

//     return true;
// }

// bool isSubTree(Node* root , Node* subRoot){

//     if(root == NULL && subRoot == NULL){
//         return true;
//     } else if(root == NULL || subRoot == NULL){
//         return false;
//     }

//     if(subRoot->data == root->data){
//         // Identical Check  
//         if(isIdentical(root,subRoot)){
//             return true;
//         };
//     }

//     bool isLeftSubTree = isSubTree(root->left,subRoot);
    
//     if(!isLeftSubTree){
//         return isSubTree(root->right,subRoot);
//     }
//     return true;

// }

// Top View of a Tree
// void topView(Node* root){
//     queue<pair<Node* , int>> Q;
//     map<int,int> m;
//     Q.push(make_pair(root,0));
//     while(!Q.empty()){
//         pair<Node* , int> curr = Q.front();
//         Q.pop();

//         Node* currNode = curr.first;
//         int currHd = curr.second;

//         if(m.count(currHd) == 0){
//             m[currHd] = currNode->data;
//         } 

//         if(currNode->left != NULL){
//             pair<Node* , int> leftPair = make_pair(currNode->left, currHd - 1);
//             Q.push(leftPair);
//         }

//         if(currNode->right != NULL){
//             pair<Node* , int> rightPair = make_pair(currNode->right, currHd + 1);
//             Q.push(rightPair);
//         }


//     }

//     for(auto it : m){
//         cout << it.second << " ";
//     }
//     cout << endl;
// }

// kth level of a Tree [ Iterative Way ]
// void kthLevelOfTree(Node* root,int k){
//     queue<Node*> Q;
//     Q.push(root);
//     int count = 0;
//     while (!Q.empty())
//     {
//         Node* curr = Q.front();
//         Q.pop();
//         if(count == k){
//             cout << curr->data << " ";
//         }        
//         if(curr->left != NULL){
//             Q.push(curr->left);
//         }

//         if(curr->right != NULL){
//             Q.push(curr->right);
//         }

//         count++;
//     }
    
// }

void kthHelper(Node* root , int K, int currLevel){
    if(root == NULL){
        return;
    }

    if(currLevel == K){
        cout << root->data << " ";
        return;
    }

    kthHelper(root->left,K,currLevel+1);
    kthHelper(root->right,K,currLevel+1);
}

void kthLevelOfTree(Node*root , int K){
    kthHelper(root,K,1);
    cout << endl;

}


int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTree(nodes);
    kthLevelOfTree(root,3);
    return 0;
};