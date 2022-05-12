  TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return buildHelper(0, 0, inorder.size() - 1, preorder, inorder);
    }
    
    TreeNode* buildHelper(int preStart, int inOrderStart, int inOrderEnd,
                          vector<int>& preorder, vector<int>& inorder){
        
        if(preStart > preorder.size() - 1 || inOrderStart > inOrderEnd)
            return NULL;
        
        TreeNode* root = new TreeNode(preorder[preStart]);
        
        int index = 0;
        
        for(int i = inOrderStart; i <= inOrderEnd; i++){
            if(inorder[i] == root->val)
                index = i;
            }
        
        root->left = buildHelper(preStart + 1, inOrderStart, index - 1, preorder, inorder);
        root->right = buildHelper(preStart + index - inOrderStart + 1, index + 1, inOrderEnd, preorder, inorder);
        
        return root;
        
    }