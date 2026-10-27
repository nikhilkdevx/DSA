// Connect N Ropes

#include<iostream>
#include<vector>
#include<queue>
#include<cmath>
using namespace std;

void minLength(vector<int>length){
    int n = length.size();
    priority_queue<int,vector<int>,greater<int>>pq(length.begin(),length.end());

    int ans = 0;
    while(pq.size() > 1){
        int min1 = pq.top();
        pq.pop();
        int min2 = pq.top();
        pq.pop();

        ans += (min1 + min2);
        pq.push(min1 + min2);
    }

    cout << "Min Cost = " << ans;
}


int main(){
    vector<int> length = {4,3,2,6};
    minLength(length);
}

// Solve Merge Stone [Qno 1000 leet code]