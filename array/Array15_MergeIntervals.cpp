    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>> res;
        
        sort(intervals.begin(), intervals.end()); //sort with start
        
        int start = intervals[0][0];
        int end = intervals[0][1];
        
        for(auto i: intervals){
            if(i[0] > end){
                res.push_back({start,  end});
                start = i[0];
                end = i[1];
            }
            else{
                 end = max(end, i[1]);
            }
        }
        
        res.push_back({start, end});
        
        return res;
        
    }