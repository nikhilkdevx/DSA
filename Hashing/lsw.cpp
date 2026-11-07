// Largest subarray with 0 sum

#include<iostream>
#include<vector>
using namespace std;

void subArrSum(vector<int>arr){
    // Brute Force Approach
    int ans = 0;
    for(int i = 0;i<arr.size();i++){
        int sum = 0;
        for(int j = i+1;j<arr.size();j++){
            sum = i + j;
            if(sum == 0){
                ans++;
            }
        }
    }
    cout << ans << endl;
}

int main(){
    vector<int>arr = {15,2,-2,-8,1,7,10};
}