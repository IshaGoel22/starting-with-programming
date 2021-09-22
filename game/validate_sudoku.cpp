class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<int>> r(9),c(9),b(9);
        
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                
                if(board[i][j] != '.'){
                  
                int cur = board[i][j];
                //here our count function returns 1 if value is already present in row or column or block otherwise it will return 0
                if(r[i].count(cur) || c[j].count(cur) || b[(i/3)*3 + (j/3)].count(cur)){
                     return false;
                }
                else
                    r[i].insert(cur);
                    c[j].insert(cur);
                    b[(i/3*3) + j/3].insert(cur);
            }
            }
        
        }
        return true;
    }
};
