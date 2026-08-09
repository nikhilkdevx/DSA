#include<iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

// Quest 1

void merge(string arr[],int si, int mid,int ei){
    vector<string> temp;
    int i = si;
    int j = mid + 1;
    while(i <= mid && j <= ei){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i++]);
        } else{
            temp.push_back(arr[j++]);
        }

    }

    while(i <= mid){
        temp.push_back(arr[i++]);
    }

    while(j <= ei){
        temp.push_back(arr[j++]);
    }

    for(int k = si,x=0; k<=ei;k++){
        arr[k] = temp[x++];
    }
}

void mergeSort(string arr[],int si,int ei){
    if (si >= ei){
        return;
    }
    int mid = si + ( ei - si) / 2 ;
    mergeSort(arr,si,mid);
    mergeSort(arr,mid+1,ei);
    merge(arr,si,mid,ei);
}

void printArr(vector<int>arr){
    for(int i=0;i<arr.size();i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Quest 2 

// Brute Force
// void returnCount(vector<int> arr){
//     int num = 110;
//     for(int i=0;i<arr.size();i++){
//         int count = 0;
//         for(int j = 0;j<arr.size();j++){
//             if(arr[i] == arr[j]){
//                 count++;
//             }
//         }
//         if(count > (arr.size()/2)){
//             cout << arr[i];
//             return;
//         } else if(count == (arr.size()/2)){
//             num = arr[i];
//         }

//     }
//     if(num = 110){
//         cout << "No Majority Element Found";
//     } else{
//         cout << num;
//     }
// }

// [o(nlogn)]
// void returnCount(vector<int>arr,int n){
//     int current = arr[0];
//     int count = 1;
//     for(int i=1;i<n;i++){
//         if(current == arr[i] ){
//             count++;
//         } else{
//             current = arr[i];
//             count = 1;
//         }
//         if(count > n/2){
//             cout << current;
//             return;
//         }
//     }
//     cout << current;
    
// }


// Booyer Moore [o(n)]
void returnCount(vector<int>arr,int n){
    int candidate = 0;
    int count = 0;
    for(int i=0;i<n;i++){
        if(count == 0){
            candidate = arr[i];
        }
        if(arr[i] == candidate){
            count++;
        }else{
            count--;
        }
        
    }
    cout << candidate;
}

int main(){
    vector<int> nums = {2,2,1,1,1,2,2};
    int n = nums.size();
    sort(nums.begin(),nums.end());
    returnCount(nums,n);
    return 0;
}