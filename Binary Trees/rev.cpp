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

    Node(int val){
        this->data = val;
        left = NULL;
        right = NULL;
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
}

// Traversals
// void preOrder(Node* root){
//     if(root == NULL){
//         return ;
//     }
//     cout << root->data << " ";
//     preOrder(root->left);
//     preOrder(root->right);
// }

// void inorder(Node* root){
//     if(root == NULL){
//         return;
//     }
//     inorder(root->left);
//     cout << root->data << " ";
//     inorder(root->right);
// }

// void postorder(Node* root){
//     if(root == NULL){
//         return;
//     }
//     postorder(root->left);
//     postorder(root->right);
//     cout << root->data << " ";
// }

// void levelOrder(Node* root){
    // if(root == NULL){
    //     return;
    // }
    // queue<Node*> Q;
    // Q.push(root);
    // Q.push(NULL);
    // while(!Q.empty()){
    //     Node* curr = Q.front();
    //     Q.pop();
    //     if(curr == NULL){
    //         cout << endl;
    //         if(Q.empty()){
    //             break;
    //         }
    //         Q.push(NULL);
    //     } else {
    //         cout << curr->data << " ";

    //         if(curr->left != NULL){
    //             Q.push(curr->left);
    //         }

    //         if(curr->right != NULL){
    //             Q.push(curr->right);
    //         }
    //     }
    // }

// }

// void topViewOfTree(Node* root){
//     queue<pair<Node* , int>> Q;
//     map<int,int> m;
//     Q.push(make_pair(root,0));
//     while(!Q.empty()){
//         pair<Node* , int> curr = Q.front();
//         Node* currNode = curr.first;
//         int currHD = curr.second;
//         Q.pop();

//         if(m.count(currHD) == 0){
//             m[currHD] = currNode->data;
//         }

//         if(currNode->left != NULL){
//             Q.push(make_pair(currNode->left,currHD - 1));
//         }

//         if(currNode->right != NULL){
//             Q.push(make_pair(currNode->right,currHD + 1));
//         }

//     }

//     for(auto it : m){
//         cout << it.second << " ";
//     }

//     cout << endl;

// }

// Bottom View of Tree
// void bottomViewOfTree(Node* root){
//     queue<pair<Node* , int>> Q;
//     map<int,int> m;
//     Q.push(make_pair(root,0));
//     while(!Q.empty()){
//         pair<Node* , int> curr = Q.front();
//         Node* currNode = curr.first;
//         int currHD = curr.second;
//         Q.pop();

//         if(m.count(currHD) == 0){
//             m[currHD] = currNode->data;
//         } else {
//             m[currHD] = currNode->data;
//         }

//         if(currNode->left != NULL){
//             Q.push(make_pair(currNode->left,currHD - 1));
//         }

//         if(currNode->right != NULL){
//             Q.push(make_pair(currNode->right,currHD + 1));
//         }

//     }

//     for(auto it : m){
//         cout << it.second << " ";
//     }
//     cout << endl;

// }

// Kth level of a Tree 
// void kthLevel(Node* root , int K , int currOrder){
//     if(root == NULL){
//         return ;

//     }

//     if(currOrder == K){
//         cout << root->data << " ";
//         return;
//     }

//     kthLevel(root->left,K,currOrder + 1);
//     kthLevel(root->right,K,currOrder + 1);
// }

// Kth level by iterative Way
// void kthLevel(Node* root,int K){
// if(root == NULL){
//         return;
//     }
//     queue<Node*> Q;
//     Q.push(root);
//     int count = 1;
//     while(!Q.empty()){
//         int levelSize = Q.size();
//         for(int i = 0;i<levelSize; i++){
//             Node* curr = Q.front();
//             Q.pop();
//             if(count == K){
//                 cout << curr->data << " ";
//             }

//             if(curr->left != NULL){
//                 Q.push(curr->left);
//             }

//             if(curr->right != NULL){
//                 Q.push(curr->right);
//             }
//         }
//         count++;
        
//     }
// }

// LCA 
bool rootToNode(Node* root,vector<int> &path,int n){
    if(root == NULL){
        return false;
    }
    path.push_back(root->data);
    if(root->data == n){
        return true;
    }

    bool isLeft = rootToNode(root->left,path,n);
    bool isRight = rootToNode(root->right,path,n);

    if(isLeft || isRight){
        return true;
    }
    path.pop_back();
    return false;

}
int LCA(Node* root , int n1, int n2){
    vector<int> path1;
    vector<int> path2;
    rootToNode(root,path1,n1);
    rootToNode(root,path2,n2);
    int lca = -1;
    for(int i = 0,j=0;i<path1.size() && path2.size();i++ , j++){
        if(path1[i] != path2[j]){
            return lca;
        }
        lca = path1[i];
    }
    return lca;
}

int main(){
vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
Node* root = buildTree(nodes);
cout << "LCA = " << LCA(root,4,3);
return 0;
}