#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    };
    
};

class List {
public:
    Node* head;
    Node* tail;

    List() {
        head = NULL;
        tail = NULL;
    }

    void push_back(int val) {
        Node* newNode = new Node(val);

        if(head == NULL) {
            head = tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }
};

Node* splitAtMid(Node* head){
    Node* slow = head;
    Node* fast = head;
    Node* prev = NULL;
    while(fast != NULL && fast->next != NULL){
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    if(prev != NULL){
        prev->next = NULL;
    }
    return slow;
}

Node* merge(Node* left,Node* right){
    Node* i = left;
    Node* j = right;
    List ans;
    
    while(i != NULL && j != NULL){
        if( i->data >= j->data){
            ans.push_back(i->data);
            i = i->next;
        } else {
            ans.push_back(j->data);
            j = j->next;
        }
    }

    while(i != NULL){
        ans.push_back(i->data);
        i = i->next;

    }

    while(j != NULL){
        ans.push_back(j->data);
        j = j->next;
    }

    return ans.head;

}

Node* mergeSort(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }

    Node* righthead = splitAtMid(head);
    
    Node* left = mergeSort(head);
    Node* right = mergeSort(righthead);
    return merge(left,right);
}

int main(){
    list ll;
    ll.push_back()
    
    
}