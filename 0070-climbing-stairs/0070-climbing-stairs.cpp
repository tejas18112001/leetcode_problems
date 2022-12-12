class Solution {
public:
 
    int result(int n , vector<int> &v)
    {
        if(n == 1)
            return 1 ;
        if(n==2)
            return 2 ;
        if(v[n-1] != 0)
            return v[n-1] ;
        
        v[n-1] = result(n-1 , v) + result(n-2 , v) ;
        return v[n-1] ;
        }
    
    int climbStairs(int n) {
        
       
        
       vector<int>v(n+1 , 0) ; 
//         v[0] = 0 ;
//         v[1] = 1 ;
//         v[2] = 2 ;
//         int res = 0 ;
//         for(int i = 3 ; i<=n ;i++)
//         {
//            v[i] = v[i-1] + v[i-2] ; 
//         }
        
       
        return result(n , v) ;
    }
};