class Solution {
public:
    
   bool compare(string s1,string s2)
{
    return s1.size() < s2.size();
}
    
    vector<string> removeAnagrams(vector<string>& words) {
        unordered_map<string , string>mp ;
        
        vector<string>ans ;
        for(int i = words.size()-1 ; i>=1 ; i--) {
              string s1 = words[i] ;
              string s2 = words[i-1] ;
              sort(s1.begin() , s1.end()) ;
              sort(s2.begin() , s2.end()) ;
              if(s1 != s2) {
                  ans.push_back(words[i]) ;
              }
            
            }
        
        ans.push_back(words[0]) ;
        reverse(ans.begin() , ans.end()) ;
        return ans ;
    }
};