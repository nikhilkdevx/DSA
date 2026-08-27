#include<iostream>
#include<vector>
#include<stack>
using namespace std;

bool validParentheses(string str){
    stack<char>s;
    for(int i = 0;i<str.size();i++){
        char ch = str[i];
        if(ch =='('|| ch =='[' || ch =='{'){
            s.push(ch);
        }else{
            if(s.empty()){
                return false;
            }
            int top = s.top();
            if((top == '(' && ch == ')')|| 
            (top == '{' && ch == '}') || 
            (top == '[' && ch == ']')){
                s.pop();
        } else {
            return false;}
        }
    }

    if(s.empty()){
        return true;
    } else{
        return false;
    }

    return s.empty();
}

int main(){
    string str1 = "([}])";
    string str2 = "([{}])";
    cout << validParentheses(str1) << endl;
    cout << validParentheses(str2) << endl;
    return 0; 
}