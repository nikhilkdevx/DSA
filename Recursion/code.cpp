#include <iostream>
#include <vector>
using namespace std;

// Recursive Function
int factorial(int n){
    if(n==0){
        return 1;
    }
    return n * factorial(n-1);
}

void printNumber(int n){
    if(n == 0){
        return;
    }
    cout << n << ",";
    printNumber(n-1);
}

int sumofNthNumber(int n){
    if(n == 1){
        return 1;
    }
    return n + sumofNthNumber(n-1);

}

int fibonacciNumber(int n){
    if(n == 0 || n == 1 ){
        return n;
    }
    return fibonacciNumber(n-1) + fibonacciNumber(n-2);
}

// isSorted
bool isSorted(int arr[],int n,int i){
    if(i == n-1){
        return true;
    }
    if(arr[i] > arr[i+1]){
        return false;
    }
    return isSorted(arr,n,i+1); 
}

// First Occurence

int firstOccur(vector<int> arr,int i,int target){
    if(i == arr.size()){
        return -1;
    }
    if(arr[i] == target){
        return i;
    }

    return firstOccur(arr,i+1,target);

}

int lastOccur(vector<int>arr,int i,int target,int idx){
    
    if(i == arr.size()){
        return idx;
    }
    if(arr[i] == target){
        idx = i;
    }
    return lastOccur(arr,i+1,target,idx);
}

int main(){
    vector<int> arr = {1,2,3,3,4,5};
    int i = 0;
    int idx = -1;
    cout << lastOccur(arr,i,5,idx);
    return 0;

}