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

// Starts With


int main(){
    vector<string>dictionary = {"apple","app","mango","man","woman"};
    Trie trie;
   for(int i = 0;i<dictionary.size();i++){
    trie.insert(dictionary[i]);
   }
   cout << trie.startsWith("ap") << endl;
    return 0;
}