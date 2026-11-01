// HashTable is being Used in unordered Maps and Unordered Sets 
// Unordered Map is used where we need less time complexity and more space complexity is being taken 
// Unordered Sets is used where less space complexity but more time complexity

#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string,int>m;
    m["India"] = 150;
    return 0; 
}