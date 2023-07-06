class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        map<char , int>m1 , m2 ;
        vector<int>ans ;
        if(s.size() < p.size()) return {} ;
        if(s == p) return {0} ;
        int i = 0 ; 
        for(auto j : p) {
            m1[j]++ ;
            m2[s[i]]++ ;
            i++ ;
        }
        
        
        for(auto i : m1) {
            cout<<i.first<<" "<<i.second<<endl;
        }
        
        i = 0 ;
        for(int j = p.size() ; j<=s.size() ; j++ , i++) {
            
            if(m1 == m2) ans.push_back(i) ;
            m2[s[j]]++ ;
            if(m2[s[i]] == 1) m2.erase(s[i]) ;
            else m2[s[i]]--;
        }
        
        return ans ;
    }
};