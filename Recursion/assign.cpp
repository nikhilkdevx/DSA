#include <iostream>
#include <string>
using namespace std;
// Question 1

void binarySearch(int arr[],int n,int key,int si,int ei){
    if(si > ei){
        cout << -1;
        return;
    }
    int mid = (si + ei) / 2;
    if(arr[mid] == key ){
        cout << "Found at Index : " << mid;
        return;
    } else if(arr[mid] > key){
        ei = mid - 1;
        binarySearch(arr,n,key,si,ei);
    } else{
        si = mid + 1;
        binarySearch(arr,n,key,si,ei);
    }
}

// Question 2

void recurring(int arr[],int n,int key,int si){
    if(si == n){
        return;
    }
    if(arr[si] == key){
        cout << si<<" ";
    } 
    recurring(arr,n,key,si+1);
}

// Question 3

void contagious(string str,int si,int n){
    if(si == n){
        return;
    }
    
}

int main(){
    string S = "abcab";
    int n = S.length();
    int si = 0;
    contagious(S,si,n);
}



