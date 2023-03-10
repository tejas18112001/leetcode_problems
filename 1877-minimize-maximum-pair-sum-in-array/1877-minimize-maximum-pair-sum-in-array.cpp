class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int ans = INT_MIN ;
        sort(nums.begin() , nums.end()) ;
        
        for(int i = 0 , j = nums.size()-1 ; i<j ; i++  , j--) {
            ans = max(ans , nums[i] + nums[j] ) ;
        }
        return ans ;
    }
};