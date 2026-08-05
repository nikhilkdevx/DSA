#include <iostream>
#include <vector>
#include <string>
using namespace std;

void subsets(string str, string sub){
    if(str.size() == 0){
        cout << sub <<"\n";
        return;
    }
    char ch = str[0];
    subsets(str.substr(1,str.size()-1),sub +ch);
    subsets(str.substr(1,sub.size()-1),sub);

}

int main(){
    string str = "abc";
    string sub = "";
    subsets(str,sub);
    return 0;
}
