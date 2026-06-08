#include<iostream>
#include<cmath>
using namespace std;
int main(){
    // Question 1`
    // int n;
    // cout<<"enter you number : ";
    // cin>>n;
    
    // for(int i = 1 ; i<=10 ; i++ ){
        
    //     cout<<(n * i)  << endl;
        
    // }
    // return 0;
    
    // Question 2
    // int n;
    // cout<<"enter desired number : ";
    // cin>>n;
    // int original = n;
    // int Result = 0;
    // while(n > 0){
    // int digit =   n % 10;
    // int number = (digit * digit * digit);
    //     Result+= number;
    //     n /= 10;
    // }
    
    // if(Result == original){
    //     cout<<"it is an Armstrong number";
    // } else{
    //     cout<<"it is not an armstrong number.";
    // }

    // Question 3
    // int n;
    // cout<<"enter desired number : ";
    // cin>>n;
    // bool isPrime = true;
    // for(int i = 2 ; i<=n-1;i++){
    //     if( n % i == 0){
    //         isPrime = false;
    //         break;
    //     }

    // }
    // if(isPrime){
    //     cout<<"it is a prime number";
    // } else{
    //     cout<<"it is not a prime number";
    // }

    // Question 5
    int n;
    cout<<"enter your desired number : ";
    cin>>n;
    
    int first = 0;
    int sec = 1;
    cout<<first<<" "<< sec<<" ";
    for(int i=2 ; i<n;i++){
        int third = first+sec;
        cout<<third<<" ";
        first = sec;
        sec = third;
        
    }
    
































    return 0;
}