 bool isAnagram(string s, string t) {
        vector<int> hash(26,0);
        
        
        if(s.length() != t.length())
            return false;
        
        for(int i = 0; s[i] != '\0'; i++){
            hash[s[i] - 'a']++;
        }
        
        for(int i =0 ; t[i] != '\0'; i++){
            if(hash[t[i] - 'a'] == 0){
                return false;
            }
           
            hash[t[i] - 'a'] --;
        }
        
        return true;
    }