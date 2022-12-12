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
        vector<int>r(n) ;
        for(int i = 0 ; i<n ; i++)
        {
            
              m[  p[i] % k  ]++  ;
              r[i] =  p[i] % k ;
              
        }
        
        
        int cnt = -1 ;
        for(int i =1 ; i < n ; i++) 
        {
            if(r[i] == 0)
                return true ;
            
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
            
        if(m[p[0] %k ] == 2 && r[0] != r[1])
            return true ;
        if(m[p[n-1] %k] == 2 && r[n-1] != r[n-2] )
            return true ;
        for(int i = 1; i<n-1 ; i++)
        {
           if(m[p[i] % k ] == 2 && r[i] != r[i-1] &&  r[i] != r[i+ 1])
               return true ;
        }
        
        }
        return false;
    }
};
