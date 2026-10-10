#include<iostream>
#include<stack>
using namespace std;

class Queue{
    stack<int> s1;
    stack<int> s2;

    Queue(int val){
        s1.push(val);
    }

    void push(int val){
        while (!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        
    }

    void pop(){
        s2.pop();
    }

    void front(){
        cout << s2.top();
    }

    bool empty(){
        return s2.empty();
    }

};

int main(){
    return 0;
}