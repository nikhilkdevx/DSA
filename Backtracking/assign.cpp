#include <iostream>
#include <vector>
#include <string>
using namespace std;

// void printSudoku(int sudoku[9][9]){
//     for(int i = 0;i<9;i++){
//         for(int j = 0;j<9;j++){
//             cout << sudoku[i][j] << " ";
//         }
//         cout << endl;
//     }
// };

// bool isSafe(int sudoku[9][9],int row,int col,int digit){
//     for(int i = 0;i<9;i++){
//         if(sudoku[i][col] == digit){
//             return false;
//         }
//     }

//     for(int j = 0;j<9;j++){
//         if(sudoku[row][j] == digit){
//             return false;
//         }
//     }

//     int startRow = (row/3) * 3;
//     int startCol = (col/3) * 3;

//     for(int i = startRow; i<= startRow+2;i++){
//         for(int j = startCol; j<= startCol+2;j++){
//             if(sudoku[i][j] == digit){
//                 return false;
//             }
//         }
//     }

//     return true;

// };

// bool sudokuSolver(int sudoku[9][9],int row,int col){
//     if(row == 9){
//         printSudoku(sudoku);
//         return true;
//     }

//     int nextRow = row;
//     int nextCol = col + 1;

//     if(col+1 == 9){
//         nextRow = row + 1;
//         nextCol = 0;
//     }

//     if(sudoku[row][col] != 0){
//         return sudokuSolver(sudoku,nextRow,nextCol);
//     }

//     for(int digit = 1;digit<=9;digit++){
//         if(isSafe(sudoku,row,col,digit)){
//             sudoku[row][col] = digit;
//             if(sudokuSolver(sudoku,nextRow,nextCol)){
//                 return true;
//             }
//             sudoku[row][col] = 0;
//         }
//     }

//     return false;
// };

// int main(){
//     int sudoku[9][9] = {{0,0,8,0,0,0,0,0,0},
//                         {4,9,0,1,5,7,0,0,2},
//                         {0,0,3,0,0,4,1,9,0},
//                         {1,8,5,0,6,0,0,2,0},
//                         {0,0,0,0,2,0,0,6,0},
//                         {9,6,0,4,0,5,3,0,0},
//                         {0,3,0,0,7,2,0,0,4},
//                         {0,4,9,0,3,0,0,5,7},
//                         {8,2,7,0,0,9,0,1,3}};
//     sudokuSolver(sudoku,0,0);
//     return 0;
// }

// Question 1

// void ratWays(int arr[4][4],bool visited[4][4],int r,int c,int n,string path){
//     if(r < 0 || r >= n || c < 0 || c >= n ){
//         return;
//     }
//     if(r == n-1 && c == n-1){
//         cout << path << endl;
//         return;
//     }
//     if(visited[r][c]){
//         return;
//     }
//     if(arr[r][c] == 0){
//         return;
//     }
//     visited[r][c] = true;

//     path.push_back('U');
//     ratWays(arr,visited,r-1,c,n,path);
//     path.pop_back();

//     path.push_back('D');
//     ratWays(arr,visited,r+1,c,n,path);
//     path.pop_back();

//     path.push_back('L');
//     ratWays(arr,visited,r,c-1,n,path);
//     path.pop_back();

//     path.push_back('R');
//     ratWays(arr,visited,r,c+1,n,path);
//     path.pop_back();

//     visited[r][c] = false;
//     return;
// }


// Question 2

void combinations(string input[],string ans,string digit,int index){
    
    if(index == digit.size()){
        cout << ans<<", ";
        return;
    }
    
    string currInput = input[digit[index] - '2'];
    for(int i = 0;i<currInput.size();i++){
        char currChar = currInput[i];
        ans.push_back(currChar);
        combinations(input,ans,digit,index+1);
        ans.pop_back();
    }  

};

int main(){
    string input[] = {
        "abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"
    };
    string digit = "234";
    string ans = "";
    combinations(input,ans,digit,0);
    return 0;
};