class Solution {
public:
    
    vector<vector<int>>ans ;
    
    void solution(vector<int>&nums , int target , int index , vector<int>temp) {
       
        if(index >= nums.size()) {
            
            if(target == 0) {
                ans.push_back(temp) ;
            }    
            
        return  ;
    }
    
   if(target < 0)return ;
    
    // if(target >= nums[index]) {
        temp.push_back(nums[index]) ;
        solution(nums , target - nums[index]  ,index , temp) ;
        temp.pop_back() ;
    // }
    
    solution(nums , target  , index + 1 , temp) ;
   
    
    }
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>temp  ;
        solution(candidates , target , 0 , temp) ;
        return ans ;
    }
};