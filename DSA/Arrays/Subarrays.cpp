#include <iostream>
using namespace std;

// Subarrays 

// void PrintArr(int arr[],int n){
//     for(int i=0;i<n;i++){
//         for(int j = i ; j <n ; j++){
//             for(int k = i;k<=j;k++){
//               cout << arr[k];  
//             }
//             cout<<",";
//         }

//         cout << endl;
//     }
// }

// Practicing once Again 

// void PrintArr(int arr[],int n ){
// for(int i = 0;i <n;i++){
//     for(int j = i; j<n;j++){
//         for(int k = i ; k<=j ;k++){
//             cout<<arr[k];
//         }
//         cout<<",";
//     }
//     cout << endl;
// }
// }

// int main(){
//     int arr[] = {6,7,8,9,10}; 
//     int n = 5;
//     PrintArr(arr , n); 
//     return 0;
// }

// Revising once again 

// void PrintArr(int arr[],int n ){
//     for(int i = 0 ; i<n;i++){
//         for(int j = i;  j<n;j++){
//             for(int k = i;k<=j;k++){
//                 cout<<arr[k];
//             }
//             cout<<",";
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int arr[] = {1,2,3,4,5};
//     int n = 5;
//     PrintArr(arr,n);
//     return 0;
// }

// Max Subarray Sum [Brute force approach , T(c) = O(n^3)];

// void SubArraySum1(int arr[],int n){
//     int maxSum = INT_MIN;
//     for(int i = 0;i<n;i++){
//         for(int j = i; j<n;j++){
//             int sum = 0 ;
//             for(int k = i ; k<=j;k++){
                
//                 sum += arr[k];
//             }
//             cout<<sum<<",";
//             maxSum = max(maxSum , sum);
//         }
//         cout<<endl;

//     }
//     cout<<"Max subarray sum = " << maxSum << endl;

// }
// int main(){
//     int arr[]={2,-3,6,-5,4,2};
//     int n = 6;
//     SubArraySum1(arr,n);
    
//     return 0;
// }

// Revision once Again

// void SubArraySum(int arr[] , int n ){
//     int MaxSum = INT_MIN;
//     for(int i = 0;i<n;i++){
//         for(int j = i;j<n;j++){
//             int sum = 0;
//             for(int k = i; k<= j;k++){
//                 sum += arr[k];
//             }
//             cout<<sum<<",";
//             MaxSum = max(MaxSum,sum);
//         }
//         cout<<endl;
        
//     }
//     cout<<"the maximum sum in this array is " << MaxSum;
// }

// int main (){
//     int arr[] =  {2,-3,6,-5,4,2};
//     int n = sizeof(arr)/ sizeof(int);
//     SubArraySum(arr , n);
//     return 0;
// }

//  By Optimization of SubarraySum [ T(C) = O (n^2)];

// void SubArraySum(int *arr ,int n ){
//     int MaxSum = INT_MIN;
//     for(int i = 0; i < n ; i++){
//         int sum = 0;
//         for (int j = i ; j< n; j++){
//           sum += arr[j];
//           MaxSum = max (MaxSum , sum); 
//            cout<<sum<<","; 
//         }
       
//         cout<<endl;
//     }
//     cout<< "The maxium sum of this array is " << MaxSum;
// }

// int main (){
//     int arr[] = {2,-3,6,-5,4,2};
//     int n = sizeof(arr)/sizeof(int);
//     SubArraySum(arr , n);
//     return 0;
// }

// Kadane's Algo (DP) [ T(C) = O (n)] ! important 

// void SubArraySum(int *arr ,int n ){
//     int sum = 0;
//     int MaxSum = INT_MIN;
//     for(int i = 0 ; i<n ; i++){
//         sum += arr[i];
//         MaxSum =  max(MaxSum , sum);
//         if (sum <0){
//             sum = 0;
//         }

//     }
//     cout<< "The maximum sum of the array is " << MaxSum;

// }

// Revision 

void SubArraySum(int arr[],int n){
    int sum = 0;
    int maxSum = INT_MIN;
for(int i = 0;i<n;i++){
    sum += arr[i];
    maxSum = max(maxSum,sum);
    if(sum<0){
        sum = 0;
    }
}  
cout<<"The maximum sum for this array is "<< maxSum;  
}

int main (){
    int arr[] = {2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);
    SubArraySum(arr , n);
    return 0;
}
