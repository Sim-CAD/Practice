 vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size());
        int right_product = nums[nums.size() - 1];
        
        res[0] = 1;
        for(int i = 1; i < nums.size(); i++){
            res[i] = res[i - 1] * nums[i - 1];
        }
        
        for(int i = res.size() - 2; i >= 0; i--){
            res[i] = res[i] * right_product;
            right_product *= nums[i] ;
        }
        
        return res;
    }