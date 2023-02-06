class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()) return false;
              map<char,int>m ;
              map<char,int>m1 ;
        for(auto i: s1){
            m[i] ++ ;
        }
        
        for(int i = 0 ; i<s1.size() ; i++)
        {
            m1[s2[i]] ++ ;
        }
        
                int i=0;
                int j = s1.size()-1 ;
                if(m1 == m) return true ;
            while(j<s2.size() -1) {
                       
                        
                if(m == m1) return true ;
                
                // cout << i << j << endl;
                j++ ;
                   m1[s2[j]] ++ ;
                   
                if(m1[s2[i]] == 1) m1.erase(s2[i]);
                   else m1[s2[i]]-- ;
                   i++ ;   
            }
        if(m1 == m) return true;
         return false ;
    }
};