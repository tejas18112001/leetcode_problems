class Solution {
public:
   
    vector<int>square ;
    bool dfs(vector<int>&nums , int length , int ind) {
        if(ind == nums.size()) {
            return true ;
        }
        
        for(int i = 0 ; i<4 ; i++) {
            if(square[i] + nums[ind] <=length) {
                square[i] += nums[ind] ;
                bool t = dfs(nums , length , ind+1) ;
                if(t) return true ;
                square[i]-= nums[ind] ;
            }
        }
        
        return false ;
    }

    bool makesquare(vector<int>& nums) {
        square.resize(4,0) ;
        int sum = accumulate(nums.begin() , nums.end() , 0) ;
        int length = sum/4 ;
        if(sum%4 != 0) return false; 
        sort(nums.begin() , nums.end() , greater<int>()) ;
        return dfs(nums , length , 0) ;
        
    }
};