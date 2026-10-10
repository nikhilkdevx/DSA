#include<iostream>
#include<stack>
#include<queue>
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
class Stack{
    queue<int> q1;
    queue<int> q2;
public:
    void push(int val){
        while (!q1.empty()){
            q2.push(q1.front());
            q1.pop();

        }
        q1.push(val);
        while (!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        
    }

    int top(){
        return q1.front();
    }

    void pop(){
        if(q1.empty()){
            cout << "Already Empty";
            return;
        }
        q1.pop();
    }

    bool empty(){
        return q1.empty();
    }
};

int main(){
    // Queue q;
    // q.push(1);
    // q.push(2);
    // q.push(3);
    // q.push(4);

    // while(!q.empty()){
    //      q.front();
    //      cout << " ";
    //      q.pop();
    // }
    Stack S;
    S.pop();
    // S.push(1);
    // S.push(2);
    // S.push(3);
    // S.push(4);

    // while(!S.empty()){
    //     cout << S.top() << " ";
    //     S.pop();
    // }
    return 0;
}