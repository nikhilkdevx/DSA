#include<iostream>
#include<cstring>
using namespace std;
// void toUpper(char ch[], int n){
//  for(int i = 0 ;i<n;i++){
//     char word = ch[i];
//     if(word >= 'A' && word <= 'Z'){
//         continue;
//     }else{
//         ch[i] = ch[i] - 'a' + 'A';
//     }
//  }
//     cout << ch;
// }

// void toLower(char word[] , int n){
//     for(int i = 0; i<n;i++){
//         char ch = word[i];
//         if(ch>='a' && ch<='z'){
//                 continue;
//         }else{
//             word[i] = ch - 'A' + 'a'; 
//         }
//     }
//     cout << word;
// }

// void Reverse(char word[],int n){
//     int st = 0 , end = n-1;
//     while (st <= end){
//         swap(word[st],word[end]);
//         st++;
//         end--;
//     }
    
//     cout << word;
// }

void Palindrome(char word[] , int n ){
    int st =0 , end = n-1;
    while (st < end){
        if(word[st]!= word[end]){
            cout << "not valid Palindrome";
            return;
        }
        st ++;
        end --;
    }
    cout << "Palindrome";
}

int main(){
    
    char ch[] = "madam";
    Palindrome(ch, strlen(ch));
    
    return 0; 
}