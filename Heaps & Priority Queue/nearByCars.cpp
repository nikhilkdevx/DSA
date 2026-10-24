#include<iostream>
#include<vector>
#include<queue>
#include<cmath>
using namespace std;

void minDistance(vector<pair<int,int>> cars,int k){
    int n = cars.size();
    priority_queue<float,vector<float>,greater<float>>pq;
    
    for(int i = 0 ;i<n;i++){
        pq.push(sqrt(pow(cars[i].first,2) + pow(cars[i].second,2)));
    }

    if(pq.top() <= k){
        cout << "The nearby Car is " << pq.top() << endl;
    } else {
        cout << "No Cars Available in " << k << " distance" << endl;
    }

    


}

int main(){
    int n = 3;
    vector<pair<int,int>> Cars(n,make_pair(0,0));
    Cars[0] = make_pair(3,3);
    Cars[1] = make_pair(5,-1);
    Cars[2] = make_pair(-2,4);
    int k = 2;

    // For Testing
    // cout << pow(-6,2) << endl; // 9;
    // cout << sqrt(2) << endl; // 1.414

}