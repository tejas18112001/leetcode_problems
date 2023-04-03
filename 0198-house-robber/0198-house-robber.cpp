class Solution {
public:
    int solution(vector<int>&nums , int ind ,vector<int>& dp) {
        
        if(ind == nums.size() || ind == nums.size()+1) {
            return 0;
        }
        if( dp[ind]!=-1 )   return dp[ind];
        int sum1=nums[ind]+solution(nums , ind+2,dp);
        int sum2=solution(nums , ind+1,dp) ;
        return dp[ind]=max(sum1 , sum2);
    }
    
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size() ,-1);
        return solution(nums , 0,dp) ; 
        
    }
};