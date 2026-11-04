// Valid Anagram

#include<iostream>
#include<vector>
#include<map>
using namespace std;

void validAnagram(string s, string t){
    map<char , int> m;
    for(int i = 0 ;i<s.size();i++){
        m[s[i]] = 1;
    }
}

int main(){
    string s = "race"; 
    string t = "care";
    return 0;
}