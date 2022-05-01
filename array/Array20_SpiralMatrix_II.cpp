vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res (n, vector<int>(n));
        
        int rs = 0, re = n - 1;
        int cs = 0, ce = n - 1;
        int val = 1;
        
        while(rs <= re && cs <= ce){
            for(int c = cs; c <= ce; c++)    res[rs][c] = val++;
           
            
            for(int r = rs + 1; r <= re; r++) res[r][ce] = val++;
            
            
            if(rs < re && cs < ce){
                
                for(int c = ce - 1; c > cs; c--) res[re][c] = val++;
               
                
                for(int r = re; r > rs; r--)res[r][cs] = val++;
                
            }
            rs++;
            re--;
            cs++;
            ce--;
        }
        return res;
    }