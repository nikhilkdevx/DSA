#include<iostream>
#include<vector>
#include<queue>
#include<cmath>
using namespace std;

class car{
public:
    int idx;
    int distance;
    car(int idx , int d){
        this->idx = idx;
        this->distance = d;
    }

    bool operator < (const car &obj) const {
        return this->distance > obj.distance;
    }

};


void minDistance(vector<pair<int,int>> pos,int k){
    int n = pos.size();
    vector<car>cars;
    
    for(int i = 0 ;i<n;i++){
        int dist = sqrt(pow(pos[i].first,2) + pow(pos[i].second,2));
        cars.push_back(car(i,dist));
    }

    priority_queue<car>pq(cars.begin(),cars.end()); 

    for(int i = 0;i<k;i++){
        cout << pq.top().idx << endl;
        pq.pop();
    }
}

int main(){
    int n = 3;
    vector<pair<int,int>> pos(n,make_pair(0,0));
    pos[0] = make_pair(3,3);
    pos[1] = make_pair(5,-1);
    pos[2] = make_pair(-2,4);
    int k = 2;
    minDistance(pos,k);

    // For Testing
    // cout << pow(-6,2) << endl; // 9;
    // cout << sqrt(2) << endl; // 1.414

}