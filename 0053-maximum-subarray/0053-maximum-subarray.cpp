class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_so_far = INT_MIN ;
        int max_current = 0 ;
        for(int i = 0  ; i <nums.size() ; i++)
        {
            max_current += nums[i] ;
            max_so_far = max(max_so_far , max_current) ;
            if(max_current < 0)
             max_current = 0 ;
        }
        return max_so_far ;
    }
};