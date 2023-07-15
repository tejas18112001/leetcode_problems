class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = 0 , fast = 0 ;
        
        while(true) {
            slow = nums[slow] ;
            fast = nums[nums[fast]] ;
            if(slow == fast) break ;
        }
        
        int slow1 = 0 ;
        while(true) {
            slow1 = nums[slow1]; 
            slow  = nums[slow] ;
            if(slow1 == slow) return slow ;
        }
        
        return 0 ;
    }
};