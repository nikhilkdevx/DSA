#include<iostream>
#include<queue>
#include<deque>
#include<vector>
#include<stack>
using namespace std;

// int totalTime(int tickets[3],int k, int n){
//     queue<pair<int,int>> q;
//     int timetaken = 0;
//     for(int i = 0; i<n;i++){
//         q.push(make_pair(tickets[i],i));
//     }
//     while(!q.empty()){
//         pair<int,int> person = q.front();
//         q.pop();
//         person.first--;
//         timetaken++;
//         if(person.second == k && person.first == 0){
//             break;
//         }
//         if(person.first > 0){
//             q.push(person);
//         }        
//     }
//     return timetaken;
// }

// Solving Question no 2
// int gasStation(vector<int>& gas, vector<int>& cost) {
//     int totalGas = 0;
//     int totalCost = 0;

//     int tank = 0;
//     int start = 0;

//     for (int i = 0; i < gas.size(); i++) {
//         totalGas += gas[i];
//         totalCost += cost[i];

//         tank += gas[i] - cost[i];

//         if (tank < 0) {
//             start = i + 1;
//             tank = 0;
//         }
//     }

//     if (totalGas < totalCost) {
//         return -1;
//     }

//     return start;
// }

// Solving Question no 3
void queueReversal(queue<int> &q,int k){
    stack<int>s;
    while(!q.empty()){
        if(q.front() == k){
            s.push(q.front());
            break;
        }
        s.push(q.front());
    }

    while(!s.empty()){
        q.push(s.top());
    }

    while(q.front() != k){
        q.push(q.front());
    }
}

int main() {
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    int k = 3;
    queueReversal(q,k);
    return 0;
}
