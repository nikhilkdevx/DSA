// 33 , 81, 153 , 1752 [same type of problems]; 
#include<iostream>
using namespace std;

void search(int arr[],int si, int ei, int target){
    if(si > ei){
        cout << "Not Found ";
        return;
    }

    int mid = si + (ei - si) / 2;
    if(arr[mid] == target){
        cout << mid;
        return;
    }

    if(arr[si] <= arr[mid]){
            if(arr[si] <= target && target < arr[mid]){
            search(arr,si,mid-1,target);
        } else{
            search(arr,mid+1,ei,target);
        }
    } else {
        if(arr[mid] < target && target <= arr[ei]){
            search(arr,mid+1,ei,target);
        } else{
            search(arr,si,mid-1,target);
        }
    }
}

int main(){
    int arr[7] = {4,5,6,7,0,1,2};
    int n = sizeof(arr) / sizeof(int);
    int target = 0;
    search(arr,0,n-1,target);
    return 0;
}