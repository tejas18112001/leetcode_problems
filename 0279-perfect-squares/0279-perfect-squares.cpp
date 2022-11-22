class Solution {
public:
    
    // int ans(int n )
    // {
    //     int ans1 = INT_MAX ;
    //     if(n<=3)
    //         return n ;
    //     for(int i = 1 ; i*i<= n ; i++)
    //      ans1 = min(ans1 , 1 + ans(n - (i*i)));
    //     return ans1 ;
    // }
    
    int numSquares(int n) {
       
        vector<int>ans(n+1 , INT_MAX);
        for(int i = 0 ; i< n+1 ; i++)
        {
            ans[i] = i ;
        }
        
        int i = 1 ;
        while(i*i <=n)
        {
            int sq = i*i ;
            for(int j = sq ;  j < n+1 ; j++)
            {
                ans[j] = min(ans[j] , 1+ ans[j-sq]) ;
            }
            i++ ; 
        }
        
        return ans[n] ;
        
    }
};