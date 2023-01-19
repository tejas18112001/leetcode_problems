class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size() ;
       
        vector<int>pref(n) ;
        unordered_map<int , int>p;
        int sum = 0 ;
        pref[0] = nums[0] ;
        for(int i = 1 ; i<n;i++)
        {
           pref[i] = pref[i-1] + nums[i] ;
        }
        
        for(int i = 0 ; i<n;i++)
        {
            p[ (pref[i]%k + k)%k  ]++;
        }
        int res = p[0] ;
        for(auto i:p)
        {
            res += i.second *(i.second -1) /2 ;
        }
       
        return res;
    }
};