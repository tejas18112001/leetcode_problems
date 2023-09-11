class Solution {
public:
   
    
    vector<vector<int>>ans ;
    
    void solution(vector<int>&nums , int target , int index , vector<int>temp) {
       
    if(target == 0){
         ans.push_back(temp) ;
         return  ;
    }
    
      
//     if(index >0 && nums[index] == nums[index+1]) {
        
//         solution(nums , target   ,index+1 , temp) ;
//     }
        
//     if( target >= nums[index]) {
//         temp.push_back(nums[index]) ;
//         solution(nums , target - nums[index]  ,index+1 , temp) ;
//         temp.pop_back() ;
//     }
    
//     solution(nums , target  , index + 1 , temp) ;
        
        
        for(int i = index ; i<nums.size() ; i++) {
            if(i > index && nums[i] == nums[i-1])continue ;
            if(nums[i] > target) break ;
            temp.push_back(nums[i]) ;
            solution(nums , target - nums[i] , i+1 , temp) ;
            temp.pop_back() ;
        }
        
   
    
    }
    
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>temp  ;
        sort(candidates.begin() , candidates.end()) ;
        solution(candidates , target , 0 , temp) ;
        return ans ;
    }
};
