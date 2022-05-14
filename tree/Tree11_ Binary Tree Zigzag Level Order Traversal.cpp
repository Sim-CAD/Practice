vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
    
        queue<TreeNode*> q;
        bool rev = false;
        
        if(root == NULL)
            return {};
        
        q.push(root);
        
        while(!q.empty()){
            int count = q.size();
            vector<int>level;
            deque<TreeNode*>dq;
            
            while(count > 0){
                
                TreeNode* node = q.front();
                cout<<node->val<<endl;
                
                q.pop();
                

                if(node->left)
                   q.push(node->left);
                if(node->right)
                    q.push(node->right);

            
                count--;
                level.push_back(node->val);
           
            }
            if(rev)
                std::reverse(level.begin(), level.end());
            res.push_back(level);
            rev = !rev;
        }
        return res;
    }