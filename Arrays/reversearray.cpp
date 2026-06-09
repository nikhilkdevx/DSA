
// Revresing with extra space;

// #include<iostream>
// using namespace std;

// void PrintArr(int arr[],int n){
    
//     for(int i = 0;i<n;i++){
//         cout<<arr[i]<<",";
//     }
// }



// int main(){
    
//     int arr[] ={5,4,3,9,2};
//     int n = sizeof(arr) / sizeof(int);
//     int copyArr[n];
//     for(int i=n-1, j=0; i>=0; i--,j++){
        
//         copyArr[j] = arr[i];
       
//     }
//     PrintArr(copyArr,n);
//     cout<<endl;
//     PrintArr(arr,n);
   
    
    
    
//     return 0;
// }
// void PrintArr(int *ptr,int n){
//     for(int i=0;i<n;i++){
//         cout<<ptr[i]<<",";
//     }
// }

// int main(){
//     int arr[] = {10,20,30,40,50,60};
//     int n = sizeof(arr) / sizeof(int);
//     int copyArr[n];
//     for(int i = n-1 , j = 0 ; i>=0 && j < n ; i-- , j++ ){
//         copyArr[j] = arr[i];
//     }
//     PrintArr(copyArr , n); 
//     cout<<endl;
    
    
    
//     return 0;
// }

// Reversing Without giving any extra space
#include<iostream>
using namespace std;

void PrintArr(int arr[],int n){
    for(int i = 0 ; i<n;i++){
        cout<<arr[i]<<",";
    }
}

int main(){
    int arr[] ={10,20,30,40,50};
    int n = sizeof(arr) / sizeof(int);
    int start = 0, end = n-1;
    while(start <= end){
    //    int temp = arr[start];
    //    arr[start] = arr[end];
    //    arr[end] = temp;
        swap(arr[start],arr[end]);
        start ++;
        end--;
    } 
    PrintArr(arr,n);
    return 0;
}