class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        sort(nums.begin() , nums.end()) ;
        
        int ans = 0 ; 
        int num = nums[0] ;
        
        for(int i = 1 ; i <nums.size() ; i++) {
           
            int ccnt = 1 ;
            while(i<nums.size() && nums[i] == nums[i-1]) {
                ccnt++ ;
                i++ ;
            }
            
            if(ans < ccnt) {
                cout<<num<<" "; 
                num = nums[i-1] ;
                ans = max(ans , ccnt) ;
            }
            
            
        }
      
        return num ;
        
    }
};