#include<iostream>
#include <vector>
#include<list>
#include<stack>
using namespace std;

// Vector Structure
// template<class T>
// class Stack{
//     vector<T>vec;
//     public:
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

// arr Structure

// class Stack{
//     public:
//     int n = 5;
//     int *arr;
//     int topIdx = -1;
//     Stack(){
//         arr = new int[n];
//     };
//     ~Stack(){
//         delete[] arr;
//     };

//     int top(){
//         return arr[topIdx];
//     };

//     void push(int val){
//         topIdx++;
//         arr[topIdx] = val;
//     };

//     void pop(){
//         topIdx--;
//     };

//     bool isEmpty(){
//         return topIdx == -1;
//     }
// };

// Linked List Structure using STL;
// template<class T>
// class Stack{
//     list<T>ll;
//     public:
//     void push(T val){
//         ll.push_front(val);
//     };
//     void pop(){
//         ll.pop_front();
//     }
//     T top(){
//         return ll.front();
//     }
//     bool isEmpty(){
//         return ll.size() == 0;
//     }
// };

// Stack using Linked List without STL;
// template<class T>
// class Node{
//     public:
//     T data;
//     Node* next;
//     Node(T val){
//         data = val;
//         next = NULL;
//     };

// };

// template<class T>
// class Stack{
// public:
//     Node<T>* head = NULL;
    
//     void push(T val){
//         Node<T>* newNode = new Node<T>(val);
//         if(head == NULL){
//             head = newNode;
//         } else{
//             newNode->next = head;
//             head = newNode;
//         } 
//     };

//     void pop(){
//         Node<T>* temp = head;
//         head = head->next;
//         temp->next = NULL; 
//         delete temp;
//     }

//     T top(){
//         return head->data;
//     }

//     bool isEmpty(){
//         return head == NULL;
//     }

// };

// Stack using STL

int main(){
    stack<int> s ;
    s.push(3);
    s.push(2);
    s.push(1);

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    return 0;
}