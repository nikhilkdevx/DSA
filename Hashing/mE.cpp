// Majority Element --> Best to use map in this becuse of O(1) complexity where other has greater space and time complexities

// Solve again it first by using freq array 
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

void majorityElement(vector<int>nums){
    int n = nums.size();
    unordered_map<int,int>m;
    for(int i = 0 ;i<n;i++){
        if(m.count(nums[i])){
            m[nums[i]]++;
        } else {
            m[nums[i]] = 1;
        }
    }
    for(pair<int,int>p : m){
        if(p.second > n/3){
            cout << p.first << " ";
        }
    }
    cout << endl;
}

int main(){
    vector<int> nums = {1,3,2,5,1,3,1,5,1};
    majorityElement(nums);
    return 0; 
}