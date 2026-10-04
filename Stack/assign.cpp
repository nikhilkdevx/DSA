#include<iostream>
#include<stack>
#include<vector>
#include<list>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        this->data = val;
        next = NULL;
    }
};

