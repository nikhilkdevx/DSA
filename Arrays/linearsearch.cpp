#include<iostream>
using namespace std;
int checkAns(int arr[],int n,int res){
    
   
    for(int i = 0 ; i<n;i++){
        if(arr[i] == res){
            return i;
        } 
    }
    return -1;
}





int main(){
    int arr[]= {1,2,3,4,5,10,7,8,9,15};
    int n = sizeof(arr) / sizeof(int);
    cout<< checkAns(arr,n,10)<< endl;
    return 0;

}