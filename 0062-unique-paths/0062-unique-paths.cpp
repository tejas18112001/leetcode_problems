class Solution {
public:
  
    int solution(int m , int n  ,  vector<vector<int>>&dp ,int p ,int q) {
     if(m >= p || n >= q) {
           return 0 ;
       }
        
    
        
     if(m == p-1 && n == q-1) {
         return 1 ;
     }
       
        
if(dp[m][n] != 0) {
        return dp[m][n] ;
    }
   
    
      
            
      int path1 = solution(m , n+1 , dp , p , q) ; //right
      int path2 = solution(m+1 , n , dp , p , q) ;   // down
     
      dp[m][n] = path1+path2 ;      
 
    return path1 + path2  ;
        
    }
    
    int uniquePaths(int m, int n) {
       vector<vector<int>>dp(m + 1, vector<int>(n +1 ,0)) ;
       
        
        int ans = solution(0 , 0 , dp , m , n) ;
        return ans ;
            
    }
};