    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<char, int> r_map[9];
        unordered_map<char, int> c_map[9];
        unordered_map<char, int> grid_map[9];
     
        
        for(int row = 0; row < board.size(); row++){
            for(int column = 0; column < board[0].size(); column++){
                
               char ch = board[row][column];
                
                
                if(ch != '.' &&  (r_map[row][ch]++ > 0 || c_map[column][ch]++ > 0 || 
                   grid_map[row/3*3 + column/3][ch]++ > 0)){
                
                    return false;
                }
               
            }
        }
        return true;
        
    }