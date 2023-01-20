class Solution {
public:
    vector<vector<int>>ans;
   // set<
    bool sortIncreasing(vector<int>&temp ) {
        
        
        
        for(int i = 0 ; i<temp.size()-1 ; i++) {
            if(temp[i] > temp[i+1]) {
                return false ;
            }
        }
        return true ;
    }
    
//     void sol(vector<int>& nums ,vector<int>&temp  , int i  ) {
        
//         if(i == nums.size())
//         {
//             if(temp.size() > 1 && sortIncreasing(temp) == true)
//                res.push_back(temp) ;
//             return ;
//         }
        
//         sol(nums , temp , i+1);
//         temp.push_back(nums[i]) ;
//         sol(nums ,temp ,i+1) ;
//     }
        
    
      void sub(vector<int> &nums, int i, vector<int> temp)
    {
        if(i==nums.size())
        {
            if(temp.size() > 1 && sortIncreasing(temp) == 1)
              ans.push_back(temp);
            return;
        }
        
        sub(nums, i+1, temp);
        temp.push_back(nums[i]);
        sub(nums, i+1, temp);
    }
    
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        
        vector<int>temp;
        sub(nums , 0 , temp ) ;
        sort(ans.begin(), ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());
        return ans ;
        
        
    }
};