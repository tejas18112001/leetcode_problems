class Solution { 
public:
    int removeDuplicates(vector<int>& nums) {
       
        int ans =  0 ; 
        for(int i = 0 ; i<nums.size() ; i++) {
            if(ans < 2) {
                nums[ans] = nums[i] ;
                ans++ ;
            }
            
            else if(nums[ans-2] < nums[i]) {
                nums[ans++] = nums[i] ;
            }
        }
        
        return ans ;
     
    }
};