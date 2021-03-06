#include<bits/c++.h>
#include<vector>

/*Kadane's Algorithm*/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = nums[0];
        int current_sum = max_sum;
       
        for(int i = 1; i < nums.size(); i++){
            current_sum = max(current_sum + nums[i], nums[i]);
            max_sum = max(current_sum, max_sum);
        }
          
    return max_sum;
    }    
    
};