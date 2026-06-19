#include<iostream>
using namespace std;

// Finding Odd or Even using Bits

// void oddEven(int n){
//     if((n&1) == 0){
//         cout << "Even";
//     }else{
//         cout << "Odd";
//     }
// }

// Get ith Bit

// void getithbit(int n , int i){
//     int bitMask = (1 << i);
//     if((bitMask & n) == 0){
//         cout << "0 is at this bit.";
//     }else{
//         cout << "1 is at that bit.";
//     }
// }

// void setithbit(int n , int i){
// //     int bitMask = (n | (1 << i));
// //     cout << bitMask; 
// // }

// Clear the ith Bit 

void clearIthbit(int n , int i){
    int bitMask =  ~(1 << i);
    cout << ( n & bitMask );
}

int main(){
    int a = 6 , i = 1;
    clearIthbit(a,i);
    return 0;
}