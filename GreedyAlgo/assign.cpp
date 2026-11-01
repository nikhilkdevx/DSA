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
void lexiographical(int n, int k){
    string s = "";
    for (int i =  0 ; i<n;i++){
        s.push_back('a');
    }
    int st = k - n;
    for(int i = n-1;i>0;i--){
        if(st > 25) {
            s[i] = 'z';
        }
    }

    
}

int main(){
    lexiographical(3);
    
}