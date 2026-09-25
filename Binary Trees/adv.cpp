#include<iostream>
#include<vector>
using namespace std;



int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTree(nodes);
    // cout << "Diameter = " << diam1(root);
    return 0;
};