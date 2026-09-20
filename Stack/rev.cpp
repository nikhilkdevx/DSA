#include<iostream>
#include<vector>
#include<list>
#include<stack>
using namespace std;

// template<class T>
// class Stack{
//     vector<T> vec;
    
// public:
//     void push(T val){
//         vec.push_back(val);
//     }

//     void pop(){
//         if(isEmpty()){
//             cout << "Stack is Empty";
//             return;
//         }
//         vec.pop_back();
//     }

//     T top(){
//         int lastIdx = vec.size() - 1;
//         return vec[lastIdx];
//     }

//     bool isEmpty(){
//         return vec.size() == 0;
//     }


// };

// template<class T>
// class Stack{
// public:
//     int n = 4;
//     T *arr;
//     int idx = 0;
//     Stack(){
//         arr = new T[n];
//     }
//     void push(T val){
//         arr[idx] = val;
//         idx++;
//     }
    
//     void pop(){
//         idx--;
//     }

//     int top(){
//         return arr[idx - 1];
//     }

//     bool isEmpty(){
//         return idx == 0;
//     }
// };

// template<class T>
// class Stack{
//     list<T>ll;
// public:
//     void push(T val){
//         ll.push_front(val);
//     }

//     void pop(){
//         ll.pop_front();
//     }

//     bool isEmpty(){
//         return ll.size() == 0;
//     }

//     T top(){
//         return  ll.front();
//     }
// };

// template<class T>
// class Stack{
//     class Node{
//     public:
//     T data;
//     Node* next;
//         Node(T val){
//             data = val;
//             next = NULL;
//         }
//     };

//     class List{
//     public:
//         Node* head = NULL;
//         void push_front(T val){
//             Node* newNode = new Node(val);
            
//             newNode->next = head;
//             head = newNode;

            
//         }

//         void pop_front(){
//             Node *temp = head;
//             if(head == NULL){
//                 cout << "LInked List is Empty";
//                 return;
//             } else{
//                 head = head->next;
//                 delete temp;
//             }

//         }

//         T top(){
//             return head->data;
//         }

//         bool isEmpty(){
//             return head == NULL;
//         }
//     };

//     List ll;
//     public:
    
//     void push(T val){
//         ll.push_front(val);
//     }

//     void pop(){
//         ll.pop_front();
//     }

//     bool isEmpty(){
//         return ll.isEmpty();
//     }

//     T top(){
//         return  ll.top();
//     }

// };

// void pushAtBottom(stack<int> &s,int val){
//     if(s.empty()){
//         s.push(val);
//         return;
//     }

//     int temp = s.top();
//     s.pop();
//     pushAtBottom(s,val);
//     s.push(temp);
// }

// void reverseString(string str,string ans){
//     stack<char> s;
//     for(int i=0;i<str.size();i++){
//         char ch = str[i];
//         s.push(ch);
//     }

//     while(!s.empty()){
//         ans += s.top();
//         s.pop();
//     }

//     for(int i=0;i<ans.size();i++){
//         cout << ans[i];
//     }
// }

// void stockSpan(vector<int> stocks,vector<int> span){
//     stack<int> s;
//     s.push(0);
//     span[0] = 1;
//     for(int i=1;i<stocks.size();i++){
//         int currPrice = stocks[i];
//         while(!s.empty() && currPrice >= stocks[s.top()]){
//             s.pop();
//         };

//         if(s.empty()){
//             span[i] = i+1;
//         } else{
//             int prevHigh = s.top();
//             span[i] = i - prevHigh;
//         }

//         s.push(i);

//     };

//     for(int i=0;i<span.size();i++){
//         cout << span[i] << ",";

//     }

//     cout << endl;
// }



int main(){
    vector<int> arr = {6,8,0,1,3};
    vector<int> ans = {0,0,0,0,0};
    nextGreaterElement(arr,ans);
    return 0;
}