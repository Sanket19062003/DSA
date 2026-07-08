class Solution {
public:
    bool check(int index, int i, int j, vector<vector<char>>& board, string s){
        if(index == s.size()) return true;

        if(i < 0 || j < 0 || i >= board.size() || j >= board[0].size() || board[i][j] != s[index]) return false;

        char c = board[i][j];
        board[i][j] = ' ';
        bool ans = false;

        //top
        ans |= check(index+1,i-1,j,board,s);

        //bottom
        ans |= check(index+1,i+1,j,board,s);
        
        //left
        ans |= check(index+1,i,j-1,board,s);

        //right
        ans |= check(index+1,i,j+1,board,s);

        board[i][j] = c;
        return ans;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(check(0,i,j,board,word)) return true;
            }
        }
        return false;
    }
};