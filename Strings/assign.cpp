#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Quest 1
void countString(string s){
    int count = 0;
    for(int i=0 ; i<s.length();i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            count++;
        }
    }
    cout << count;
}

//Quest 2
bool equalString(string s1,string s2){
    vector <int>diff;
    for(int i=0; i< s1.length();i++){
        if(s1[i] != s2[i]){
            diff.push_back(i);
        }
        
    }
    if(diff.size() == 0){
        return true;
    }
    if (diff.size() != 2){
        return false;
    }
    if(s1[diff[0]] == s2[diff[1]] && s1[diff[1]] == s2[diff[0]]){
        return true ;
    }
    return false;


}


int main(){
    string s1 = "abcd";
    string s2 = "abde";
    cout << equalString(s1,s2);
    return 0;
}