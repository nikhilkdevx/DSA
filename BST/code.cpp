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

Node* buildBST(int arr[],int n){
    
    
}

int main(){
    int arr[6] = {5,1,3,4,2,7};
    Node* root = buildBST(arr,6);
    return 0;

}