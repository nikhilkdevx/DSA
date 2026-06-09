#include<iostream>
using namespace std;
int main(){
   float sci;
   float Maths;
   float sst;
   
   
    cout<<"enter your sci Marks :";
    cin>>sci;

    cout<<"enter your Maths Marks :";
    cin>>Maths;

    cout<<"enter your sst Marks :";
    cin>>sst;

    float Avg = (sci+Maths+sst)/3;
    cout<<"Average Marks of all three is :"<<Avg<<endl;

    return 0;



}