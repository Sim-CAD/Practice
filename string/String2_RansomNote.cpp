 bool canConstruct(string ransomNote, string magazine) {
         vector<int> vec(26,0); 
         
    //Count the occurrence of each character in magazine string
         for(int i = 0 ; magazine[i] != '\0'; ++i){
             vec[magazine[i] - 'a'] += 1;
         }
        
        //Check if the characters to form string ransomNote is present in magazine string
        for(int i = 0 ; ransomNote[i] != '\0'; ++i){
            
             if(vec[ransomNote[i] - 'a'] == 0){
                 return false;
             }
            
              vec[ransomNote[i] - 'a'] -= 1;
         }
          
        return true;;
        
    }