// Trapping Rainwater Questions 
#include<iostream>
using namespace std; 

int WaterTrapped(int arr[],int n ){
    int Leftmax[20000];
    Leftmax[0]= arr[0];
    
    for(int i = 1 ; i < n ;i++){
        Leftmax[i] = max(arr[i-1],Leftmax[i-1]);
        
    }
            
    int RightMax[20000];
    RightMax[n-1] = arr[n-1];
    
    for(int i = n-2 ; i>= 0;i--){
        RightMax[i] = max(arr[i+1],RightMax[i+1]);
        
    }
    
    int WaterTrapped = 0;
    for(int i = 0; i<n;i++){
        int currWater = min(Leftmax[i],RightMax[i]) - arr[i]; 
        if(currWater>0){
            WaterTrapped += currWater;
        }
    }
    
    return WaterTrapped;
  
}
int main(){
    int arr[]={4,2,0,6,3,2,5};
    int n = sizeof(arr) / sizeof(int);
    cout<<WaterTrapped(arr,n);
    return 0;
}