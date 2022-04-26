 vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> ans;
        
        if(root == NULL)
            return ans;
        
        q.push(root);
        
        while(!q.empty()){
            int count = q.size();
            vector<int> level;
        
            while(count>0){
                TreeNode *front = q.front();
                //cout <<front->val;
                q.pop();
                if(front->left) 
                    q.push(front->left);
                if(front->right) 
                    q.push(front->right);
                level.push_back(front->val); 
             count --;
            }
            ans.push_back(level);
        }
       return ans; 
    }