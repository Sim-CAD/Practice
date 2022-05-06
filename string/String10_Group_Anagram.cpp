   vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        int l = strs.size();
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> ans;
        
        if(l == 0)
            return ans;
        
        for(int i = 0; i < l; i++){
            string s = strs[i];
            sort(s.begin(), s.end());
            mp[s].push_back(strs[i]);
        }
        
        for(auto itr = mp.begin(); itr != mp.end(); itr++){
            ans.push_back(itr->second);
        }
        return ans;
    }