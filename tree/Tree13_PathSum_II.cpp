 void helperFunction(TreeNode* root, int currentSum, vector<int> cur,
                                        int target,vector<vector<int>> &res){
        
        if(root == NULL)
            return;
        
        currentSum = currentSum + root->val;
        cur.push_back(root->val);
        
        
        if(root->left == NULL && root->right == NULL && currentSum == target){
            res.push_back(cur);
            return;
        }
        
        if(root->right != NULL)
            helperFunction(root->right, currentSum, cur, target, res);
        
        if(root->left != NULL)
            helperFunction(root->left, currentSum, cur, target, res);
        
            
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if(root == NULL)
            return {};
        
        vector<vector<int>> res;
        
       helperFunction(root, 0, {}, targetSum, res);
           
       return res;
        
    }