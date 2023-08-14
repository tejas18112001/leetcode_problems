class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size() ;
        int low = 0 , high = n-1 ;
        int num = nums[n-1] ;
        
        
        while(low<= high) {
            int mid = (high - low)/2  +low ;
           
            if(nums[mid] > num) {
                low = mid+1 ;
            }else {
                high = mid -1 ;
            }
        }
        return nums[low] ;
    }
};