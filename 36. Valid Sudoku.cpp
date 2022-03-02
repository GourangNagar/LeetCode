






class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<char,int> row[9];
        unordered_map<char,int> col[9];
        unordered_map<char,int> box[9];
        for(int r=0;r<9;r++)
        {
            for(int c=0;c<9;c++)
            {
                char curr = board[r][c];
                if(curr !='.' && (row[r][curr]++ > 0 || col[c][curr]++ > 0 || box[r/3*3+c/3][curr]++ > 0))
                return false;
            }
        }
        return true;   
    }
};
