// #include<iostream>
// using namespace std;
// int main(){
//     int marks[5] = {1,2,3,4,5};
//     int n = sizeof(marks) / sizeof(int);
//     for(int i = 0 ; i< n; i++){ 
//         cout<<marks[i]<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the length of array : ";
//     cin >> n;

//     int arr[n];
//     for(int i = 0;i<n;i++){
        
//         cin >> arr[i];

//     }
//     for(int i = 0; i<n ; i++){
//         cout<<arr[i]<<",";
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int largest = 0;
    int arr[] = {5,4,15,9,2};
    int n = sizeof(arr) / sizeof(int);
    for(int i = 1 ; i< n ; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    cout<<largest;
    return 0;
}