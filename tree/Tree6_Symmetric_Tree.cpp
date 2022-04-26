 bool isMirror(TreeNode*r, TreeNode *l){
        
        if(r == NULL || l == NULL)
            return(r == l); //This will handle if r is NULL and l not NULL and visa-versa
        
        
        if(r->val != l->val)
            return false;
        
        
        return(isMirror(r->right, l->left)  &&  isMirror(r->left, l->right));
            
    }
    
    bool isSymmetric(TreeNode* root) {
        
        if(root == NULL)
            return true;
        
        if(root->left == NULL && root->right == NULL)
            return true;
        
        return isMirror(root->left, root->right);
        
    }