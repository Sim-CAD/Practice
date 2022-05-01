 int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        
        if(intervals.empty()) return 0;
        
        sort(intervals.begin(), intervals.end());
        
        int count = 0;
        int last_included = 0;
        
        for(int i = 1; i < intervals.size(); i++){
            if(intervals[i][0] < intervals[last_included][1]) {
                count++;
                if(intervals[i][1] <intervals[last_included][1])
                    last_included = i;  
            }
            else{
                last_included = i;
            }
        }
        return count;
    }