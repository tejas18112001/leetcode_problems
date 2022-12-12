class Solution {
public:
 
    int result(int n , vector<int> &v)
    {
        if(n == 1)
            return 1 ;
        if(n==2)
            return 2 ;
        if(v[n] != 0)
            return v[n] ;
        
        v[n] = result(n-1 , v) + result(n-2 , v) ;
        return v[n] ;
    }
    
    
    
    
    int climbStairs(int n) {
        
       
        
       vector<int>v(n+1 , 0) ; 

       
        return result(n , v) ;
    }
};