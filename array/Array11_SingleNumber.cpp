 int singleNumber(vector<int>& nums) {
        
        unordered_map<int, int> mp;
        
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        
        for(auto itr =  mp.begin(); itr != mp.end(); itr++){
            if(itr->second == 1)
                return itr->first;
        }
       return -1; 
}