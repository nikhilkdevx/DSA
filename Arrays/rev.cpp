// Revising DSA in Arrays

#include<iostream>
using namespace std;

// Topic- Finding Largest Element 
void Largest(int arr[],int n){
    int  Biggest = INT_MIN;
    for(int i = 0; i<n;i++){
        Biggest = max(Biggest,arr[i]);
    }
    cout<<"The Largest Number of this array is " << Biggest;
}

int main(){
    int nums[] = {7, 2, 11, 4, 9};
    int n = sizeof(nums) / sizeof(int);
    Largest(nums,n);
    return 0;
}

