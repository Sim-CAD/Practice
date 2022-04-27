    int majorityElement(vector<int>& nums) {
        
        unordered_map<int, int> mp;
        int max = INT_MIN;
        int ans;
        
        for(int i = 0; i< nums.size(); i++){
            mp[nums[i]]++;
        }
        
        for(auto itr = mp.begin(); itr != mp.end(); itr++){
            
            if(itr->second > max){
                max = itr->second;
                ans = itr->first;
            }
           
        }
        return ans;
    }