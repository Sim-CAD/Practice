//Find Smallest among right child to become a new root     
    int findSmallestRightChild(TreeNode *rightNode){
        
        if(rightNode == NULL)
            return NULL;
        
        while(rightNode->left)
            rightNode = rightNode->left;
        
        return rightNode->val;
    }
    
    
    TreeNode* deleteNode(TreeNode* root, int key) {
        
        if(root == NULL)
            return root;
     
//Searching
       if(root->val < key)
           root->right = deleteNode(root->right, key);
        
        if(root->val > key)
            root->left = deleteNode(root->left, key);
                
//Found           
         if(root->val == key){
             
             
//Leaf Nodes
             if(root->left == NULL && root->right == NULL)
                 return NULL;
             
//Only Left Child
             else if(root->left != NULL && root->right == NULL)
                 return root->left;
             
//Only Right Child             
             else if(root->right != NULL && root->left == NULL)
                 return root->right;
             
//Both Child Present
             else{
                 int replace = findSmallestRightChild(root->right);
                 root->val   = replace;
                 root->right = deleteNode(root->right, replace);      
             }
         }
         return root;   
    }