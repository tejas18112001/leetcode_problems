class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
       
        int sum = 0 , p = 0 ;
        bool q = false ;
        int ans = INT_MIN ;
        for(int i = 0 ; i<n;i++)
        {  
            p   += nums[i] ;
            if(nums[i] > 0)
                q = true ;
            sum += nums[i] ;
            ans = max(ans , sum);
            if(sum<0)
                sum = 0;
        }
       
        if(!q)
            return *max_element(nums.begin() , nums.end()) ;
        int sum1 = 0 ;
        int ans1 = INT_MAX ;
        for(int i = 0 ; i<n;i++)
        {
            sum1  += nums[i] ;
            ans1   = min(ans1 , sum1);
            if(sum1>0)
                sum1 = 0;
        }
        
        
        return max(ans , p- ans1) ;
    }
};