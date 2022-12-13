class Solution {
public:

  
    
    int minFallingPathSum(vector<vector<int>>& matrix) {
        
        int n = matrix.size() ;
        vector<vector<int>>dp(n , vector<int>(n , 0) );
        for(int i = 0 ; i<n ; i++)
        {
            dp[0][i] = matrix[0][i] ;
        }
        
        for(int i = 1 ; i<n ; i++)
        {
            for(int j = 0 ; j<n ; j++)
            {
                int ans =INT_MAX ;
                if(i-1 >= 0)             ans = min(ans , dp[i-1][j]) ;
                if(i-1 >= 0 && j-1 >= 0)  ans = min(ans , dp[i-1][j-1]) ;
                if(i-1 >= 0 && j +1 < n) ans = min(ans , dp[i-1][j+1]) ;

                dp[i][j] = matrix[i][j] + ans ; 
            }
        }
        
        int res = INT_MAX ;
        
        for(int i = 0 ; i<n ; i++)
        {
            res = min(res , dp[n-1][i]) ;
        }
        
        return res ;
                
        
      
    }
    
   
};