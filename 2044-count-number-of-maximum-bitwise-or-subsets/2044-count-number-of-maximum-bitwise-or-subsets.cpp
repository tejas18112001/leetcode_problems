class Solution {
public:
   /* 
        \U0001f449if array.size == 1 -> 1
        \U0001f449if all emlement are same -> return 2^n - 1
        \U0001f449 take each subset pass to another function ->calculate or bitOR()
        \U0001f449 temp vector needed to store the subset 
        \U0001f449 calculate all possible subset may contain duplicate also
    */
     
 
    int cnt = 0 ;
    int target = 0  ;
    void subset(vector<int>&nums  , int ind  , int result) {
        
        if(ind >= nums.size()) {
            if(result == target) cnt++ ;
            return ;
        }
        
         subset(nums  , ind+1   , result) ;
         subset(nums  , ind+1  , result | nums[ind]) ;
    }
    
    int countMaxOrSubsets(vector<int>& nums) {
        
         for(int i = 0 ; i<nums.size() ; i++) {
             target  |=  nums[i] ;
        }
        cout<<"max \U0001f449"<<target<<endl;
      
        subset(nums , 0 , 0 ) ;
        return cnt ;
    }
};