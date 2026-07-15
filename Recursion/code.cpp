#include <iostream>
using namespace std;

// Recursive Function
int factorial(int n){
    if(n==0){
        return 1;
    }
    return n * factorial(n-1);
}

void printNumber(int n){
    if(n == 0){
        return;
    }
    cout << n << ",";
    printNumber(n-1);
}

int sumofNthNumber(int n){
    if(n == 1){
        return 1;
    }
    return n + sumofNthNumber(n-1);

}

int main(){
    int ans = sumofNthNumber(10);
    cout << ans;
    return 0;

}