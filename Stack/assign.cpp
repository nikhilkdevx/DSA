#include <iostream>
#include <stack>
#include <vector>
#include <list>
#include<string>
#include<sstream>
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

// string simplifyPath(string path) {

//     stack<string> s;

//     stringstream ss(path);
//     string word;

//     while (getline(ss, word, '/')) {

//         if (word == "" || word == ".") {
//             continue;
//         }

//         else if (word == "..") {
//             if (!s.empty()) {
//                 s.pop();
//             }
//         }

//         else {
//             s.push(word);
//         }
//     }

//     string ans = "";

//     while (!s.empty()) {
//         ans = "/" + s.top() + ans;
//         s.pop();
//     }

//     return ans;
// }

// Solving Question no 4
int waterStored(vector<int>height){
    int n = height.size();
    stack<int> S;
    vector<int>nextGreaterRight = {n};
    vector<int>prevGreaterLeft = {n};
    nextGreaterRight[n-1] = -1;
    S.push(n-1);
    for(int i = n-2; i>=0; i--){
        while(!S.empty()){
            int currIdx = height[i];
            int prevIdx = height[S.top()];
            if(currIdx < prevIdx){
                nextGreaterRight[i] = currIdx;
                S.push(i);
            } else {
                S.pop();
            }
        }
        if(S.empty()){
            nextGreaterRight[i] = -1;
            S.push(i);
        }
    }
}

int main() {
    // string path = "/home/user/Documents/../Pictures";

    // cout << simplifyPath(path);
    vector<int>height = {7, 0, 4, 2, 5, 0, 6, 4, 0, 5};
    cout << waterStored(height);
    return 0;
}