class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size() ;
        int l = 0 , r = n-1 ;
        vector<int>ans(n , 0) ;
        for(int i =  n-1 ; i>= 0 ; i--) {
            int a = abs(nums[r]) ;
            int b = abs(nums[l]) ;
            
            if(a >=  b) {
                ans[i] = nums[r]*nums[r] ;
                r-- ;
            }else {
                 ans[i] = nums[l]*nums[l] ;
                 l++ ;
            }
        }
        
        return ans ;
        
    }
};