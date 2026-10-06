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

// void kthHelper(Node* root , int K, int currLevel){
//     if(root == NULL){
//         return;
//     }

//     if(currLevel == K){
//         cout << root->data << " ";
//         return;
//     }

//     kthHelper(root->left,K,currLevel+1);
//     kthHelper(root->right,K,currLevel+1);
// }

// void kthLevelOfTree(Node*root , int K){
//     kthHelper(root,K,1);
//     cout << endl;
// }

// Lowest Common Ancestor [ o (n) ]
// bool rootToNodePath(Node* root , int n,vector<int> &path){
//     if(root == NULL){
//         return false;
//     }
//     path.push_back(root->data);
//     if(root->data == n){
//         return true;
//     }

//     bool isLeft = rootToNodePath(root->left,n,path);
//     bool isRight = rootToNodePath(root->right,n,path);

//     if(isLeft || isRight){
//         return true;
//     }

//     path.pop_back();
//     return false;
// }


// int LCA(Node* root,int n1 , int n2){
//     vector<int> path1;
//     vector<int> path2;
//     rootToNodePath(root, n1,path1);
//     rootToNodePath(root, n1,path2);
//     int lca = -1;
//     for(int i = 0 , j = 0 ; i<path1.size() && j < path2.size(); i++,j++){
//         if(path1[i] != path2[j]){
//             return lca;
//         }

//         lca = path1[i];
//     }

//     return lca;
// }

// LCA [Approach 2]
// Node* LCA(Node* root , int n1, int n2){
//     if(root == NULL){
//         return NULL;
//     }
//     if(root->data == n1 || root->data == n2){
//         return root;
//     }

//     Node* leftLca = LCA(root->left,n1,n2);
//     Node* rightLca = LCA(root->right,n1,n2);

//     if(leftLca != NULL && rightLca != NULL){
//         return root;
//     }

//     return leftLca == NULL ? rightLca : leftLca;

// }

// int distOflcaToNode(Node* root , int n){
//     if(root == NULL){
//         return -1;
//     }
//     if(root->data == n){
//         return 0;
//     }
//     int leftDist = distOflcaToNode(root->left , n);
//     if(leftDist != -1){
//         return leftDist + 1;
//     }
//     int rightDist = distOflcaToNode(root->right,n);
//     if(rightDist != -1){
//         return rightDist + 1;
//     }
//     return -1;
// }


// // Min Distanc Between Nodes 
// int minDistance(Node* root , int n1 , int n2){
//     Node* lca = LCA(root , n1,n2);

//     int dist1 = distOflcaToNode(lca,n1);
//     int dist2 = distOflcaToNode(lca,n2);
//     return dist1 + dist2 ; 
// }

// Kth Ancestor of Node
// int KthAncestor(Node* root , int n , int k){
//     if(root == NULL){
//         return -1;
//     }
//     if(root->data == n){
//         return 0;
//     }
//     int left = KthAncestor(root->left,n,k);
//     int right = KthAncestor(root->right,n,k);
//     if(left == -1 && right == -1){
//         return -1;
//     }
//     int validVal = left == -1 ? right : left;
//     if(validVal + 1 == k){
//         cout << "Kth Ancestor : " << root->data << endl;
//     }
//     return validVal+1;
// }

Node* preorder(Node* root){
    if(root == NULL){
        return NULL;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
    return root;

}

// Transform to Sum Tree
int transForm(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftOld = transForm(root->left);
    int rightOld = transForm(root->right);
    int currOld = root->data;
    root->data = leftOld + rightOld ;
    if(root->left != NULL){
        root->data += root->left->data;
    }
    if(root->right != NULL){
        root->data += root->right->data;
    }
    root->left->data + root->right->data;
    return currOld;
    
}

int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTree(nodes);
    transForm(root);
    preorder(root);
    return 0;
}; 