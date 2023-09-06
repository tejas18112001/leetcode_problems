class Solution {
public:
    
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_map<int , int>mp ;
        for(auto i : brokenLetters) {
            mp[i]++ ;
        }
        
        int ans = 0 ;
        int flag = 0 ;
        
        for(int i = 0 ; i<text.size() ; i++) {
            
            if(text[i] == ' ') {
                if(flag == 0) {
                    ans++ ;
                }
                flag = 0 ;
                
            }else if (mp[text[i]]) {
                flag = 1 ;
            }
            
        }
        
        if(flag == 0) {
            ans++ ;
        }
        
        return ans ;
    }
};