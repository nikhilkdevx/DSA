#include<iostream>
#include<cmath>
using namespace std;
// int main(){
//     int i = 1;
//     do{
//         cout<< " Nik is coding and brain is fooling me this is reality"<< endl;
//         i++;
//     } while(i<=10);
    
    
    
//     return 0;
// }
// int main(){
//     int n;
   
//    do{
//      cout<<"enter any random number"<<endl;
//      cin>>n;
//      if(n % 10 == 0){
//         continue;

//     }
//     cout<<"you enterd " << n <<endl;
//    }while(true);
//    return 0;
// }
// int main(){
//     int n;
//     do{
//     cout<<"enter your number please : ";
//     cin>>n;
//     // if ( n == 2) || ( n == 3) || ( n == 5) || ( n == 7) {
//     //     cout << "it is a prime number";
//     // }
//     // else if ( n == 1){
//     //     cout<<"it  is neither prime or not composite";
//     // }
//     // else if( (n % 2 == 0) || (n % 3 == 0) || (n % 5 == 0) || (n % 7 == 0) ){
//     //     cout << "it is not a prime number" ;
//     // }
        
//     // else if ((n % n == 0 ) && (n % 1 == 0) ) {
//     //     cout<<"it is  prime number";
//     // }
//     } while(true);
// }
// int main(){
//     int n;
//     do{
//     cout<<"enter your number please : ";
//     cin>>n;
//     for(int i = 2 ; i<(n-1); i++){
//         int check = n % i ;
//         if(check ==  0){
//             cout<<"it is not a prime number"
//         } else if {
//             cout<<"it is prime number"
//         } else {
//             cout <<"1 is neither prime nor composite";
//         }
//     }

//     }while(true);
   
//     return 0;
// }
// int main(){
//     int n;
//     cout<<"enter the number here :";
//     cin>>n;
//     bool isPrime = true;
    
//     // for(int i = 2 ; i<= n-1 ; i++){
//     //     if(n % i == 0){
//     //       isPrime = false;
//     //       break;
//     //     } 
//     // }
//      for(int i = 2 ; i<= sqrt(n); i++){
//         if(n % i == 0){
//           isPrime = false;
//           break;
//         }  
//     }
//     if(isPrime){
//     cout<<"Prime number";
//     } else{
//     cout<<"not a prime number";
//     }
//     return 0;
// }
// practice Question

int main(){
    int n;
    cout<<"enter your number : ";
    cin>>n;
    int res = 1;
    for(int i = n; (i<= n) && (i > 0) ; i--){
        res *= i; 

    }
   cout<<res;
  
}

