class Solution {
public:
    int countPrimes(int n) {
        vector<bool>nums(n , 0) ;
        
        int  ans = 0 ;
        for(int i = 2 ; i < n ; i++) {
            if(nums[i] == false) {
                 ans++ ;
                 for(int j  = 2 ; j*i < n ; j++) 
                  nums[j*i] = true ;
          }
        }
     return ans ;
    }
};