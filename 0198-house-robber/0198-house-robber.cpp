class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size() ;
        vector<int>res(n ,0);
        int rob1 = 0 , rob2 = 0 ;
       
        if(n ==1)
            return nums[0] ;
        
        res[0] = nums[0] ;
        res[1] = max(nums[0] , nums[1]) ;
        if(n == 2)
            return res[1] ;
        for(int i = 2 ; i<n ; i++) 
        {
            
            res[i] = max(nums[i] +res[i-2] , res[i-1] ) ;
        }
        
            return res[n-1] ;;
    }
};