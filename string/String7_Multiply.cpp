string multiply(string num1, string num2) {
        
        if(num1 == "0" || num2 == "0") 
            return "0";
        int n1 = num1.size();
        int n2 = num2.size();
       
        
        vector<int> ans(n1+n2, 0);
        
        for(int i = n1 - 1; i >= 0; i--){
            for(int j = n2 - 1; j >= 0; j--){
                
                ans[i + j + 1] += ((num1[i] - 48) * (num2[j] - 48));
                ans[i + j] += ans[i + j + 1] / 10;
                ans[i + j + 1] = ans[i + j + 1] % 10;
             }
         }
        
        int i = 0;
        while(i < ans.size() && ans[i] == 0) 
            i++;
        
        string res = "";
        while(i < ans.size()){
            res.push_back(ans[i] + 48);
            i++;
        }
                
        return res;     
    }