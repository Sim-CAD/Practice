 int singleNumber(vector<int>& nums) {
        
        for(int i = 0; i < nums.size() - 1; i++){
            
            nums[i+1] = nums[i] ^ nums[i + 1];
        }
        return nums[nums.size() - 1];
    }

    /*
    
i = 0;  [4, 1, 2, 1, 2]
    A = 100 (4)
    B = 001 (1)
    ^ = 1 0 1 =5
i = 1  [4, 5, 2, 1, 2]
    A= 101(5)
    B = 010(2)
    ^ = 1 1 1 = 7
i = 2  [4, 5, 7, 1, 2]
    A = 111 (7)
    B = 001(1)
    ^ = 1 1 0 = 6
i = 3  [4, 5, 7, 6, 2]
    A = 110
    B = 010
    ^ = 100 (4)
Final array [4, 5, 7, 6, 4]
Arr[n-1] = 4 is the ans

*/