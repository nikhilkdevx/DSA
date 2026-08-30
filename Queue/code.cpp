#include <iostream>
using namespace std;

// class Node{
// public:
//     int data;
//     Node* next;

//     Node(int val){
//         data = val;
//         next = NULL;
//     }
// };
//Queue using Linked List

// class Queue{
// public:
//     Node* head = NULL;
//     Node* tail = NULL;

//     void push_back(int val){
//         Node* newNode = new Node(val);
//         if(head == NULL){
//             head = tail = newNode;
//         } else {
//             tail->next = newNode;
//             tail = newNode;
//         };
//     };

//     void pop_back(){
//         if(empty()){
//             cout << "Queue is Empty\n";
//             return;
//         }
//         Node* temp = head;
//         head = head->next;
//         delete temp;
//     };

//     int front(){
//         if(empty()){
//             cout << "Queue is Empty";
//             return -1;
//         }
//         return head->data;
//     }

//     bool empty(){
//         return head == NULL;
//     }
// };

//Queue using array

class Queue{
    int* arr;
    int capacity;
    int currSize;
    int f,r;
public:
    Queue(int capacity){
        this->capacity = capacity;
        arr = new int[capacity];
        currSize = 0;
        r = -1;
        f = 0;

    }

    void push(int data){
        if(currSize == capacity){
            cout << "Queue is Full\n";
            return;
        }
        r = (r +1) % capacity;
        arr[r] = data;
        currSize++;
    }

    void pop(){
        if(empty()){
            cout << "Queue is Empty\n";
            return;
        }
        f = (f+1) % capacity;
        currSize--;


    }

    int front(){
        if(empty()){
            cout << "Queue is Empty\n";
            return -1;
        }
        return arr[f];
    }

    bool empty(){
        return currSize == 0;
    }
};

int main(){
    Queue q(4);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    
    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;
    q.push(5);
    cout << q.front() << endl;
    return 0;
}