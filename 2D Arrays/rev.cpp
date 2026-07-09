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

// void diagonalSum(int arr[][4],int n){
//     int sum = 0;
    
//     for(int i = 0 ; i<n ; i++){
//         sum += arr[i][i];
        
//     }
//     cout << "the total sum is " << sum;
//     cout << endl;
    
//     for(int i = 3 , j = 0; j<n ;i--,j++){
//         if( i != j){
//             sum += arr[i][j];
//         }
        
//     }
//     cout << "the total sum is " << sum;
    
// }

// Topic --> Search in Sorted Matrix

// void stariCase(int arr[][4] , int n, int target){
//     int row = n-1 , col = 0;
    
//     while (row >= 0 && col >= 0){
//         if(target == arr[row][col]){
//         cout << "The element " << target << " is at index " << row <<"," << col;
//         return;
//         } else if(arr[row][col] > target){
//             row --;
//         }else{
//             col ++;
//         }
//     }
    
//     cout << target << " is not present in the matrix.";
// }

// int main(){
//     int nums[4][4] = {
//         {1,2,3,4},
//         {5,6,7,8},
//         {9,10,11,12},
//         {13,14,15,16}
//     };
//     stariCase(nums , 4 , 16);
//     return 0;
// }

// Assignment questions Revisions

void repeat(int arr[][3] , int n , int m , int target){
    int count = 0;
    for(int i = 0 ; i <n ;i++){
        for(int j = 0;j<m;j++){
            if(arr[i][j] == target){
                count++;
            }
        }
    }
    cout << count;
}

void sum(int num[][3], int n ){
    int sum = 0;
    for(int i=1;i<2;i++){
        for(int j = 0 ;  j<n;j++){
            sum += num[i][j];
        }
    }
    cout << sum;
}

void transpose(int num[2][3], int n, int m){
    for(int i = 0; i<m;i++){
        for(int j = 0; j<n;j++){
            cout << num[j][i]<<" ";
        }
        cout << endl;
    }
}


int main(){
    
    int num[2][3] = { {1,4,9}, {11,4,3} };
    transpose(num , 2,3);
    return 0;
}