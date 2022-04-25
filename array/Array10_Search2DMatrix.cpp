  bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int column = matrix[0].size();
        
        
        if(row == 0||column == 0)
            return false;
        
        
       //Find the row
        
       int r1 = 0;
       int r2 = row -1;
       int r_mid = 0;
        
       //Do binary search for finding the row   
       while(r1 < r2){
           
           r_mid = r1 + (r2 - r1)/2;
           
           //Move down {
           if(matrix[r_mid][column - 1] <  target){
               r1 = r_mid + 1;
           }
            
           //Move up
            else if(matrix[r_mid][0]  >  target){
               r2 = r_mid - 1;
            }
                
            else{
                r1 = r_mid; // Row found
                break;
            }
                
       }
        
        int c1 = 0;
        int c2 = column - 1;
        int c_mid = 0;
        //Do binary search on column
        while(c1 <= c2){
            
            c_mid = c1 + (c2 - c1) / 2;
            
            //Target found
            if(matrix[r1][c_mid] == target)
                return true;
            //Move left
            else if(matrix[r1][c_mid] > target)
                c2 = c_mid - 1;
            //Move right
            else if(matrix[r1][c_mid] < target)
                c1 = c_mid + 1;
        }
        
        return false;
        
    }