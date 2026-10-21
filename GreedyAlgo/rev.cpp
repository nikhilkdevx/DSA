// Activity Selection

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// int maxActivities(vector<int>start,vector<int> end ){
//     int count = 1;
//     int currEndTime = end[0];
    
//     for(int i = 1;i<start.size();i++){
//         if(start[i] >= currEndTime){
//             count++;
//             currEndTime = end[i];
//         }
//     }

//     return count;
// }

// bool compare(pair<int,int> &p1,pair<int,int> &p2){
//     return p1.second < p2.second ;
// }

// Fractional KnapSack

bool compare(pair<double,int> p1,pair<double,int> p2){
    return p1.first > p2.first;
}

void fractionalKnapSack(vector<int>val,vector<int>wt,int W){
    int n = val.size();
    vector<pair<double,int>>ratio(n,make_pair(0.0,0));

    for(int i = 0; i<n;i++){
        double r = val[i] / wt [i] ;
        ratio[i] =  make_pair(r,i);
    }

    sort(ratio.begin(),ratio.end(),compare);
    int TotalPrice = 0;
    for(int i = 0;i<n;i++){
        int idx = ratio[i].second;
        if(W >= wt[idx]){
            TotalPrice += val[idx];
            W -= wt[idx];
        } else {
            TotalPrice += ratio[i].first * W;
            W = 0;
            break;
        }
    }
}
int main(){
    // vector<int>start = {1,3,0,5,8,5};
    // vector<int> end = {2,4,6,7,9,9};
    // cout << "Max No of Activities = " << maxActivities(start,end) << endl;

    // vector<int> start = {0,1,2};
    // vector<int> end = {9,2,4};
    // vector<pair<int,int>> acitvity(3,make_pair(0,0));

    // for(int i = 0;i<acitvity.size();i++){
    //     acitvity[i] = make_pair(start[i],end[i]);
    // }

    // sort(acitvity.begin(),acitvity.end(),compare);

    // cout << "Sorted---\n";
    // for(int i = 0;i<acitvity.size();i++){
    //     cout << acitvity[i].first << "," << acitvity[i].second << endl;
    // }
    
    vector<int> val = {60,100,120};
    vector<int> wt = {10,20,30};
    int W = 50;
    fractionalKnapSack(val,wt,W);
    return 0;
    
}