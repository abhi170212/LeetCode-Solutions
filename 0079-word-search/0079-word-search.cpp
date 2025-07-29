class Solution {
public:
    int m;
    int n;
    bool findword(vector<vector<char>>& board, string word, int ind, int row,int col){
        if(ind == word.length()){
            return true;
        }
        if(row<0 || col<0 || row==m || col==n || board[row][col] != word[ind] || board[row][col] =='!'){
            return false;
        }

        char c = board[row][col];
        board[row][col] = '!';

        bool top = findword(board,word,ind+1,row-1,col);
        bool bottom = findword(board,word,ind+1,row+1,col);
        bool right = findword(board,word,ind+1,row,col+1);
        bool left = findword(board,word,ind+1,row,col-1);

        board[row][col] = c;
        return top||bottom||right||left;
    }
    bool exist(vector<vector<char>>& board, string word) {
        m = board.size();
        n = board[0].size();
        int index = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j] == word[index]){
                    if(findword(board,word,index,i,j)){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};