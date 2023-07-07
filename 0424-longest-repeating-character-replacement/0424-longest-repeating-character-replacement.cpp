class Solution {
public:
    int characterReplacement(string s, int k) {
        int i = 0  ;
        int ans = INT_MIN ;
        map<char , int>mp ;
        int maxf = INT_MIN ;
        for(int j = 0 ; j<s.size() ; j++) {
            mp[s[j]]++ ;
            maxf = max(maxf , mp[s[j]]) ;
            while((j - i +1-maxf )> k) {
                mp[s[i]]-- ;
                i++ ;
            }
            ans = max(ans , j-i+1) ;
        }
        return ans ;
    }
};