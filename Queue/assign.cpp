#include<iostream>
#include<queue>
using namespace std;

int totalTime(int tickets[3],int k, int n){
    queue<pair<int,int>> q;
    int timetaken = 0;
    for(int i = 0; i<n;i++){
        q.push(make_pair(tickets[i],i));
    }
    
    return timetaken;
}

int main(){
    int tickets[3] = {2,3,2}; 
    int n = 3;
    int k = 2;
    totalTime(tickets,k,n);
    return 0;
}