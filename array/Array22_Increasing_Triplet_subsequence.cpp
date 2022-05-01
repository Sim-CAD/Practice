 bool increasingTriplet(vector<int>& nums) {
       if(nums.size() < 3) return false;
        
       int i = INT_MAX;
       int j = INT_MAX;
       int k = INT_MAX;
        
        for(int itr = 0; itr < nums.size(); itr++){
           
            if(nums[itr] <= i){
                i = nums[itr];
            }
            else if(nums[itr] > i && nums[itr] <= j){
                j = nums[itr];
            }
            else if(nums[itr] > i && nums[itr] > j && nums[itr] <= k){
                k = nums[itr];
                return true;
            }
        }
        return false;
    }