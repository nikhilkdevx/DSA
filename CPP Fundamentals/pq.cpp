// Question 1
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
    

//     cout<<"input the value of the side :";
//     cin>>n;

//     int area = n*n;
//     cout<<"Area of the square is :"<<area;

    
//     return 0;
// }

// Question 2 

// #include <iostream>
// using namespace std;
// int main(){

//     float pencil;
//     float eraser;
//     float pen;
   

//     cout<<"enter the price of pencil :";
//     cin>>pencil;

//     cout<<"enter the price of eraser :";
//     cin>>eraser;

//     cout<<"enter the price of pen :";
//     cin>>pen;

//     float TotalCost = ( pencil + eraser + pen );
//     cout<<"Total bill generated is :"<<TotalCost<<endl;

//     float Tax = (TotalCost)*(0.18);
//     cout<<"Total Tax generated is :"<<Tax<<endl;

//     float Full = (Tax + TotalCost);
//     cout<<"Toatal bill generated after tax is :"<<Full;
    
    
//     return 0;


// }

// #include<iostream>
// using namespace std;
// int main(){
//     float p;
//     float r;
//     float t;

//     cout<<"enter the principal amount :";
//     cin>>p;
    
//     cout<<"enter the rate of interest :";
//     cin>>r;
    
//     cout<<"enter the time period :";
//     cin>>t;
    
//     float SI = ((p*r*t) / 100);
//     cout<<"the SI is :"<<SI<<endl;

    
//     return 0;
// }

#include<iostream>
using namespace std;
#define PI 3.14 

int main (){
    float rad;

    cout<<"enter the radius of the circle :";
    cin>>rad;

    float area = (PI * rad * rad);
    cout<<"the area is :"<<area<<endl;
    return 0;
}