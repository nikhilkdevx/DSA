// Revising DSA in Arrays

#include<iostream>
using namespace std;

void PrintArr(int arr[],int n){
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
// Topic- Finding Largest Element 
// void Largest(int arr[],int n){
//     int  Biggest = INT_MIN;
//     for(int i = 0; i<n;i++){
//         Biggest = max(Biggest,arr[i]);
//     }
//     cout<<"The Largest Number of this array is " << Biggest;
// }

// Reverse Array
void ReverseArray(int arr[],int n){
    for(int i = 0 ; i< (n/2) ;i++){
        swap(arr[i],arr[n-1-i]);
    }
    PrintArr(arr,n);
}
int main(){
    int nums[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(nums) / sizeof(int);
    ReverseArray(nums,n);
    return 0;
}

