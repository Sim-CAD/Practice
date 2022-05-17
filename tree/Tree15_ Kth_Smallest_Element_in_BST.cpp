    void inOrder(TreeNode* root, vector<int>& res, int k){
        
        if(root == NULL)
            return;
        
        if(k == 0)
            return;
       
        inOrder(root->left, res,k--);
        res.push_back(root->val);
        inOrder(root->right, res, k--); 
       
    }
    
    int kthSmallest(TreeNode* root, int k) {
        
        if(root == NULL)
            return NULL;
        
        vector<int> res;
        inOrder(root, res, k);
       
        return res[k-1];
    }