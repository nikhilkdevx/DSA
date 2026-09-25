#include <iostream>
#include <vector>
#include <list>
#include <stack>
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

// void nextGreaterElement(vector<int> arr,vector<int> ans){
//     int idx = arr.size() - 1;
//     stack<int> s;
//     ans[idx] = -1;
//     s.push(arr[idx]);

//     for(idx = idx-1; idx >=0 ; idx--){
//         int curr = arr[idx];
//         while(!s.empty() && curr >= s.top()){
//             s.pop();
//         }

//         if(s.empty()){
//             ans[idx] = -1;
//         } else{
//             ans[idx] = s.top();
//         }

//         s.push(curr);
//     }

//     for(int i=0;i<ans.size();i++){
//         cout << ans[i] << " ";
//     }
//     cout << endl;
// }

// valid Pthes
// bool validPthes(string str)
// {
//     stack<char> s;
//     for (int i = 0; i < str.size(); i++)
//     {
//         char curr = str[i];

//         // opening brackets logic
//         if (curr == '(' || curr == '{' || curr == '[')
//         {
//             s.push(curr);
//         }
//         else
//         {
//             if (s.empty())
//             {
//                 return false;
//             }

//             char top = s.top();

//             if ((top == '(' && curr == ')') ||
//                 (top == '{' && curr == '}') ||
//                 (top == '[' && curr == ']'))
//             {
//                 s.pop();
//             }
//             else
//             {
//                 return false;
//             }
//         }
//     }

//     if (s.empty())
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
//     return s.empty();
// }

// duplicat pthes
// bool duplicatPthes(string str){
//     stack<char>s;
//     for(int i=0;i<str.size();i++){
//         char ch = str[i];
//         if(ch != ')'){
//             s.push(ch);
//         } else {
//             if(s.top() == '('){
//                 return true;
//             }
//             while(s.top() != '('){
//                 s.pop();
//             }
//             s.pop();
//         }
//     }

//     return false;
// }

// Histogram Logic 
int maxHistogramArea(vector<int> height){
    int n = height.size();
    vector<int>LeftBoundary(0,n);
    vector<int>rightBoundary(0,n);
    stack<int> s;

    // Finding Next smaller Left
    LeftBoundary[0] = -1;
    s.push(0);
    for(int i = 0;i<n ;i++){
        int curr = height[i];
        while(!s.empty() && curr <= height[s.top()]){
            s.pop();
        }
    }
    // Calculating Area
    int maxArea = 0;
    for(int i = 0;i < n; i++){
        int height = height[i];
        int width = rightBoundary[i] - LeftBoundary[i] - 1;
        int area = height * width;
        maxArea = max(area,maxArea);
    }

    cout << "The Maximum Area of Histogram is : " << maxArea;
}

int main()
{
    vector<int> height = {2,1,5,6,2,3};


    return 0;
}