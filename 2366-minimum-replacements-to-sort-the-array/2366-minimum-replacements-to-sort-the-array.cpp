#define ll long long
class Solution {
public:
    
    

    
    long long minimumReplacement(vector<int>& nums) {
       ll ans = 0 ;
       int Max = 1e9+7 ;
       ll parts = 0 ;
       
        for(int i = nums.size()-1 ; i>=0 ; i--) {
            if(nums[i] <= Max) {
                Max = nums[i] ;
                continue ;
            }
            
             parts = ceil(nums[i] / (double)Max)  ;
             ans += parts -1                      ;
             
            // this gives you the part of distribution which is smallest ;
              Max = nums[i] / (parts)    ;
            
        }
        
        return ans ;
    }
};