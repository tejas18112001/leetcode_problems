class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int>mp ;
        for(auto i : nums) {
            mp[i]++ ;
        }
        
        sort(nums.begin() , nums.end() , [&] (int a , int b) {
          if(mp[a] ==mp[b]) return a>b ;
            return mp[a]>mp[b] ;
        }) ;
        
        
        vector<int>ans ;
        
        for(int i = 0 ; i<nums.size()-1 ; i++) {
            if(nums[i] != nums[i+1] && k){
                
                ans.push_back(nums[i]) ;
                k-- ;
                    
            }
        }
        
        if(k){
            ans.push_back(nums[nums.size()-1]) ;
        }
        
        return ans ;
    }
};