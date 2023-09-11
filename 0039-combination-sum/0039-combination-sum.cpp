class Solution {
public:
    
    vector<vector<int>>ans ;
    
    void solution(vector<int>&nums , int target , int index , vector<int>temp) {
       
      if(target < 0) return ;
        
      else if(target == 0) {
          ans.push_back(temp) ;
          
      }
        

  
    else {
           
        for(int i = index ; i<nums.size() ; i++) {
        
           
           temp.push_back(nums[i]) ;
           target = target - nums[i] ;
           solution(nums , target, i , temp) ;
           target = target + nums[i] ;
           temp.pop_back() ;
        
    }
        
    }
  
   
    
    }
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>temp  ;
        solution(candidates , target , 0 , temp) ;
        return ans ;
    }
};