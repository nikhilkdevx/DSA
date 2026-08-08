#include<iostream>
#include <vector>
using namespace std;

void printArr(int arr[],int n){
    for(int i=0; i<n; i++){
        cout << arr[i] <<" ";

    }
    cout << endl;
}

int partition(int arr[],int si, int ei){
    int i = si-1;
    int pivot = arr[ei];
    for(int j = si; j<ei ; j++){
        if(arr[j]<= pivot){
            i++;
            swap(arr[j],arr[i]);
        }
    }

    i++;
    swap(arr[i],arr[ei]);
    return i;

}

void quickSort(int arr[],int si,int ei){
    if(si >= ei){
        return;
    }
    int pivotidx = partition(arr,si,ei);
    quickSort(arr,si,pivotidx-1); //left Half
    quickSort(arr, pivotidx+1, ei); // Right half

}


int main(){
    int arr[6] = {6,3,7,5,2,4};
    int n = sizeof(arr) / sizeof(int);
    quickSort(arr,0,n-1);
    printArr(arr,n);
    return 0;
}