#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int *ptr = new int[n];

    int x = 1;
    for(int i =0 ; i < n; i++){
        ptr[i] = x;
        cout << ptr[i] << " ";
        x++;
    }

    cout << endl;
    return 0;
}