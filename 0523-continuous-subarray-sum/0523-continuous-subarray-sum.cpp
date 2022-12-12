class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
        int n = nums.size() ;
        vector<int>p(n) ;
        int sum = 0 ;
        for(int i = 0 ; i<n ; i++)
        {
           
            sum += nums[i] ;
             p[i] = sum ;
             
        }
      
        map<int , int>m ;
      
        for(int i = 0 ; i<n ; i++)
        {
            if(i!= 0 && p[i] %k == 0)
                return true;
            m[  p[i] % k  ]++  ;
            
         }
        
        
      
        
        int Max = INT_MIN ;
        for(auto i : m)
        {
            Max = max(Max , i.second) ;
            if(Max >2)
                return true ;
        }
        
        cout<<Max;
        if(Max == 2)
        {
            
        if(m[p[0] %k ] == 2 && p[0]%k != p[1]%k)
            return true ;
        if(m[p[n-1] %k] == 2 && p[n-1]%k != p[n-2] %k)
            return true ;
        for(int i = 1; i<n-1 ; i++)
        {
           if(m[p[i] % k ] == 2 && p[i]%k != p[i-1] %k &&  p[i]%k != p[i+ 1]%k)
               return true ;
        }
        
        }
        return false;
    }
};
