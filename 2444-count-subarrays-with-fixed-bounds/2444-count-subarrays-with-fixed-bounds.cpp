
# define ll long long int


class Solution {
public:
    
    
    
    ll solution(vector<int>nums  , int minK , int maxK) {
        if(nums.size() == 0 ) return 0 ;
        ll ans = 0 ;
        int n = nums.size() ;
        vector<int>min_ind(n+1 ,n) ;
        vector<int>max_ind(n+1,n) ;
        
        for(int i = n-1 ; i>=0 ; i--) {
            min_ind[i] = (nums[i] == minK) ? i : min_ind[i+1] ;
            max_ind[i] = (nums[i] == maxK) ? i : max_ind[i+1] ;
        }
        for(int ind = 0 ; ind < nums.size() ; ind++) {
            int Imp_ind = max(min_ind[ind] , max_ind[ind]) ;
            if(Imp_ind == n ) continue ;
            ans += (n - Imp_ind) ;
            
        }
        return ans ;
    }
    
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        
        
        vector<int>good_part ;
        ll ans = 0 ; 
        for(auto i : nums) {
            if(i < minK || i > maxK){
                ans += solution(good_part , minK , maxK) ;
                good_part.clear() ;
                continue ;
            }
            good_part.push_back(i) ;
        }
        
        ans += solution(good_part , minK , maxK) ;
        return ans ;
        
    }
};