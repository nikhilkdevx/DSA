// Largest subarray with 0 sum

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
// solve this using brute force also 
void subArrSum(vector<int>arr){
    unordered_map<int ,int>m;
    int sum = 0;
    int ans = 0;
    for(int j = 0;j<arr.size();j++){
        sum += arr[j];
        if(m.count(sum)){
            int currLen = j - m[sum]; // j - idx
            ans = max(ans,currLen);
        }  else {
            m[sum] = j;
        }
            
            
    }
    
        
}

int main(){
    vector<int>arr = {15,2,-2,-8,1,7,10};
    subArrSum(arr);
}