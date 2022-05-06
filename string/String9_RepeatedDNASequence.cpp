vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string, int> hashmap;
        vector<string> res;
        
        if(s.length() < 10)
            return res;
        
        for(int i = 0; i < s.length() - 9; i++){
            string subs = s.substr(i, 10);
            hashmap[subs]++;
        }
        
        for(auto itr = hashmap.begin(); itr != hashmap.end(); itr++){
            if(itr->second > 1)
                res.push_back(itr->first);
        }
        
        return res;
    }