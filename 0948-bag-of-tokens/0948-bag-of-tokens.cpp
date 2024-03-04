class Solution {
public:
    
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int ans = 0 ; 
        sort(tokens.begin() , tokens.end()) ;
        
        int i = 0 ; 
        int n = tokens.size() ;
        int j = n-1 ;
        bool flag = false ;
        int res = INT_MIN ;
        while(i <= j) {
            
            while(i <= j && tokens[i] <= power) {
                  power -= tokens[i] ;
                  ans++ ;
                  res = max(res , ans) ;
                  i++ ;
              }
              
              if(i<= j && ans > 0) {
                  power += tokens[j] ;
                  ans-- ;
                  j-- ;
              }
            
            else break ;
     }
        return res == INT_MIN ? 0 : res;
        
    }
};