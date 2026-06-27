// Revising DSA in Arrays

#include<iostream>
using namespace std;

// For Printing Array

void PrintArr(int arr[],int n){
    for(int i =0;i<n;i++){
        cout<<arr[i]<<",";
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

// int BinarySearch(int arr[] , int n , int key){
//         int st = 0;
//         int end = n-1;
//         while(st <= end){
//             int mid = (st + end) / 2;
//             if(arr[mid]== key){
//                 return mid;
//             } else if(arr[mid]>key){
//                 end = mid -1;
//             } else{
//                 st = mid + 1;
//             }
//         }

//     return -1;
   
// }

// Topic Maximum Subarray Sum

// void Subarray(int arr[],int n){
//     int maxSum = INT_MIN;
//     int sum = 0;
//     for(int i =0;i<n;i++){
        
//         sum += arr[i];  
//         maxSum = max(maxSum,sum);
//         if(sum<0){
//             sum = 0;
//         }
        
//     }
//     cout << "The maximum sum of this array is " <<maxSum;
// }

// Stocks Buy and Sell

// void Stocks(int arr[],int n){
    
//     int minPrice = arr[0];
    
//     int MaxProfit = 0;

//     for(int i=1;i<n;i++){
//         minPrice = min(minPrice,arr[i]);
//         int Profit = arr[i] - minPrice;
//         MaxProfit = max(MaxProfit,Profit);
//     }

//     cout << " The Maximum Profit can be "<< MaxProfit;
// }

// Topic - Rainwater

// void Rainwater(int arr[],int n){
//     int LeftMax[10000] , RightMax[10000];
//     int trapped[10000] = {0};
//     LeftMax[0] = arr[0];
//     RightMax[n-1] = arr[n-1];
//     int water = 0;
    
//     for(int i = 1;i<n;i++){
//         LeftMax[i] = max(arr[i],LeftMax[i-1]);

//     }
    
//     for(int i = n-2; i>=0 ; i--){
//         RightMax[i] = max(arr[i],RightMax[i+1]);
//     }

//     for(int i = 1; i<n-1;i++){
//         trapped[i] = min(LeftMax[i],RightMax[i]) - arr[i];
//         water += max(0, trapped[i]);
//     }
    
//     cout << "The maximum water Stored is "<< water;
    
    
// }

// Topic - Contains Duplicate --> Not Studied and Brute force is not Accepted by leetCode

// void duplicate(int arr[],int n){

// }

// Topic - Rotated Sorted Array ---> solved on leet

// T --> Max Procuct Solved On Leet 

// int main(){
//     int nums[] = {1,2,3,1};
//     int n = sizeof(nums) / sizeof(int);
//     sorted(nums,n);
//     return 0;
// }

