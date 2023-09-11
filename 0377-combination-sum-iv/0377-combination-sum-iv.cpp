class Solution {
public:
    

    vector<int>dp ;
    int solution(vector<int>& nums , int target , int index) {
        
         if(target < 0) return 0 ;
         if(target == 0){
             
             return 1 ;
         }
        
         if(dp[target] != -1) {
             return dp[target] ;
         }
      
         int ans = 0 ; 
        
         for(int i = 0 ; i<nums.size() ; i++) {
           
            
            target = target - nums[i] ;
            ans   +=   solution(nums , target , i) ;
            target = target + nums[i] ;
           
      }
        
        dp[target] = ans ;
        
        return dp[target] ;
       
     
    }
    
    int combinationSum4(vector<int>& nums, int target) {
       
        dp.resize(target+1 , -1) ;
        
        return solution(nums , target  , 0) ;
       
    }
};