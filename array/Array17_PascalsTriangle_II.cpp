 vector<int> getRow(int rowIndex) {
        vector<vector<int>> tmp;
             
        for(int i = 0; i <= rowIndex; i++){
            vector<int> ans(i+1, 1);
            for(int j = 1; j < i; j++){
                ans[j] = tmp[i-1][j] + tmp[i-1][j-1];
            }
            tmp.push_back(ans);
            if(i == rowIndex)
                return ans;
        }
       return {}; 
    }