bool wordPattern(string pattern, string s) {
        
        unordered_map<string, char> stringdictionary;
        unordered_map<char, string> chardictionary;
        
        int size_string = pattern.length();
        stringstream ss(s);
        string word;
        int i = 0;
        
        
        while(ss >> word){
            
            if( i == size_string)
                return false;
            
           char c = pattern[i];
            
          //count mismatch  
          if(chardictionary.count(c) != stringdictionary.count(word)){
               return false;
          }
            //dictionary missmatch
            if(chardictionary.count(c)){
                if(chardictionary[c] != word || stringdictionary[word] != c){
                    return false;
                }
            }
            else{
                stringdictionary.insert({word,c});
                chardictionary.insert({c, word});
            }
            i++;   
        }
      
       return (i == size_string); 
        
    }