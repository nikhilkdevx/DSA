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

void pushAtBottom(stack<int> &s,int val){
    if(s.empty()){
        s.push(val);
        return;
    }

    int temp = s.top();
    s.pop();
    pushAtBottom(s,val);
    s.push(temp);
}

int main(){
    stack<int> s;
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    pushAtBottom(s,5);
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    return 0;
}