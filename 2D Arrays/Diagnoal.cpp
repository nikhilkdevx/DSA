#include<iostream>
using namespace std;

void DiagonalSum(int arr[][3],int n,int m){
    int D1Sum = 0;
    int D2Sum = 0;
    
    for(int i =0,j=0; i<n && j<n; i++,j++){
        D1Sum += arr[i][j];
    }

    for(int i = n-1 ,j=0; i>=0 && j<n; i--,j++){
        D2Sum += arr[i][j];
    }
    int TotalSum = D1Sum + D2Sum;
    
    if(n%2 != 0){
     TotalSum -= arr[n/2][m/2];   
    }
    cout << "Total sum is " << TotalSum; 
}

// void DiagonalSum(int arr[][3], int n){
//     int sum = 0;
    
//     for(int i =0 ; i<n ; i++){
//         for(int j = 0 ; j<n ; j++){
//             if (i == j){
//                 sum += arr[i][j];
//             } else if(j == n-1-i){
//                 sum += arr[i][j];
//             }
//         }
//     }
    
//     cout << "sum = " << sum;
// }

int main(){
    // int arr[4][4] = {
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,12},
    //     {13,14,15,16}
    // };
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int n = 3,m = 3;
    DiagonalSum(arr,n,m);
    return 0;

}