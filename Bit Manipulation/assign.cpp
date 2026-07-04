#include<iostream>
using namespace std;

// Clear the ith  bits

void clearithBits(int num ,int i, int j){
    int a = (~0) << j + i;
    int b = ( 1 << i ) - 1;
    int bitMask =  a | b ;
    int ans = num & bitMask;
    cout << ans;
}

int main(){
    int num = 31 , i = 1 , j = 3;
    clearithBits(num,i,j);
    return 0;
}