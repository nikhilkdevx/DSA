#include<iostream>
using namespace std;

void Spiral(int arr[][4], int n,int m){
    int strow = 0;
    int stcol= 0;
    int endrow = n-1;
    int endcol= m-1;

    while(strow <= endrow && stcol <= endcol){
        // top
        for(int i = stcol;i<= endcol;i++){
            cout<<arr[strow][i]<<" ";
        }
        // right
        for(int j = strow + 1 ; j<= endrow;j++){
            cout<<arr[j][endcol]<<" ";
        }
        // bottom
        for(int i = endcol-1; i>= stcol;i--){
            if(strow == endrow){ // for preventing duplicay of middle value
                break;
            }
            cout<<arr[endrow][i]<<" ";
        }
        // Left
        for(int j = endrow - 1 ; j>= strow +1 ; j--){
            if(stcol == endcol){ // for preventing duplicay of middle value
                break;
            }
            cout<<arr[j][stcol]<<" ";
        }
        strow ++; stcol ++;
        endrow --; endcol -- ;
        
        
    }
    cout<< endl;
    
     
}
int main(){
    int n = 4, m = 4;
    int arr[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16},
    };
    Spiral(arr,n,m);

}