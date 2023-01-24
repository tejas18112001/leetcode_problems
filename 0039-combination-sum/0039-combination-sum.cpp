class Solution {
public:
    vector<vector<int>>ans ;
    // int a ;
void solution(vector<int>& candidates ,vector<int>temp ,int target , int ind  , int n) {
        
        if(ind == n)
        {
            if(target == 0) {
                ans.push_back(temp);
                return ;
            }
            return ;
        }
        
         if(candidates[ind] <= target) {
             
         
         temp.push_back(candidates[ind]) ;
        
         solution(candidates ,temp , target  - candidates[ind] , ind ,n);
         
         temp.pop_back();
         
         }
        solution(candidates ,temp ,  target,ind+1 ,n);
    }
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
       // a = n ;
        vector<int>temp ;
        solution(candidates ,temp ,target ,0 , n) ;
        return ans ;
    }
};