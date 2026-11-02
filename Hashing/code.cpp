// HashTable is being Used in unordered Maps and Unordered Sets 
// Unordered Map is used where we need less time complexity and more space complexity is being taken 
// Unordered Sets is used where less space complexity but more time complexity
// If We have to maitain order then just use map in place of unordered maps
// Maps store Key values pair where sets just store unique keys
// unordered sets / maps uses hash table wehere ordered ones uses red black trees having o(logn) time complexity


// #include<iostream>
// #include<unordered_map>
// using namespace std;

// int main(){
//     unordered_map<string,int>m;
//     m["India"] = 150;
//     m["china"] = 100;
//     m["Nepal"] = 20;
//     // print
//     m["Nepal"] = 200;
//     for(pair<string,int> country : m){
//         cout << country.first << "," << country.second << endl;
//     }

//     // count == 1 then yes or if 0 then No 
//     if(m.count("Nepal")){
//         cout << "Nepal Exists\n";
//     } else {
//         cout << "Nepal Doesn't Exists\n";
//     }

//     m.erase("Nepal");
//     if(m.count("Nepal")){
//         cout << "Nepal Exists\n";
//     } else {
//         cout << "Nepal Doesn't Exists\n";
//     }
//     return 0; 
// }

#include<iostream>
#include<map>
#include<unordered_set>
using namespace std;

// int main(){
//     map<string,int>m;
//     m["India"] = 150;
//     m["China"] = 100;
//     m["Nepal"] = 20;
//     // print
//     m["Nepal"] = 200;
//     for(pair<string,int> country : m){
//         cout << country.first << "," << country.second << endl;
//     }

//     // count == 1 then yes or if 0 then No 
//     if(m.count("Nepal")){
//         cout << "Nepal Exists\n";
//     } else {
//         cout << "Nepal Doesn't Exists\n";
//     }

//     m.erase("Nepal");
//     if(m.count("Nepal")){
//         cout << "Nepal Exists\n";
//     } else {
//         cout << "Nepal Doesn't Exists\n";
//     }
//     return 0; 
// }