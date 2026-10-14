#include<iostream>
#include<stack>
#include<queue>
#include<string>
using namespace std;

//Revising Queue using 2 Stacks
// class Queue{
//     stack<int> s1;
//     stack<int> s2;
// public:
//     void push(int val){
//         while (!s1.empty()){
//             s2.push(s1.top());
//             s1.pop();
//         }
//         s1.push(val);
//         while(!s2.empty()){
//             s1.push(s2.top());
//             s2.pop();
//         }
        
//     }

//     void pop(){
//         s1.pop();
//     }

//     void front(){
//         cout << s1.top();
//     }

//     bool empty(){
//         return s1.empty();
//     }

// };

// Revising stack using 2 queues
// class Stack{
//     queue<int> q1;
//     queue<int> q2;
// public:
//     void push(int val){
//         while (!q1.empty()){
//             q2.push(q1.front());
//             q1.pop();

//         }
//         q1.push(val);
//         while (!q2.empty()){
//             q1.push(q2.front());
//             q2.pop();
//         }
        
//     }

//     int top(){
//         return q1.front();
//     }

//     void pop(){
//         if(q1.empty()){
//             cout << "Already Empty";
//             return;
//         }
//         q1.pop();
//     }

//     bool empty(){
//         return q1.empty();
//     }
// };

// Queue Reversal
// void QueueReversal(queue<int> &q){
//     stack<int>s;
//     while(!q.empty()){
//         s.push(q.front());
//         q.pop();
//     }

//     while(!s.empty()){
//         q.push(s.top());
//         s.pop();
//     }

//     while(!q.empty()){
//         cout << q.front() << " ";
//         q.pop();
//     }
// }

// Interleave 2 Queues
// void interleaveQueue(queue<int>&q){
//     int n = q.size();
//     queue<int> first;
//     for(int i = 0;i<n/2;i++){
//         first.push(q.front());
//         q.pop();
//     }
//     while(!first.empty()){
//         q.push(first.front());
//         first.pop();
//         q.push(q.front());
//         q.pop();
//     } 
//     while(!q.empty()){
//         cout << q.front() << " ";
//         q.pop();
//     }  
// }

// NoN Repeating Letter
string NonRepeating(string str){

}
int main(){
    // queue<int> q;
    // for(int i = 1;i<= 10;i++){
    //     q.push(i);
    // }
    // interleaveQueue(q);
    // QueueReversal(q);
    string str =  "aabccxb";
    NonRepeating(str);
    return 0;
}