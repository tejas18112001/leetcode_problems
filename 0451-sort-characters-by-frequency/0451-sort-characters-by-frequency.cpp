class Solution {
public:
    string frequencySort(string s) {
         int n = s.size() ;
        unordered_map<char , int>p ;
        vector<string>bucket(n+1 , "");
        string res ;
       
        for(int i = 0 ; i < n ; i++)
        {
            p[s[i]] ++;
        }
        
        for(auto i:p)
        {    int frq ; char chr ;
             frq = i.second ;
             chr = i.first ;
           // bucket[frq] += chr ;
             bucket[frq].append(frq , chr) ;
        }
        
        
        for(int i = n ; i>0 ; i--)
        {
            if(bucket[i] != "" )
            {
                res += bucket[i] ;
            }
        }
        return res ;
        
    }
};