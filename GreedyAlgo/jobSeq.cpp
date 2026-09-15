#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// bool compare(pair<int,int> p1, pair<int,int> p2){
//     return p1.second > p2.second;
// };

// int maxProfit(vector<pair<int,int>> jobs){
//     sort(jobs.begin(),jobs.end(),compare);
//     int profit = jobs[0].second;
//     int safeDeadline = 2;

//     for(int i = 1;i<jobs.size();i++){
//         if(jobs[i].first >= safeDeadline){
//             profit += jobs[i].second;
//             safeDeadline++;
//         }
//     }

//     cout << profit << endl;
//     return profit;
// }

// Added Variation

class job{
public:
    int idx;
    int deadline;
    int profit;

    job(int idx,int deadline,int profit){
        this->idx = idx;
        this->deadline = deadline;
        this->profit = profit;
    }
};

int maxProfit(vector<pair<int,int>> pairs){
    int n = pairs.size();
    vector<job> jobs;
    for(int i =0;i<n;i++){
        jobs.emplace_back(i,pairs[i].first,pairs[i].second);
    }

    sort(jobs.begin(),jobs.end(),[](job &a,job &b){
        return a.profit > b.profit;
    });
    cout << "Selecting Job" << jobs[0].idx << endl;
    int profit = jobs[0].profit;
    int safeDeadline = 2;

    for(int i = 1;i<n;i++){
        if(jobs[i].deadline >= safeDeadline){
            cout << "Selecting Job" << jobs[i].idx << endl;
            profit += jobs[i].profit;
            safeDeadline++;
        }
    }

    cout << "Max Profit is " << profit << endl;
    return profit;

}


int main(){
    int n = 4;
    vector<pair<int,int>> jobs(n,make_pair(0,0));
    jobs[0] = make_pair(4,20);
    jobs[1] = make_pair(1,10);
    jobs[2] = make_pair(1,40);
    jobs[3] = make_pair(1,30);
    maxProfit(jobs);
    return 0;
}