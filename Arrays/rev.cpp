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
// void ReverseArray(int arr[],int n){
//     for(int i = 0 ; i< (n/2) ;i++){
//         swap(arr[i],arr[n-1-i]);
//     }
//     PrintArr(arr,n);
// }

// Topic - Linear Search

// int Linear(int arr[], int n , int key){
//     for(int i = 0; i<n; i++){
//         if(arr[i]== key){
//             return i;
//         }
//     }
//     return -1;
// }

// Topic BinarySearch

int BinarySearch(int arr[] , int n , int key){
        int st = 0;
        int end = n-1;
        while(st <= end){
            int mid = (st + end) / 2;
            if(arr[mid]== key){
                return mid;
            } else if(arr[mid]>key){
                end = mid -1;
            } else{
                st = mid + 1;
            }
        }

    return -1;
   
}

int main(){
    int nums[] = {1 , 3 , 5 ,7, 9 ,11 ,13};
    int n = sizeof(nums) / sizeof(int);
    int target = 11;
    cout<<BinarySearch(nums , n , target);
    return 0;
}

