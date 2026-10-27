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

// bool compare(pair<double,int> p1,pair<double,int> p2){
//     return p1.first > p2.first;
// }

// void fractionalKnapSack(vector<int>val,vector<int>wt,int W){
//     int n = val.size();
//     vector<pair<double,int>>ratio(n,make_pair(0.0,0));

//     for(int i = 0; i<n;i++){
//         double r = val[i] / wt[i] ;
//         ratio[i] =  make_pair(r,i);
//     }

//     sort(ratio.begin(),ratio.end(),compare);
//     int TotalPrice = 0;
//     for(int i = 0;i<n;i++){
//         int idx = ratio[i].second;
//         if(W >= wt[idx]){
//             TotalPrice += val[idx];
//             W -= wt[idx];
//         } else {
//             TotalPrice += ratio[i].first * W;
//             W = 0;
//             break;
//         }
//     }
//     cout << "Max Value = " << TotalPrice << endl;
// }

// Absolute Difference
// void absoluteDiff(vector<int>a,vector<int>b){
//         sort(a.begin(),a.end());
//         sort(b.begin(),b.end());
//         int absoluteDiff = 0;
//         for(int i=0;i<a.size();i++){
//             absoluteDiff += abs(a[i] - b[i]);
//         }

//         cout << "Min Absolute Diff = " << absoluteDiff << endl;
// }

// Max Chain of Langth

// bool compare(pair<int,int> p1,pair<int,int>p2){
//     return p1.second < p2.second;
// }

// void maxChainLength(vector<pair<int,int>> pairs){
//     int n = pairs.size();
//     sort(pairs.begin(),pairs.end(),compare);
//     int count = 1;
//     int curr = pairs[0].second;
//     for(int i = 1;i<pairs.size();i++){
//         if(curr < pairs[i].first){
//             count++;
//             curr = pairs[i].second;
//         }
//     }

//     cout << "Max Length of Chain Pairs Can be " << count;
// };

// Indian Coins

// void getMinChange(vector<int>coins,int v){
//     int ans = 0;
//     int n = coins.size();
//     for(int i = n-1;i>=0;i--){
//         if(v >= coins[i] && v > 0){
//             ans += v / coins[i]; // it will give the quotient
//             cout << coins[i] << ",";
//             v = v % coins[i]; // modulo will give the remainder
//         }

        
//     }
//     cout << endl;

//     cout << "The Min Change required are " << ans << endl;
    
// }

// Job Sequence 

class job{
    public:
    int idx;
    int deadline;
    int profit;

    
    job(int idx,int deadline,int profit){
        this->deadline = deadline;
        this->idx = idx;
        this->profit = profit;
    }
};

void jobSeq(vector<pair<int,int>>pairs){
    int n = pairs.size();
    vector<job>jobs;
    for(int i = 0;i<n;i++){
        jobs.emplace_back(i,pairs[i].first,pairs[i].second);
    }
    sort(jobs.begin(),jobs.end(),[](job &a,job &b){
        return a.profit > b.profit;
    });
    int maxDeadline = 0;
    for(int i = 0;i<n;i++){
        maxDeadline = max(maxDeadline,jobs[i].deadline);
    }
    vector<bool>slots(maxDeadline + 1 ,false);
    int totalProfit = 0;
    for(int i = 0; i<n;i++){
        for(int j = jobs[i].deadline;j >= 1;j--){
            if(slots[j] == false){
                slots[j] == true;
                totalProfit += jobs[i].profit;
                break;
            }
        }
    
    }

    cout << "Max Profit " << totalProfit << endl;
};


int main(){
    // vector<int>start = {1,3,0,5,8,5};
    // vector<int> end = {2,4,6,7,9,9};
    // absoluteDiff(start,end);
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
    
    // vector<int> val = {60,100,120};
    // vector<int> wt = {10,20,30};
    // int W = 50;
    // fractionalKnapSack(val,wt,W);
    // vector<pair<int,int>> pairs(5,make_pair(0,0));
    // pairs[0] = make_pair(5,24);
    // pairs[1] = make_pair(39,60);
    // pairs[2] = make_pair(5,28);
    // pairs[3] = make_pair(27,40);
    // pairs[4] = make_pair(50,90);
    // maxChainLength(pairs);

    // vector<int> Coins = {1, 2, 5, 10, 20, 50, 100, 500, 2000};
    // int V = 590;
    // getMinChange(Coins,V);

    int n = 4;
    vector<pair<int,int>> jobs(n,make_pair(0,0));
    jobs[0] = make_pair(4,20);
    jobs[1] = make_pair(1,10);
    jobs[2] = make_pair(1,40);
    jobs[3] = make_pair(1,30);
    jobSeq(jobs);
    return 0;
    
}