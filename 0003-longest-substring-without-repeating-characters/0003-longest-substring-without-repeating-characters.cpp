class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
         if(s.size() == 0)
            return 0 ;
         if(s.size() == 1)
             return 1 ;
        
        
        unordered_map<char , int>mp ;
        int ans = INT_MIN ;
        
        int i = 0 ; 
        int j = 0 ;
       
        while(j<s.size() && i< s.size()) {
            
            if(!mp[s[j]] ) {
                mp[s[j]]++ ;
                ans = max(ans , j-i+1) ;
                j++ ;
                
            } else {
                
                mp.erase(s[i]) ;
                i++ ;
                   
         }
            
            
           
        }
        
        return ans ;
    }
};