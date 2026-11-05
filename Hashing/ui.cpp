// Union And intersection 
#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;

void Union(vector<int>arr1,vector<int>arr2){
    unordered_set<int>ui;
    for(int i = 0 ;i<arr1.size();i++){
        ui.insert(arr1[i]);
    }

    for(int i = 0;i<arr2.size();i++){
        ui.insert(arr2[i]);
    }
}

int main(){
    vector<int>arr1 = {7,3,9};
    vector<int>arr2 = {6,3,9,2,9,4};

}