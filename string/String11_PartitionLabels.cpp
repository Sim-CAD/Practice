 vector<int> partitionLabels(string s) {
        
        vector<int> endd(26,0);
        vector<int>res;
        int start = 0;
        int end = 0;
        
        for(int i = 0; i < s.length(); i++){
            endd[s[i] - 'a'] = i;
        }
        
        for(int i = 0; i < s.length(); i++){
            end = max(end, endd[s[i] - 'a']);
            if(i == end){
                res.push_back(end - start + 1);
                start = end + 1;
            }
        }
        return res;
    }