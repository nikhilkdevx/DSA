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
// string decodedString(string str) {
//     stack<pair<int, string>> s;

//     string curr = "";
//     int num = 0;

//     for (int i = 0; i < str.size(); i++) {

//         // Build the number
//         if (isdigit(str[i])) {
//             num = num * 10 + (str[i] - '0');
//         }

//         // Opening bracket
//         else if (str[i] == '[') {
//             s.push({num, curr});

//             num = 0;
//             curr = "";
//         }

//         // Normal character
//         else if (isalpha(str[i])) {
//             curr += str[i];
//         }

//         // Closing bracket
//         else if (str[i] == ']') {

//             int repeat = s.top().first;
//             string previous = s.top().second;

//             s.pop();

//             string temp = "";

//             for (int j = 0; j < repeat; j++) {
//                 temp += curr;
//             }

//             curr = previous + temp;
//         }
//     }

//     return curr;
// }

// solving question no 3
int main()
{
    String str = 
    return 0;
}