#include <iostream>
#include <stack>
#include <vector>
#include <list>
#include<string>
using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int val)
//     {
//         this->data = val;
//         next = NULL;
//     }
// };

// bool palindrome(Node* head){
//     if(head == NULL){
//         cout << "List is Empty";
//         return true;
//     }
//     if(head->next == NULL){
//         return true;
//     }
//     stack<int> S;
//     Node* temp = head;
//     while(temp != NULL){
//         int curr = temp->data;
//         S.push(curr);
//         temp = temp->next;
//     }

//     temp = head;

//     while(!S.empty() && temp != NULL){
//         int curr = S.top();
//         if(curr != temp->data){
//             return false;
//         }
//         S.pop();
//         temp = temp->next;
//     }
//     return true;
// }

// Solving Question 2
void decodedStr(string &str , string &ans){
    string ans1 = "";
    stack<char> temp;
    for(int i = 0;i<str.size();i++){
        char curr = str[i];
        temp.push(curr);
    }
    stack<pair<int , string >> S;
    int currDigit = 0;
    string currChar = "";

    while(!temp.empty()){
        if(temp.top() == ']'){
            temp.pop();
            while(temp.top() != '['){
            currChar.push_front(temp.top());
            temp.pop();
            }
            temp.pop();
            currDigit = temp.top();
            temp.pop();
            S.push(make_pair(currDigit,currChar));
            currDigit = 0;
            currChar = "";
        } else{
            ans1.push_front(temp.top());
            temp.pop();
        }
        
    }

    string ans2 = "";

    while(!S.empty()){
        for(int i = 0 ;i<S.top().first;i++){
            ans2.push_back(S.top().second);
        }
        S.pop();

    }

    ans = ans2 + ans1;
    

}

int main()
{
    // Node* head1 = new Node(1);
    // head1->next = new Node(2);
    // head1->next->next = new Node(2);
    // head1->next->next->next = new Node(1);
    // cout << palindrome(head1);

    // Node* head2 = new Node(1);
    // head2->next = new Node(2);
    // head2->next->next = new Node(3);

    // cout << palindrome(head2);

    string str = "3[a]2[bc]ef";
    string ans = "";
    decodedStr(str,ans);
    return 0;
}