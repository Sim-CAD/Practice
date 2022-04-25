 vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;
        vector<int> res;
        
        for(int i =0; i<nums1.size(); i++)
            mp[nums1[i]]++;
        
        
       for(int i =0; i<nums2.size(); i++){
            
            if( mp.find(nums2[i]) != mp.end() && mp.find(nums2[i])->second != 0){    
             res.push_back(mp.find(nums2[i])->first);
             mp.find(nums2[i])->second--; 
            }
        }
        
        return res;
        
    }