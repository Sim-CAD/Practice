 bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> map;
        
      
        //Populate map with the vector and count the occurence
        for(int i = 0; i < nums.size(); i++){
            map[nums[i]]++;
        }
        
        
        //Iterate through the map and check for the count of each elemnent
        for(auto itr = map.begin(); itr != map.end(); itr++){
            
            //If count is greater than one then return from the function with -1 
            //which tells main that we have found duplicates in the given vector
            if(itr->second > 1 )
                return -1;
        }
       
        return 0;  
    }