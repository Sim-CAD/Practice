 vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
       vector<vector<int>>res(r, vector<int>(c));
       int res_r = 0;
       int res_c = 0;
        
       if(mat.size()*mat[0].size() != r*c)
           return mat;
        
       for(int i = 0 ; i < mat.size(); i++){
           for(int j = 0; j < mat[0].size(); j++){
               res[res_r][res_c] = mat[i][j];
               res_c++;
               if(res_c == c) {
                 res_c =0;
                 res_r++;
               }
           }
       }
        
      return res;
    }