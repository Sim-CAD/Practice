   vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> map;
        vector<int> res;
        
        for(int itr = 0; itr < nums.size(); itr++){
            int diff = target - nums[itr];
            if(map.size() != 0 && map.find(target - nums[itr]) != map.end()) {
              res.push_back(map.find(diff)->second);
              res.push_back(itr);
            } 
             map[nums[itr]] = itr;   
        }
        return res;
    }