#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// int splitStrings(string s){
//     int balance = 0;
//     int count = 0;
//     for(int i = 0;i<s.size();i++){
//         char curr = s[i];
//         if(curr == 'R'){
//             balance++;
//         }
//         if(curr == 'L'){
//             balance--;
//         }
//         if(balance == 0){
//             count++;
//         }
//     }
//     return count;
// };

// question 2
// string largestOddString(string s){
//     string ans = "";
//     int n = s.size();
//     for(int i =0;i<n;i++){
//         char curr = s[i];
//         if(s[n-1] == '1'|| s[n-1] == '3' || s[n-1] == '5' || s[n-1] == '7' || s[n-1] == '9'){
//             return s;
//         }
//         if(curr == '1' || curr == '3' || curr == '5' || curr == '7' || curr == '9'){
//             ans.push_back(curr);
//         }
//     }
//     if(ans == ""){
//         cout << "Num has no odd Integers." << endl;
//     }
//     return ans;
// }


// questn 3 
// string lexiographical(int n, int k){
//     string s(n,'a');
//     int st = k - n;
//     for(int i = n-1;i>=0;i--){
//         int add = min(st,25);
//         s[i] += add;
//         st -= add;

//     }
//     return s;
    
// }

// questn 4
// int Stocks(vector<int>&prices){
//     int n = prices.size();
//     int maxProfit = 0;
//     int minPrice = INT_MAX;
//     // Brute Force
//     // for(int i = 0;i<n;i++){
//     //     for(int j = i + 1;j<n;j++){
//     //         if(prices[j] > prices[i]){
//     //             int profit = prices[j] - prices[i];
//     //             maxProfit = max(profit,maxProfit);
//     //         }
//     //     }
//     // }

//     // Optimized
//     for(int i = 0;i<n;i++){
//         minPrice = min(minPrice,prices[i]);
//         int profit = prices[i] - minPrice;
//         maxProfit = max(profit,maxProfit);
//     }
//     return maxProfit;
// }

// question 5
void minSubArrSum(vector<int>arr,int k){

}

int main(){
    vector<int>arr = {7,2,5,10,8};
    int n = arr.size();
    int k = 2;
    minSubArrSum(arr,k);
}