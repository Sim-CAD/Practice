  TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size() == 0)
            return NULL;
        return sortedArray(nums, 0, nums.size() - 1);
    }
    
    TreeNode* sortedArray(vector<int>& nums, int low, int high){  
         
        if(low > high)
            return NULL;
        
       int mid = low + (high - low)/2;
 
        TreeNode* node = new TreeNode(nums[mid]);
        node->left = sortedArray(nums, low, mid - 1);
        node->right = sortedArray(nums, mid + 1, high);
        
        return node;
    }