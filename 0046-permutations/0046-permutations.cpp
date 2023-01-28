class Solution {
public:
    
     vector<vector<int>>ans;
    

    void solution(vector<int>&nums , int n , int ind){
       
       if(ind == n){
            ans.push_back(nums) ;
            return ;
        }
        
        for(int i = ind ; i<n ; i++){
          swap(nums[ind] , nums[i]) ;
          solution(nums ,n ,ind+1) ;
          swap(nums[ind] , nums[i]) ;
          
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        int n =  nums.size() ;
        vector<int>temp ;
        temp = nums ;
        solution(nums  , n , 0) ;
        return ans;
    }
};