#include<iostream>
using namespace std;

// Topic --> 2D Array

// void Input (int arr[][3] , int rows,int cols){
//     for(int i = 0;i<rows;i++){
//         cout << "Enter the numbers : ";
//         for(int j = 0;j<cols;j++){
            
//             cin>> arr[i][j];
//         }
//     }
// };

// void Print(int arr[][4], int rows, int cols){
//     for(int i = 0;i<rows;i++){
//         for(int j = 0;j<cols;j++){
//             cout << arr[i][j]<<" ";
//         }
//         cout << endl;
//     }
// };

// Topic --> Spiral Method --> one more round revision needed 

// void spiral(int arr[][4] , int n){
//     int strow = 0 , stcol = 0;
//     int endrow = n-1 ,  endcol = n-1;

//     while(strow <= endrow && stcol <= endcol){

//         for(int i = stcol; i <= endcol;i++){
//             cout << arr[strow][i]<<" ";
//         }

//         for(int i = strow + 1 ; i<= endrow ; i++){
//             cout << arr[i][endcol]<<" ";
//         }

//         for(int i = endrow - 1 ; i >= stcol ; i-- ){
//             cout << arr[endrow][i]<<" ";
//         }

//         for(int i = endcol - 1; i > stcol ; i--){
//             cout << arr[i][stcol]<<" ";
//         }
//         strow ++ , stcol ++ ;
//         endrow -- , endcol --;

        
//     }

// }

// Topic --> Diagonal Sum 

void diagonalSum(int arr[][4],int n){
    int st = 0 , end = 0;
    int row = n-1 , col = 0;
    int sum = 0;
    
    for(int i = 0 ; i<n ; i++){
        sum += arr[st][end];
        st ++ , end ++ ; 
    }

    cout << "the total sum is " << sum;
    cout << endl;

    
    for(int i = 0; i<n ;i++){
        sum += arr[row][col];
        row -- , col ++;
    }
    cout << "the total sum is " << sum;
    
}
int main(){
    int nums[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    diagonalSum(nums,4);
    return 0;
}