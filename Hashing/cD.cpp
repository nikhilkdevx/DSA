// count Distinct

#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;

int distinctEls(vector<int>nums){
    unordered_set<int> n;
    for(int i = 0;i<nums.size();i++){
        n.insert(nums[i]);
    }
    for(int el : n){
        cout << el << " ";
    }
    cout << endl;
    return n.size();
}

int main(){
    vector<int> nums = {4,3,2,5,6,7,3,4,2,1};
    distinctEls(nums);
}