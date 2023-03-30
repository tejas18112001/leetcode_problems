class Solution {
public:
    
    int lower(vector<int>& nums , int target)
    {
        int n = nums.size() ;
        int low = 0 , high = n-1 ;
        if(n == 0)
            return 0 ;
        while(low<= high)
        {
            int mid = low + (high - low)/2 ;
            
            if(nums[mid] < target)
                low = mid + 1 ;
            else
                high = mid-1 ;
        }
        return low ;
    }
    
    
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int ind1 = lower(nums , target);//lower_bound(nums.begin() , nums.end() , target) -nums.begin() ;
        int  ind2 = lower(nums , target+1) ;//upper_bound(nums.begin() , nums.end() , target) - nums.begin() ;
        cout<<ind1<<" "<<ind2<<" ";
        if(ind1 < nums.size() && nums[ind1] == target )
        {
            return{ind1 , ind2-1} ;
        }
       
        return {-1,-1};
        }
};