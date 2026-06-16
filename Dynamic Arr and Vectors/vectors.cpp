#include<iostream>
#include<vector>
using namespace std;

// int main(){
//     vector <int> vec1(5 , -1);
//     // cout << vec1.size();
//     for(int i = 0 ; i<vec1.size();i++){
//         cout << vec1[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

int main(){
    // vector <vector <int> > matrix = {{1,2,3} , {4,5,6} , {7,8,9}};
    // for(int i = 0; i< matrix.size();i++){
    //     for(int j = 0; j<matrix[i].size();j++){
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    
    vector <int> v;
    for(int i = 0 ; i < 5; i++){
        v.push_back(i);
    }
    cout << v.size() << endl;
    cout << v.capacity() << endl;

}

// 0,1,2,3,4 => 1,2, 4,8