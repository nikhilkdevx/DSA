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

int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(2);
    head->next->next->next = new Node(1);
    
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    
    return 0;
}