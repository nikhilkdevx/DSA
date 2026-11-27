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
        left = NULL;
        right = NULL;
    }
};

static int idx = -1;
Node* BuildTree(vector<int> &nodes){
    idx++;
    if(nodes[idx] == -1){
        return NULL;
    }
    Node* currNode = new Node(nodes[idx]);
    currNode->left = BuildTree(nodes);
    currNode->right = BuildTree(nodes);
    return currNode;
}

void preorder(Node* root){ // root -> left -> right
    if(root == NULL){
        return;
    }
    cout << root->data<< " ";
    preorder(root->left);
    preorder(root->right);

}

void inorder(Node* root){ // left -> root -> right
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder(Node* root){ // left -> right -> root
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void levelOrder(Node* root){
    if(root == NULL){
        return;
    }
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node* curr = q.front();
        q.pop();
        cout << curr->data << " ";
        if(curr->left != NULL){
            q.push(curr->left);
        } if(curr->right != NULL){
            q.push(curr->right);
        }
    }

}

int heightofTree(Node* root){
    if(root == NULL){
        return 0;
    }
    int maxHeight = 0;
    int leftHeight = heightofTree(root->left);
    int rightHeight = heightofTree(root->right);
    maxHeight = max(max(leftHeight,rightHeight),maxHeight) + 1;
    return maxHeight;
}

int countOfNodes(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftCount = countOfNodes(root->left);
    int rightCount = countOfNodes(root->right);
    int currCount = leftCount + rightCount + 1;
    return currCount;
}

int sumOfNodes(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftSum = sumOfNodes(root->left);
    int rightSum = sumOfNodes(root->right);
    int currSum = leftSum + rightSum + root->data;
    return currSum;
}

int diameterOfTree1(Node* root){
    if(root == NULL){
        return 0;
    }
    int maxDia = 0;
    int currDia = heightofTree(root->left) + heightofTree(root->right);
    int leftDia = diameterOfTree1(root->left);
    int rightDia = diameterOfTree1(root->right);
    maxDia = max(max(leftDia,rightDia),currDia);
    return maxDia;

}

bool isSubTree(Node* root1,Node* root2){
    if(root1 == NULL && root2 == NULL){
        return true;
    }
    if(root1 == NULL || root2 == NULL){
        return false;
    }

    if(root1->data != root2->data){
        return false;
    }

    bool left = isSubTree(root1->left,root2->left);
    bool right = isSubTree(root1->right,root2->right);

    if(!left){
        return false;
    }
    if(!right){
        return false;
    }

    return true;
}

int main(){
    vector<int>nodes = {1,2,4,-1,-1,-1,3,-1,5,-1,-1};
    Node* root2 = new Node(1);
    root2->left = new Node(2);
    Node* root1 = BuildTree(nodes);
    cout << isSubTree(root1,root2) << endl;
    return 0;
}