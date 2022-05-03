  int longestPalindrome(string s) {
        
     unordered_map<int, int>mp;
        int odd = 0;
        int sum = 0;
    
     for(int i = 0; i < s.length(); i++)
         mp[s[i]]++;
    
     for(auto itr = mp.begin(); itr != mp.end(); itr++){
         if((itr->second) % 2 == 0)
             sum = sum + itr->second;
         else{
             sum = sum + itr->second - 1;
             odd = 1;
         }
     }
        if(odd) return sum+1;
        else return sum;
    }