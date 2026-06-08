// #include<iostream>
// using namespace std;
// void IsPrime(int n){

// // bool prime = true;

// // if (n==1){
// //     return false;
// // }

// // for(int i= 2 ; i<= n-1; i++){
// //     if(n%i == 0){
        
// //         prime = false;

// //     }
    
// // }

// // if (prime == true){
// //     cout<<"it is a prime number";
// // } else {
// //     cout<<"it is not a prime number";
// // }
// // }

// int main(){
 
// return 0;
// } 

// #include <iostream>
// using namespace std;
// int factorial(int n){
//     int Mul = 1;
//     for(int i=1;i<=n;i++){
//         Mul *= i;
// }
// return Mul;
// }

// int BioCoff(int n,int r){
//     int val1 = factorial(n);
//     int val2 = factorial(r);
//     int val3= factorial(n-r);

//     int res = val1 / (val2* val3);
//     return res;
// }


// int main(){

// cout<<BioCoff(3,2)<<endl;


//     return 0;
// }

// #include<iostream>
// using namespace std;

// bool isPrime(int n){
//     if(n == 1){
//         return false;
//     }
//     for(int i = 2; i*i<= n ; i++ ){
//         if(n%i == 0){
//             return false;
//         }
//     }

//     return true;
// }

// void allPrimes(int n ){
//     for(int i = 2 ; i<=n;i++){
//         if (isPrime(i)){
//             cout<<i << " ";
//         }
//     }
//     cout<<endl;
// }


// int main(){
//     allPrimes(13);
    



//     return 0;
// }

//Questions 

// 1
#include<iostream>
using namespace std;

// int Palin(int n){
// int Number = n;
// int res = 0 ;
// while(n>0){
//     int lastDig = n % 10;
//     res = res*10 + lastDig;
//     n = n / 10;
//     }

//     if(Number == res){
//         cout<<"it is a palin number";
//     }else{
//         cout<<"it is not a palin number";
//     }

// }

// // bool isRight(int n){
// //     int Palin = 
// // }


// int main(){
//     Palin(121);
//     return 0;
// }

// 2

// int sum (int a,int b){
//     return a + b;
// }
// int main(){
//     cout<<sum(3,2);
// }

// int square(int a , int b){
//     int formula = (a*a) + (b*b) + (2*a*b);
//     return formula;
// }
// int main(){
//     cout<< square(2,3);
// }

// int Largest(int a,int b, int c){
//     if(a>b && a>c){
//         return a;
//     } else if(b>c && b>a){
//          return b;
//     } else{
//          return c;
//     }

// }
// int main(){
//     cout<<Largest(80,29,15) << " is the largest Number";
//     return 0;
// }

// char Alpha(char ch){
//     if(ch == 'z'){
//         return 'a';
//     }

//     char value = ch + 1;
//     return value;
// }
// int main(){
//     cout<<Alpha('x')<<endl;
//     cout<<Alpha('z');
// }

