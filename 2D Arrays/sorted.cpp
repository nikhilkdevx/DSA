#include<iostream>
using namespace std;
// Linear Search

// void SearchArr(int arr[][4],int n,int m){
//     int key = 33;
//     for(int i = 0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(arr[i][j] == key){
//                 cout << i << " " << j;
//                 return;
//             }
//         }
//     }
//     cout<<"-1";
// }

// Row-wise / Colmun Wise searching 

// void SearchArr(int arr[][4],int n , int m){
//     int key = 33;
//     for(int i = 0;i<n;i++){
//         int st = 0 , end = m-1;
//         while(st<= end){
//             int mid = (st + end) / 2;
//             if(arr[i][mid] == key){
//             cout<<i<<","<< mid;
//             return;

//             } else if(arr[i][mid]>key){
//             end = mid - 1;
            
//             }else if(arr[i][mid]<key) {
//             st = mid +1;
//             }
            
//         }
  
//     }
//     cout<<"-1";


// }

// StairCase
// void SearchArr(int arr[][4] , int n, int m, int key ){
//     int i =0 , j = m-1;
//     while (i<n && j>= 0){
//         if(arr[i][j]== key){
//             cout << "found at cell " << i << "," << j;
//             return;
//         } else if(arr[i][j]>key){
//             j--;
//         } else{
//             i++;
//         }
//     }
//     cout<<"key not found ";
// }

// Rev

void SearchArr(int arr[][4], int n, int m , int key){
    int i = n-1 , j = 0;
    while(i>= j){
        if(arr[i][j]== key){
            cout <<  " The value of key at is " << i << "," << j;
            return;
        } else if(arr[i][j] > key){
            i--;
        }else{
            j++;
        }
    }
    cout<< "No such key Value Available.";
}


int main(){
    
    int arr[4][4] = {
        {10,20,30,40},
        {15,25,35,45}, 
        {27,29,37,48},
        {32,33,39,50}
    };
    int n = 4,m = 4;
    int t = 33;
    SearchArr(arr,n,m,t);
    return 0;
    
}