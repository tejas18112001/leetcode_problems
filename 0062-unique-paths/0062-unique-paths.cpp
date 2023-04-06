class Solution {
public:
    
    int solution(int m , int n  ,  vector<vector<int>>&dp) {
         if(m == 1 || n == 1) {
          
           return 1 ;
       }
        
      if(dp[m][n] != 0  ) {
          return dp[m][n] ; 
      }
        
    if(n <=  min(n ,m) && m <= min(n , m) && dp[n][m] != 0 ) {
        return dp[n][m] ;
    }
        
    
    
     else {
            
      int path1 = solution(m-1 , n , dp) ;
      int path2 = solution(m , n-1 , dp) ;
      dp[m][n] =  path1 + path2 ;
      if(n <=  min(n ,m) && m <= min(n , m) )
        dp[n][m] = path1 + path2 ;
      
            
    }
     
    return dp[m][n] ;
        
}
    
    int uniquePaths(int m, int n) {
       vector<vector<int>>dp(m + 1, vector<int>(n +1 ,0)) ;
        int ans = solution(m , n , dp) ;
        return ans ;
            
    }
};