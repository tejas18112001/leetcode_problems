class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size() ;
        vector<int>dp(n , 1) ;
        for(int i = 1 ; i<n ; i++) {
            int Max = INT_MIN ;
            for(int j = 0 ; j<i ; j++) {
                if(nums[j] < nums[i]) {
                    Max = max(Max , dp[j])  ;
                }
            }
            if(Max != INT_MIN)
             dp[i] = Max + 1 ;
        }
        
        int ans = INT_MIN ;
        
        for(int i = 0 ; i<n ; i++) {
            cout<<dp[i]<<" ";
            ans = max(dp[i] , ans) ;
        }
        
        return ans ;
    }
};