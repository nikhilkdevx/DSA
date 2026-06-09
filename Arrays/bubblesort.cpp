#include<iostream>
using namespace std;
// Bubble Sort 
void PrintArr(int arr[],int n){
    for(int i = 0; i<n;i++){
        cout<<arr[i]<<" ";
    }
}

// void sort(int arr[],int n){
//     bool isSwap = false;
//     for(int i =0 ; i<n-1 ;i++){
//         for(int j =0 ; j<n-1-i;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//                 isSwap = true;
//             }
//         }
//         if(isSwap == false){
//             cout<<"It is already Sorted";
//             return;
//         }
       
//     }
//     PrintArr(arr,n);
// } 

// Selection Sort

// void sort(int arr[],int n ){
// for(int i = 0;i<n-1;i++){
//     int idx = i;
//     for(int j = i+1 ; j<n;j++){
//         if(arr[j]<arr[idx]){
//             idx = j;
//         }
//     }
//     swap(arr[i],arr[idx]);
// }
// PrintArr(arr,n);
// }

// Insertion Sort

// void sort(int arr[],int n){
//     for(int i = 1; i<n ; i++){
//         int curr = arr[i];
//         int prev = i-1;
//         while(prev >= 0 && arr[prev] > curr ){
//             swap(arr[prev],arr[prev+1]);
//             prev --;
//         }
//         // arr[prev+1] = curr; 
//     }
//     PrintArr(arr,n);
// }

// Counting Sort

void sort(int arr[], int n){
for(int i = 0 ; i<n-1;i++){
    
}
}


int main(){
    int nums[] = {1,4,1,3,2,4,3,7};
    int n = sizeof(nums) / sizeof(int);
    sort(nums,n);
    return 0; 
}