#include<iostream>
using namespace std;

// Question 1

// void SearchArr(int arr[][3] , int n , int m , int key){
//     int count = 0;
//     for(int i = 0; i<n ; i++){
//         for(int j =0 ; j<m ; j++){
            
//             if(arr[i][j] == key){
//                count++; 
//             }
//         }
//     }
//     cout<<count;
// }

// Question 2

// void sum(int arr[][3], int n , int m ){
//     int sum = 0;
//     for (int j = 0 , i = 1 ; j<m ; j++){
//         sum += arr[i][j];
//     }
//     cout<<sum;
// }

// Question 3

void Transpose(int arr[][3] , int n , int m ){
    int row = m , col = n;
    for(int i = 0; i<row ; i++ ){
        for(int j = 0; j<col; j++){
            cout << arr[i][j]<<" ";
        }
        cout << endl;
    }
}



int main(){
    int n = 2;
    int m = 3;
    
    int arr[][3] = {
        {1,4,9},
        {11,4,3},
        
    };
    Transpose(arr , n , m);
    return 0;
}