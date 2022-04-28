void sortColors(vector<int>& nums) {
        
        if(nums.empty())
            return;
        
        int i=0 , j = 0;
        int k = nums.size() - 1;
       
        
        while(i <= k){    
            
            if(nums[i] == 2){
                swap(nums[i], nums[k]);
                k--;
            }
            
            else if(nums[i] == 0){
                swap(nums[i], nums[j]);
                j++;
                i++;
             }
            else{
                i++;
            }
            
        }
        
    }