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

// void clearIthbit(int n , int i){
//     int bitMask =  ~(1 << i);
//     cout << ( n & bitMask );
// }


// Power of 2

// bool isPowerOf2 (int num){
//     if(!(num & (num - 1)) ){
//         return true;
//     }else{
//         return false;
//     }
// }

// Practice Question

// Updating the ith bit

// void Updateithbit(int num , int i , int val){
//     // clear the ith bit
//     num = num & ~(1 << i); 

//     // setting the value
//     num = num | (val <<i);

//     cout << num << endl;
// }

// Clear the last ith bits

// void clearBits(int num , int i){
//     int bitMask = (~0) << i ; 
//     num = num & bitMask ;
//     cout << num;
// }

// Count set Bits

void countBits(int num){
    int count = 0;
    
    while(num > 0){
        int lastDig = num & 1;
        count += lastDig;
        num = num >> 1;
    }
    cout << count;
}


int main(){
    int a = 10  ;
    countBits(a);
    return 0;
}