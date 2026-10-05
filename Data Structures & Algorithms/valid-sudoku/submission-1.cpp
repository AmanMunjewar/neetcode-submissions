class Solution {
public:
    bool isValidRowCol(vector<vector<char>>& board){
        unordered_set<char> check1;
        unordered_set<char> check2;
        check1.reserve(9);
        check2.reserve(9);

        for (int i = 0; i < 9; i++){
            for (int j= 0; j < 9; j++){
                if (board[i][j] != '.'){
                    if(check1.find(board[i][j]) != check1.end()){
                        return false;
                    }
                    check1.insert(board[i][j]);
                }

                if (board[j][i] != '.'){
                    if(check2.find(board[j][i]) != check2.end()){
                        return false;
                    }
                    check2.insert(board[j][i]);
                }
            }
            check1.clear();
            check2.clear();
        }
        return true;
    }

    bool isValidBlock(vector<vector<char>>& board) {
        unordered_set<char> check;
        check.reserve(9);

        for (int i = 0; i < 9; i += 3) {
            for (int j = 0; j < 9; j += 3) {
                
                for (int n = i; n < i + 3; n++) {
                    for (int m = j; m < j + 3; m++) {
                        if (board[n][m] != '.') {
                            if (check.count(board[n][m])) return false;
                            check.insert(board[n][m]);
                        }
                    }
                }
                check.clear();
            }
        }
        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        if (!isValidRowCol(board)) return false;
        if (!isValidBlock(board)) return false;

        return true;
    }
};