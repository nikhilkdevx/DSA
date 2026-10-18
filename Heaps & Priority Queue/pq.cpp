// Topic --> Priority Queue

#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> pq;
    pq.push(10);
    pq.push(20);
    pq.push(3);

    cout << pq.top() << endl;
    return 0;
}