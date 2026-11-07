// Largest subarray with 0 sum

//Concept of both questions 
// sum[i,j] = sum[j]  - sum[i-1];

// Take Enough Time but revise this completely boths

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
// solve this using brute force also 
// void subArrSum(vector<int>arr){
//     unordered_map<int ,int>m;
//     int sum = 0;
//     int ans = 0;
//     for(int j = 0;j<arr.size();j++){
//         sum += arr[j];
//         if(m.count(sum)){
//             int currLen = j - m[sum]; // j - idx
//             ans = max(ans,currLen);
//         }  else {
//             m[sum] = j;
//         }
            
            
//     }
//     cout << ans << endl;
        
// }

// subArray sum equals k

void func(vector<int>arr,int k){
    int sum = 0;
    int ans = 0;
    unordered_map<int,int>m;
    m[0] = 1;
    for(int i = 0;i<arr.size();i++){
        sum += i;
        if(m.count(sum-k)){
            ans+= m[sum-k];
        }

        if(m.count(sum)){
            m[sum]++;
        } else {
            m[sum] = 1;
        }


    }
    cout << ans;
}

int main(){
    vector<int>arr = {1,2,3};
    int k = 3;
    func(arr,k);
}