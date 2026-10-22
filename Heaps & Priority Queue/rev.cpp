#include<iostream>
#include<vector>
#include<string>
#include<queue>
using namespace std;

// Priority Queues 
int main(){
    priority_queue<int> p;
    p.push(2);
    p.push(9);
    p.push(0);


    while(!p.empty()){
        cout << p.top() << " ";
        p.pop();
    }
}