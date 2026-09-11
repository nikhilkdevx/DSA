#include<iostream>
#include<list>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};
// brute Force
// bool intersection(Node* head1,Node* head2){
//     Node* temp1 = head1;
//     Node* temp2 = head2;
//     while(temp1 != NULL){
//         while(temp2 != NULL){
//             if(temp1 == temp2){
//             cout << "Intersection Exist At " << temp1->data << endl;
//             return true;
//         }
//         temp2 = temp2->next;
//         }
//         temp2 = head2;
//         temp1 = temp1->next;
       
//     }
//     cout << "No Intersection Here\n";
//     return false;
// }

// Efficient Way 
int getIntersection(Node* head1,Node* head2){
    Node* temp1 = head1;
    Node* temp2 = head2;

    while(temp1 != temp2){
        if(temp1 == NULL){
            temp1 = head2;
        } else {
            temp1 = temp1->next;
        }
        if(temp2 == NULL){
            temp2 = head1;
        } else {
            temp2 = temp2->next;
        }

    }
    return temp1->data;
}
int main(){
    Node* head1 = new Node(1);
    head1->next = new Node(2);
    head1->next->next = new Node(3);
    Node* common = new Node(6);
    common->next = new Node(7);
    head1->next->next->next = common;

    Node* head2 = new Node(4);
    head2->next = new Node(5);
    head2->next->next = common;
    // cout << intersection(head1,head2);
    cout << getIntersection(head1,head2);

    return 0;
}