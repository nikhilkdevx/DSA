#include <iostream>
using namespace std ; 

// void maxProfit(int arr[],int n){
//     int bestBuy[100000];
//     bestBuy[0] = INT_MAX;
//     for(int i = 1 ; i < n ; i++){
//         bestBuy[i] = min(bestBuy[i-1],arr[i-1]);

//     }

//     int maxProfit = 0;
//     for(int i = 0 ; i<n;i++){
//         int currProfit = arr[i] - bestBuy[i];
//         maxProfit = max(maxProfit,currProfit); 
//     }
//     cout <<"Max profit = " << maxProfit << endl;
    

// }

// Revision

void maxProfit(int *arr,int n ){
    int bestbuy[100000];
    bestbuy[0]= INT_MAX;
    for(int i=1;i<n;i++){
        bestbuy[i] = min(bestbuy[i-1],arr[i-1]);
    } 
    int maxProfit = 0;
    for(int i = 0 ; i<n;i++){
       int  currProfit = arr[i]- bestbuy[i];
       maxProfit = max(currProfit,maxProfit);
    }
    cout<<"the maximum profit can be "<<maxProfit;
}

int main (){
    int prices[]= {7,1,5,3,6,4};
    int n = sizeof(prices) / sizeof(int);
    maxProfit(prices, n);

    return 0;

}