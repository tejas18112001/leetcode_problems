class Solution {
public:
    int countGoodSubstrings(string s) {
        if(s.size() < 3) return 0 ;
        
        int ans = 0 ; 
        for(int i = 2 ; i<3 ; i++) {
            if(s[i] != s[i-1] && s[i] != s[i-2] && s[i-1] != s[i-2]) {
                ans++ ;
            }
        }
        
        cout<<ans<<endl ;
        
        for(int i = 3 ; i<s.size() ; i++) {
            if(s[i] == s[i-1] || s[i] == s[i-2] || s[i-1] == s[i-2]) {
               continue ;
            }
            
            ans++ ;
        }
        
        return ans ;
    }
};