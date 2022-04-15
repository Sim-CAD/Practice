 vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> map;
        vector<int> res;
        int flag = 0;
        
        for(int itr = 0; itr < nums.size(); itr++){
            int diff = target - nums[itr];
            if(map.size() != 0 && map.find(target - nums[itr]) != map.end()) {
              res.push_back(map.find(diff)->second);
               flag = 1;
            }
                
             map[nums[itr]] = itr;
            
            if(flag == 1){
                res.push_back(map[nums[itr]]);
                break;
            }
                
        }
        
        return res;
        
    }