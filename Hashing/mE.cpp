// Majority Element --> Best to use map in this becuse of O(1) complexity where other has greater space and time complexities

// Solve again it first by using freq array 
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {1,3,2,5,1,3,1,5,1};
    unordered_map<int,int>m;
    for(int i = 0 ;i<nums.size();i++){
        if(m[nums[i]]){

        }
    }
    return 0; 
}