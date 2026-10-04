#include <iostream>
#include <stack>
#include <vector>
#include <list>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        this->data = val;
        next = NULL;
    }
};

bool palindrome(Node* head){
    if(head == NULL){
        cout << "List is Empty";
        return true;
    }
    if(head->next == NULL){
        return true;
    }
    stack<int> S;
    Node* temp = head;
    while(temp != NULL){
        int curr = temp->data;
        S.push(curr);
        temp = temp->next;
    }

    temp = head;

    while(!S.empty() && temp != NULL){
        int curr = S.top();
        if(curr != temp->data){
            return false;
        }
        S.pop();
        temp = temp->next;
    }
    return true;
}

int main()
{
    // Node* head1 = new Node(1);
    // head1->next = new Node(2);
    // head1->next->next = new Node(2);
    // head1->next->next->next = new Node(1);
    // cout << palindrome(head1);

    Node* head2 = new Node(1);
    head2->next = new Node(2);
    head2->next->next = new Node(3);

    cout << palindrome(head2);

    return 0;
}