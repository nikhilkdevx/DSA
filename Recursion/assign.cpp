#include <iostream>
#include <string>
using namespace std;
// Question 1

void binarySearch(int arr[],int n,int key,int si,int ei){
    if(si > ei){
        cout << -1;
        return;
    }
    int mid = (si + ei) / 2;
    if(arr[mid] == key ){
        cout << "Found at Index : " << mid;
        return;
    } else if(arr[mid] > key){
        ei = mid - 1;
        binarySearch(arr,n,key,si,ei);
    } else{
        si = mid + 1;
        binarySearch(arr,n,key,si,ei);
    }
}

// Question 2

void recurring(int arr[],int n,int key,int si){
    if(si == n){
        return;
    }
    if(arr[si] == key){
        cout << si<<" ";
    } 
    recurring(arr,n,key,si+1);
}

// Question 3

int countString(string s){
    if(s.length() == 0){
        return 0;
    }
    int count = 0;
    for(int i=0;i<s.length();i++){
        if(s[0] == s[i]) {
            count ++;
        }
    }
    return count + countString(s.substr(1));
    
}

// Question 4 [Tower of Hanoi]

void towerOfHanoi(int n, char source, char helper, char destination){
    if(n == 1){
        cout << "Move disk " << n << " from " << source<< " to " << destination << endl;
        return ;
    }
    
    towerOfHanoi(n-1,source,destination,helper);
    cout << "Move disk " << n << " from " << source<< " to " << destination << endl;
    towerOfHanoi(n-1,helper,source,destination);

}

int main(){
    int n = 4;
    towerOfHanoi(n,'A','B','C');
    return 0;
}



