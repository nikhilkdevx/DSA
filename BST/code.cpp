#include<iostream>
#include<vector>
using namespace std;

class Node{
    int val;
    Node* left;
    Node* right;

    Node(int val){
        this->val = val;
        left  = NULL;
        right = NULL;
    }
};

static int idx = -1;

Node* buildTree(vector<int>nodes){
    idx++;
    if(nodes[idx] == -1){
        return NULL;
    }
    Node* left = buildTree(nodes);
    
}

int main(){
    vector<int> nodes = {5,2,1,-1,-1,4,3,-1,-1,-1,6,-1,7,-1,-1};
    Node* root = buildTree(nodes);

}