#include <iostream>
#include <vector>
#include <string>
using namespace std;

// void printBoard(vector<vector<char>> board){
//     int n = board.size();
//     for(int i = 0;i<n;i++){
//         for(int j = 0;j<n;j++){
//             cout << board[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << "------------------------------\n";
// }

// bool isSafe(vector<vector<char>> board,int row,int col){
//     int n = board.size();
//     for(int i = 0;i<n;i++){
//         if(board[i][col] == 'Q'){
//             return false;
//         }
//     }

//     for(int j = 0;j<n;j++){
//         if(board[row][j] == 'Q'){
//             return false;
//         }
//     }

//     for(int i = row,j= col; i>=0 && j>= 0 ; i--,j--){
//         if(board[i][j] == 'Q'){
//             return false;
//         }
//     }

//     for(int i = row,j=col; i>=0 && j < n; i--,j++){
//         if(board[i][j] == 'Q'){
//             return false;
//         }
//     }

//     return true;
// }

// int nQueens(vector<vector<char>> board,int row){
//     int n = board.size();
    
//     if(row == n){
//         printBoard(board);
//         return 1;
//     }
//     int count = 0;
//     for(int j = 0;j<n;j++){
//         if(isSafe(board,row,j)){
//             board[row][j] = 'Q';
//             count += nQueens(board,row+1);
//             board[row][j] = '.';
//         }
//     }
//     return count;
// }

// int main(){
//     vector<vector<char>> board;
//     int n = 6;
//     for(int i = 0;i<n;i++){
//         vector<char> newRow;
//         for(int j = 0; j<n;j++){
//             newRow.push_back('.');
//         }
//         board.push_back(newRow);
//     }
//     int total = nQueens(board,0);
//     cout << "Total Possible Boards : "<< total << endl;
//     return 0;
// }
    
#include <iostream>
#include <vector>
using namespace std;

void printBoard(vector<vector<char>>& board) {
    int n = board.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << "---------------------\n";
}

bool isSafe(vector<vector<char>>& board, int row, int col) {
    int n = board.size();

    // Check only previously visited positions
    if (row - 2 >= 0 && col - 1 >= 0 && board[row - 2][col - 1] == 'K'){
        return false;
    }
    if (row - 2 >= 0 && col + 1 < n && board[row - 2][col + 1] == 'K'){
        return false;
    }
    if (row - 1 >= 0 && col - 2 >= 0 && board[row - 1][col - 2] == 'K'){
        return false;
    }
    if (row - 1 >= 0 && col + 2 < n && board[row - 1][col + 2] == 'K'){
        return false;
    }
    return true;
}

int nKnights(vector<vector<char>>& board, int index, int knightsPlaced) {
    int n = board.size();

    // Placed all N knights
    if (knightsPlaced == n) {
        printBoard(board);
        return 1;
    }

    // Reached end of board
    if (index == n * n){
        return 0;
    }
    int row = index / n;
    int col = index % n;

    int count = 0;

    // Choice 1: Place knight
    if (isSafe(board, row, col)) {
        board[row][col] = 'K';
        count += nKnights(board, index + 1, knightsPlaced + 1);
        board[row][col] = '.';
    }

    // Choice 2: Skip this cell
    count += nKnights(board, index + 1, knightsPlaced);

    return count;
}

int main() {
    int n = 3;

    vector<vector<char>> board(n, vector<char>(n, '.'));

    int total = nKnights(board, 0, 0);

    cout << "Total solutions: " << total << endl;

    return 0;
}