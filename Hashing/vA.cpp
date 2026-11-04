// Valid Anagram

#include<iostream>
#include<vector>
#include<map>
using namespace std;

bool validAnagram(string s, string t){
    map<char , int> m;
    for(int i = 0 ;i<s.size();i++){
        if(m.count(s[i])){
            m[s[i]]++;
        } else {
            m[s[i]] = 1;
        }
    }
    for(int i = 0 ;i<t.size();i++){
        if(m.count(t[i])){
            m[t[i]]--;
        } else {
            return false;
        }
    }
    if(m.size() != 0){
        return false;
    }
    return true;
    
}

int main(){
    string s = "race"; 
    string t = "care";
    return 0;
}