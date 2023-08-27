class Solution {
public:
    
//     static bool cmp(vector<int>&a , vector<int>&b) {
       
        
//         return a[1]<b[1] ;
        
//     }
    
//     int findLongestChain(vector<vector<int>>& pairs) {
//          int n = pairs.size() ;
//          sort(pairs.begin() , pairs.end() , cmp) ;
        
//          for(auto i: pairs) {
//              for(auto j : i) {
//                  cout<<j<<" " ;
//              }
//              cout<<endl ;
//          }
//          int ans = 1 ; 
//          pair<int ,int>a = {pairs[0][0] , pairs[0][1]} ;
        
//         for(int i = 1  ; i<n ; i++) {
//             if(pairs[i][0] > a.second) {
//                 a.first = pairs[i][0] ;
//                 a.second = pairs[i][1] ;
//                 ans++ ;
//             }
//         }
//         return ans ;
//     }
    
    
   
    int findLongestChain(vector<vector<int>>& pairs) {
        int n = pairs.size() ;
        sort(pairs.begin(),pairs.end());
        
        vector<int>dp(n , 1) ;
        for(int i = 1 ; i<n ; i++) {
            for(int j = 0 ; j<i ; j++) {
                if(pairs[j][1] < pairs[i][0]) {
                    dp[i] = max(dp[i] , dp[j]+1) ;
                }
            }
        }
        int ans = -1001 ;
        for(int i = 0 ; i<n ; i++) {
            ans = max(ans , dp[i]) ;
        }
        
        return ans ;
    }
}; 