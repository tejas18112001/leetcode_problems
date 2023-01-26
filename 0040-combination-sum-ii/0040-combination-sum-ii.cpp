class Solution {
public:
    vector<vector<int>>ans;
    void solution(vector<int>& c ,vector<int>temp , int target , int ind) {
        
            if(target == 0) {
                ans.push_back(temp);
                 return ;
            }
           
        for(int i = ind ; i<c.size() ;i++) {
             if(i && c[i] == c[i-1] &&   i > ind )continue ;
             if(c[i] > target) return ;
            
            temp.push_back(c[i]) ;
            solution(c , temp ,target-c[i] , i+1) ;
            temp.pop_back();
        
        }
       
        
        // solution(c , temp , target ,n, ind+1) ;
        
    }
    
    vector<vector<int>> combinationSum2(vector<int>& c, int target) {
        int n = c.size();
        vector<int>temp;
        sort(c.begin() , c.end()) ;
        solution(c ,temp ,target ,0);
    
//         set<vector<int>>s ;
//         for(auto i:ans) {
//             s.insert(i) ;
//         }
        
//         // ans.clear() ;
//         vector<vector<int>>res ;
//         for(auto & i:s) {
//             res.push_back(i) ;
//         }
        return ans ;
    }
};