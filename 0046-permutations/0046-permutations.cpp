class Solution {
public:
    vector<vector<int>>ans ;
    
    void solution(vector<int>& nums  ,vector<int>temp  ,vector<bool>p, int n , int ind) {
        if(temp.size() == n){
            ans.push_back(temp) ;
            return ;
        }
        
        for(int i = 0 ; i< n ; i++) {
            if( !p[i] ) {
            temp .push_back(nums[i]) ;
            p[i] = true ;
            solution(nums , temp , p , n , i+1) ;
            p[i] = false ;
            temp.pop_back() ;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size() ;
        vector<int>temp ;
        vector<bool>visited(n ,0) ;
        solution(nums ,temp ,visited, n , 0) ;
        return ans ;
    }
};