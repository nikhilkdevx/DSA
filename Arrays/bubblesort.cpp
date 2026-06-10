#include<iostream>
// #include<algorithm>
using namespace std;
 
// void PrintArr(int arr[],int n){
//     for(int i = 0; i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// Bubble Sort

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

// void sort(int arr[], int n){
//     int freq[10000] = {0};
//     int maxVal = INT_MIN;
//     int minVal = INT_MAX;
    
//     for(int i = 0; i<n;i++){
//         freq[arr[i]]++;
//         minVal = min(minVal,arr[i]);
//         maxVal = max(maxVal,arr[i]);
//     }

//     for(int i= minVal,j=0;i<=maxVal;i++){
//         while(freq[i]>0){
//             arr[j++] = i;
//             freq[i]--;
//         }
//     }
//     PrintArr(arr,n);
// }

// Inbuilt Sort
// int main(){
//     int arr[] = {1,4,1,3,2,4,3,7};
//     int n = sizeof(arr) / sizeof(int);
//     sort(arr,arr+n,greater<int>());
//     PrintArr(arr,n);
//     return 0; 
// }

// Practice Questions

void sort(char arr[],int n){
    for(int i = 1; i<n ; i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev >= 0 && arr[prev] > curr ){
            swap(arr[prev],arr[prev+1]);
            prev --;
        }
        // arr[prev+1] = curr; 
    }
    PrintArr(arr,n);
}

void PrintArr(char arr[],int n){
    for(int i = 0; i<n;i++){
        cout<<arr[i]<<" , ";
    }
}

int main(){
    char ch[] ={'f','b','a','e','c','d'};
    int n = sizeof(ch) / sizeof(char);
    sort(ch,n);
    return 0;
}


