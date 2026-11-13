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
};

// Word Break

int main(){
    vector<string>dictionary = {"the","a","there","any","their","thee"};
    Trie trie;
    for(int i = 0 ;i<dictionary.size();i++){
        trie.insert(dictionary[i]);
    }
    cout << trie.search("anyy") << endl;
    
    
    return 0;
}