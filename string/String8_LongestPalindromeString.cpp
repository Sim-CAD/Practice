   string longestPalindrome(string s) {
        int n = s.length();
        int r = 0, l = 0;
        int max_size = 1;
        int start = 0, end = 0;
        
        if(n == 0) return "";
        
        if(n == 1) return s;
        
       
        for(int i = 0; i < n - 1; i++){
           
             r = i;
             l = i;
            
            while(l >= 0 && r < n && s[r] == s[l]){ 
                r++;
                l--;  
            
            }
            
            int size = r - l - 1;
           
            if(max_size < size){
                max_size = size;
                start = l + 1;
                end = r - 1;
            }
            
        }
        
         for(int i = 0; i < n - 1; i++){
           
             r = i+1;
             l = i;
            
            while(l >= 0 && r < n && s[r] == s[l]){ 
                r++;
                l--;  
            
            }
            
            int size = r - l - 1;
           
            if(max_size < size){
                max_size = size;
                start = l + 1;
                end = r - 1;
            }
            
        }
        
       
       return s.substr(start, max_size);
    }