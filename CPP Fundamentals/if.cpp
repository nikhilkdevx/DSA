// practice Question 1
// #include <iostream>
// using namespace std;

// int main(){
//     int a;
//     cout<<"Enter the number a :";
//     cin>>a;
    
//     int b;
//     cout<<"Enter the number b :";
//     cin>>b;

//     if(a>b){
//         cout<<"a is greatest number."<<endl;
//     } else{
//         cout<<"b is greatest number."<<endl;
//     }
    

//     return 0;
// }

// practice Question 2 

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;
//     if(n%2 == 0){
//         cout<<"Even Number";
//     } else{
//         cout<<"odd Number";
//     }

//     return 0;

// }
// #include <iostream>
// using namespace std;
// int main(){
//     int income;
//     cout<<"enter your yearly income :";
//     cin>>income;

//     if(income < 500000){
//         cout<<" No tax ";
//     } else if (income <= 1000000){
//         cout<<"20 percent tax will be deducted";
//     } else {
//         cout<<"30 percent tax will be deducted";
//     }

//     return 0;
// }

// // #include <iostream>
// // using namespace std;
// // int main(){
// //     int a;
// //     cout<<"enter 1st number :";
// //     cin>>a;
// //     int b;
// //     cout<<"enter 2nd number :";
// //     cin>> b;
// //     int c;
// //     cout<<"enter 3rd number :";
// //     cin>> c;
    
// //     if(a>=b && a>=c){
// //         cout<<" the  largest number is :"<< a << endl;
// //     } else if (b>=a && b>=c){
// //         cout<<" the  largest number is :"<< b << endl;
// //     } else {
// //         cout<<" the  largest number is :"<< c << endl;
// //     }
    
    
// //     return 0;

// // }

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     char symbol ;
    
//     cout<<"Enter the value of a :";
//     cin>>a;

//     cout<<"Enter the value of b :";
//     cin>>b;
   
    
//     cout<< "Enter the symbol :";
//     cin>> symbol;
    
//     // if(symbol == '+'){
//     //     cout<< a + b << endl;
//     // } else if (symbol == '-'){
//     //     cout<< a - b << endl;
//     // }else if (symbol == '*'){
//     //     cout<< a * b << endl;
//     // } else if(symbol == '/') {
//     //     cout << a / b << endl;
//     // } else {
//     //     cout<<"invalid symbol";
//     // }   
    
//     switch(symbol){
//         case '+' : cout<< a+b << endl;
//         break;
//         case '-' : cout<< a-b << endl;
//         break;
//         case '*' : cout<< a*b << endl;
//         break;
//         case '/' : cout<< a/b << endl;
//         break;
//         default: cout << "invalid value" << endl;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<< "Enter the number : ";
//     cin>>n;
    
//     if(n>0){
//        cout<< "Number is positive"; 
//     } else if (n == 0 ){
//        cout<< "Number is Zero";  
//     } else{
//        cout<< "Number is negative";  
//     }

//     return 0;

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int year;
//     cout<<"<Enter the year : ";
//     cin>>year;
//     if (year % 400 ==0){
//         cout<<"leap year";
//     } else if(year % 100 == 0){
//         cout<<"Not a leap year";
//     } else if(year %4 ==0){
//         cout<<" a leap year";
//     } else{
//         cout<<"not a leap year";
//     }
    

//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main() {
// int a = 63, b = 36;
// bool x = (a < b) ? true : false;
// int y = (a > b) ? a : b;
// cout << x << "," << y << endl;
// return 0;
// }
// #include<iostream>
// uisng namespace std;
// int main() {
//     int a = 5;
//     if (++a*5 <= 25) {
//     cout <<"Hello\n";
//     } else {
//     cout <<"Bye\n";
//     }
//     return 0;
// }


