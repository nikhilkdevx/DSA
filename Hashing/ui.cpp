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

    for(auto el : ui){
        cout << "Union : " << el << " ";
    }
    cout << endl;
}

void Intersection(vector<int>arr1,vector<int>arr2){
    unordered_set<int>it;
    for(int i = 0 ;i<arr1.size();i++){
        it.insert(arr1[i]);
    }

    for(int i = 0;i<arr2.size();i++){
        if(arr2[i] == it.find(arr2[i])){

        }
    }

}

int main(){
    vector<int>arr1 = {7,3,9};
    vector<int>arr2 = {6,3,9,2,9,4};
    Union(arr1,arr2);
    Intersection(arr1,arr2);
}