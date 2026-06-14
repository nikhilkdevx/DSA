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
// Ist method which come to my mind 
// void Transpose(int arr[][3] , int n , int m ){
    
//     for(int j = 0; j<m; j++){
//         for(int i = 0; i<n ; i++ ){
//             cout << arr[i][j]<<" ";
//         }
//         cout << endl;
//     }
// }
 
// Trying another method which is also coming in my mind
void Transpose(int arr[][3] , int n , int m ){
    for(int i = 0;i<m;i++){
        for(int j=0; j<n;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
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