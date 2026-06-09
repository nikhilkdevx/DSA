// // // Binary to Decmial Number system

// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int n;
// //     cout<<"enter the value of n : ";
// //     cin>>n;
// //     int res = 0;
// //     int power = 1;
// //     while(n>0){
// //         int lastDig = n % 10;
        
// //         res += (lastDig*power);
// //         power *= 2;
// //         n = n / 10;
// //     }
// //     cout<<res;
// //     return 0;
// // }

// // Decimal To Binary Number System

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"Enter the value of n : ";
// cin>>n;

// int res = 0;
// int power = 1;
// while(n>0){
//     int lastDigit = n % 2;
//     res += (lastDigit * power);
//     power *= 10;
//     n = n / 2 ;
// }   
// cout<<res; 
// }