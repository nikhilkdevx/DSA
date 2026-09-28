#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    map<int,string> m;
    m[100] = "Rahul";
    m[110] = "neha";
    m[130] = "rahul";

    // cout << m[100] << endl;
    // cout << m[110] << endl;
    // cout << m[130] << endl;

    // cout << m.count(100);

    for(auto it : m){
        cout << it.first << " " <<  it.second;
        cout << endl;
    }
}