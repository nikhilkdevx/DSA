#include <iostream>
#include <vector>
#include <string>
using namespace std;

int gridWays(int r,int c, int n, int m){
    if( r == n-1 && c == m-1){
        return 1;
    }

    if(r >= n || c>= m){
        return 0;
    }
    int val1 = gridWays(r,c+1,n,m);
    int val2 = gridWays(r+1,c,n,m);

    return val1 + val2;
}

int main(){
    int n = 3;
    int m = 3;
    cout << gridWays(0,0,n,m);
    return 0;
}

// by using mathematical permutation we can optimize it from (2^n+m) to o(n) by using this formulaw
// which is (n-1)! + (m-1)! / n!*m!