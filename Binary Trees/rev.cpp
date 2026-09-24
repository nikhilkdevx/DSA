#include<iostream>
#include<vector>
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
    
}

int main(){
vector<int> nodes = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
Node* root = buildTree(nodes);
}