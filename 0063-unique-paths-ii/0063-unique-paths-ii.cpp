class Solution {
public:
    
    int solution(int m , int n  ,  vector<vector<int>>&dp) {
         
    
      if(dp[m][n] == -1) 
          return 0 ;
        
        
        
       
        if( m == 0  ) {
           
            
         for(int i = 0 ; i<= n ; i++) {
             if(dp[m][i] == -1) return 0;
         }
            cout<<"j"<<"\n" ;
           return 1 ;
       }
        
         if( n == 0  ) {
           
            
         for(int i = 0 ; i<= m ; i++) {
             if(dp[i][n] == -1) return 0;
         }
            cout<<"j"<<"\n" ;
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
    int uniquePathsWithObstacles(vector<vector<int>>& ob) {
        int m = ob.size() -1 ;
        int n = ob[0].size()-1 ;
        // cout<<m+1<<" "<<n+1<<"\n";
        // if(m == 0 || n == 0) {
        //     return 1 ;
        // }
        vector<vector<int>>dp(m +1 , vector<int>(n +1 , 0));
        for(int i = 0 ; i<=m ; i++) {
            for(int j = 0 ; j<=n ; j++) {
                if(ob[i][j] == 1)
                dp[i][j] = -1 ;
                cout<<dp[i][j]<<" " ;
            }
            
            cout<<"\n" ;
        }
        
    
        
        return solution(m , n , dp) ;
    }
};




























