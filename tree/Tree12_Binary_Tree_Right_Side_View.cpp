vector<int> rightSideView(TreeNode* root) {
        if(root == NULL)
            return {};
        
       queue<TreeNode*> q;
       vector<int> res;
        
        q.push(root);  
        
        while(!q.empty()){
            int count = q.size();
            vector<int> v;
            
            for(int i = 0; i < count; i++){
                
                  TreeNode* n = q.front();
                  q.pop();
                  v.push_back(n->val);
                
                if(n->left)
                    q.push(n->left);
                 if(n->right)
                    q.push(n->right);
                
               
            }
            res.push_back(v[count - 1]);
        }
    
        return res;
    }