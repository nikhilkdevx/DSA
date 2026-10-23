#include<iostream>
#include<vector>
using namespace std;

void heapify(int parI,vector<int>&vec,int n){
    if(parI >= vec.size()){
        return;
    }
    int leftChild = 2 * parI + 1;
    int rightChild = 2 * parI + 2;
    int maxIdx = parI;
    if(leftChild < vec.size() && vec[leftChild] > vec[maxIdx]){
        maxIdx = leftChild;
    }
    if(rightChild < vec.size() && vec[rightChild] > vec[maxIdx]){
        maxIdx = rightChild;
    }
    
    if(parI != maxIdx){
        swap(vec[maxIdx],vec[parI]);
        heapify(maxIdx,vec,n); 
    }
}

void heapSort(vector<int>&vec){
    int n = vec.size();
    for(int i = n/2 -1 ; i >= 0; i--){
        heapify(i,vec,n);
    }

    for(int i = n-1; i>=0 ; i--){
        swap(vec[0],vec[i]);
        heapify(0,vec,i);
    }
}

int main(){
    vector<int>vec = {5,4,2,1,3};
    heapSort(vec);
    for(int i = 0 ; i< vec.size();i++){
        cout << vec[i] << " ";
    }

}