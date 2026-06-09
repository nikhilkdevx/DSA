#include <iostream>
using namespace std;
int main (){
    
    int a;
    int b;
    
    // input a 
    cout<<"Enter the value of a  :";
    cin>>a;
    
    // input b
    cout<<"Enter the value of b  :";
    cin>>b;
    
    int sum = a+b;
    int pro = a*b;
    int diff = a-b;
    
    cout<<"sum is:"<<sum<<endl;
    cout<<" product is :"<<pro<<endl;
    cout<<"difference is :"<<diff<<endl;
    
    return 0;
}