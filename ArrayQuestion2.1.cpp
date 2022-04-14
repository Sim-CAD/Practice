
//Kadene's Algorithm with printing the max sub array with starting and ending index
int maxSubArray(vector<int>& nums) {
       
        int max_sum = INT_MIN;
        int current_sum = 0;
        int s =0;
        int start = 0;
        int end = 0;
        vector<int> res= {0};
        

        for(int i = 0; i < nums.size(); i++){
           
            current_sum = current_sum + nums[i];
            
            res.push_back(nums[i]);
            
             if(current_sum > max_sum ){ //DP part
                 max_sum = current_sum;
                 start = s;
                 end = i;
                 
             } else if(current_sum < 0){ //Greedy part
                 current_sum = 0;
                  res.clear();
                  s = i+1;
             }
                
        }
        cout <<"Final Array with max sum of: "<< max_sum <<" from index "<<start<<" to "<<end<<endl; ;
        for(int itr = 0; itr<res.size(); itr++){
            cout << res[itr]<<" ";
        }
        
      
        return max_sum;
           
}    
    