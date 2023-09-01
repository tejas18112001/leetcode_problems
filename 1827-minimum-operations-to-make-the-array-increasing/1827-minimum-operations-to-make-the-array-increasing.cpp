class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size() ;
        if(n == 1)
            return 0 ;
        int ans =  0; 
        int val = nums[0] ;
        for(int i = 0 ; i<n-1 ; i++) {
            if(val < nums[i+1]) {
                val = nums[i+1] ;
                 continue ;
            }
               
            
            int incr = (val+1 ) - nums[i+1] ;
            ans += incr ;
            val = val + 1 ;
            
            
        }
        
        return ans ;
    }
};