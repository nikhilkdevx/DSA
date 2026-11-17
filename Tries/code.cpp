#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;

class Node{
    public :
    unordered_map<char,Node*>children;
    bool endOfWord;

    Node(){
        endOfWord = false;
    }

};

class Trie{
    Node* root;
    public:
    Trie(){
        root = new Node();
    }

    void insert(string key){
        Node* temp = root;
        for(int i = 0;i<key.size();i++){
            if(temp->children.count(key[i]) == 0){
                temp->children[key[i]] = new Node();
            }
            temp = temp->children[key[i]];
        }
        temp->endOfWord = true;
    }

    bool search(string key){
        Node* temp = root;
        for(int i = 0 ; i<key.size();i++){
            if(temp->children.count(key[i]) == 0){
                return false;
            }
            temp = temp->children[key[i]];
        }
        return temp->endOfWord;
    }

    bool startsWith(string prefix){
    Node* temp = root;

    for(int i = 0;i<prefix.size();i++){
        char curr = prefix[i];
        if(temp->children[curr]){
            temp = temp->children[curr];
        }else {
            return false;
        }
    }
    return true;
    }

    int countHelper(Node* root){
        int ans = 0;
        for(pair<char,Node*>child : root->children){
            ans+= countHelper(child.second);
        }
        return ans + 1;
    }

    int countNodes(){
        return countHelper(root);
    }

    void longestHelper(Node* root,string &ans,string temp){
        for(pair<char,Node*>child : root->children){
            if(child.second->endOfWord){
            temp += child.first;
            if((temp.size() == ans.size() && temp < ans) || (temp.size() > ans.size())){
                ans = temp;
            }

            longestHelper(child.second,ans,temp);
            temp = temp.substr(0,temp.size()-1);
            }
        }
    }

    string longestStringwithEow(){
        string ans = "";
        string temp = "";
        longestHelper(root,ans,temp);
        return ans;
    }
};

// Word Break

// bool helper(Trie &trie,string key){
//     if(key.size() == 0){
//         return true;
//     }

//     for(int i = 0;i<key.size();i++){
//         string first = key.substr(0,i+1);
//         string sec = key.substr(i+1);

//         if(trie.search(first) && helper(trie,sec)){
//             return true;
//         }
//     }

//     return false;
// }

// bool wordBreak(vector<string>dictionary,string key){
//     Trie trie;
//     for(int i = 0;i<dictionary.size();i++){
//         trie.insert(dictionary[i]);
//     }

//     return helper(trie,key);
// }

// Count Unique SubStrings

int countUniqueSubstr(string str){
    Trie trie;
    for(int i = 0;i<str.size();i++){
        string suffix = str.substr(i);
        trie.insert(suffix);
    }

    return trie.countNodes();
}

// Longest Word With all Prfix 
string longestsString(vector<string>dict){
    Trie trie;
    for(int i = 0;i<dict.size();i++){
        trie.insert(dict[i]);
    }
    return trie.longestStringwithEow();
}
int main(){
    vector<string>dict = {"a","banana","app","appl","ap","apply"};
    cout << longestsString(dict);
    return 0;
}