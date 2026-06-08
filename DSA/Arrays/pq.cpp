#include<iostream>
using namespace std;

//  Question 1

// bool Check(int arr[],int n ){
    
//     for(int i = 0;i<n;i++){
//       for(int j = i+1;j<n;j++){
//         if(arr[j] == arr[i]){
//             return true;
//             }
//         }
    
//     }
//     return false;
    
// }

// int main(){
//     int arr[]={1,2,3,4};
//     int n = sizeof(arr) / sizeof(int) ;
//     if(Check(arr,n)){
//         cout<<"true";
//     }else{
//         cout<<"false";
//     };
//     return 0;

// }

//  Question 2 
// [T(c)= O(n)]

// int Check(int *arr,int n , int target){
//     for(int i = 0; i<n;i++){
//         if(arr[i]==target){
//             return i;
//         }
//     }
//     return -1;
// }

// [T(C) = O(log n)]

// int search(int arr[], int n, int target) {

//     int st = 0;
//     int end = n - 1;

//     while (st <= end) {

//         int mid = st + (end - st) / 2;

//         // Target found
//         if (arr[mid] == target) {
//             return mid;
//         }

//         // Left half is sorted
//         if (arr[st] <= arr[mid]) {

//             // Target lies in left sorted half
//             if (target >= arr[st] && target < arr[mid]) {
//                 end = mid - 1;
//             }
//             else {
//                 st = mid + 1;
//             }
//         }

//         // Right half is sorted
//         else {

//             // Target lies in right sorted half
//             if (target > arr[mid] && target <= arr[end]) {
//                 st = mid + 1;
//             }
//             else {
//                 end = mid - 1;
//             }
//         }
//     }

//     return -1;
// }

// practiced one time by own 

// int search(int arr[] , int n, int target){
//     int st = 0 , end = n-1;
    
//     while(st<= end){
//     int mid = (st + end) / 2;    
//         if (arr[mid] == target){
//             return mid;
//         }  if(arr[st] <= arr[mid]){
//                 if(arr[st] <= target && target < arr[mid]){
//                 end = mid - 1;
//             }
//             else{
//                 st = mid + 1;
//             }
//         }else{
//             if(arr[mid]<target && target <= arr[end]){
//                 st = mid + 1;
//             }
//             else{
//                 end = mid - 1;
//             }
//         }
//     }
//     return -1;
// }


// int main() {

//     int arr[] = {4,5,6,7,0,1,2};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int target = 0;

//     cout << search(arr, n, target);

//     return 0;
// }

// Question 3

void Maximum(int arr[],int n){
    int Max = INT_MIN;
for(int i = 0 ; i <n ; i++){
    int mul = 1;
    for(int j = i; j<n ; j++ ){
        
        mul *= arr[j];
        Max = max(mul,Max);
        
    }   
}
cout<<"The Maximum Value of the Whole Array is "<<Max;
}


int main(){
    int nums[] ={2,3,-2,4};
    int n = sizeof(nums) / sizeof(int);
    
    Maximum(nums,n);
    return 0;

}
