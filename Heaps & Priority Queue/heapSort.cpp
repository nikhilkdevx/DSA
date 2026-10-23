#include<iostream>
#include<vector>
using namespace std;

void heapify(int parI,vector<int>vec,int n){
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
    swap(vec[maxIdx],vec[parI]);
    if(parI != maxIdx){
        heapify(maxIdx,vec,n);
    }
}

void heapSort(vector<int>vec){
    int n = vec.size();
    for(int i = n/2 ; i >= 0; i--){
        heapify(i,vec,n);
    }
}

int main(){
    vector<int>vec(5,0);
    vec[0] = 1;
    vec[1] = 4;
    vec[2] = 2;
    vec[3] = 5;
    vec[4] = 3;

}