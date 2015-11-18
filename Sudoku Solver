//version 1  Time Limited
class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        SolveSudoku(board);
    }
    bool SolveSudoku(vector<vector<char>>& board){
        for(int i=0;i<9;++i){
            for(int j=0;j<9;++j){
                if(board[i][j]=='.'){
                    for(int k=1;k<10;++k){
                        board[i][j]='0'+k;
                        if(isValidSudoku(board)&&SolveSudoku(board))
                            return true;
                        board[i][j]='.';
                    }
                    return false;
                }
            }
        }
        return true;
    }
private:
    bool check(char board,vector<bool> &used){
            if(board=='.')
                return true;
            if(used[board-'1'])
                return false;
            return used[board-'1']=true;
    }//end check
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<bool> used(9,false);
        for(int i=0;i<9;i++){
            fill(used.begin(),used.end(),false);
            for(int j=0;j<9;j++){
                if(!check(board[i][j],used))
                    return false;
            }
            fill(used.begin(),used.end(),false);
            for(int j=0;j<9;j++){
                if(!check(board[j][i],used))
                    return false;
            }
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                fill(used.begin(),used.end(),false);
                for(int k=0;k<3;k++)
                    for(int m=0;m<3;m++)
                        if(!check(board[3*i+k][3*j+m],used))
                            return false;
            }
        }
        return true;
    }//end isValidSudoku
};
