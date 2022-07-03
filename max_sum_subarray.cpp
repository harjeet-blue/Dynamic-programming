int maxSubArray(vector<int>& nums) {
                                      // handles the negative elements too
        int n = nums.size();   
        int max_sum = nums[0];
        int curr_sum = nums[0];
        
        for(int i = 1 ; i<n ; i++){
            
            curr_sum = max( curr_sum + nums[i], nums[i]);   // either continue the subarray or start a new one take the max of both possibilities
            max_sum = max(max_sum, curr_sum);               // take max of curr_max and global max
            
        }
        
        return max_sum;
    }
