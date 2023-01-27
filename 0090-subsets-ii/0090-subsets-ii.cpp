class Solution {
public:
    vector<vector<int>>ans ;
    void solution(vector<int>&nums , vector<int>temp , int n ,int ind) {
       
        ans.push_back(temp) ;
       
      
        for(int i = ind ; i<n ; i++) {
         if(i > ind  &&  nums[i] == nums[i-1]) continue ;
            temp.push_back(nums[i]) ;
            solution(nums , temp ,n ,i+1 ) ;
            temp.pop_back() ;
           
        
        }
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n = nums.size() ;
        sort(nums.begin() , nums.end()) ;
        vector<int>temp ;
        
        solution(nums , temp , n , 0) ;
        
            return ans ;
    }
};